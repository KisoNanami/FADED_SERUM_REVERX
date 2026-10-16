"""Project layout inspired by JUCE 8 examples, without inventing class layouts."""
from pathlib import PurePosixPath
import re

GROUPS = {
    'auth/diagnostics': 'Source/Authentication/AuthDiagnostics.cpp',
    'auth/entitlement': 'Source/Authentication/Entitlement.cpp',
    'auth/manager': 'Source/Authentication/AuthManager.cpp',
    'auth/serialization': 'Source/Authentication/AuthViewModel.cpp',
    'auth/storage': 'Source/Authentication/AuthStateStorage.cpp',
    'auth/network': 'Source/Authentication/DeviceRegistration.cpp',
    'audio/engine': 'Source/Audio/EngineSignal.cpp',
    'audio/gating': 'Source/Audio/RenderGate.cpp',
    'audio/midi': 'Source/Audio/MidiNoteDrain.cpp',
    'audio/processor': 'Source/PluginProcessorProcessing.cpp',
    'ui/editor': 'Source/UI/EditorOnboarding.cpp',
    'ui/onboarding': 'Source/UI/OnboardingPanel.cpp',
    'ui/webview': 'Source/UI/WebViewDiagnostics.cpp',
    'platform/juce': 'Source/Platform/JuceWindowPeer.cpp',
    'platform/windows': 'Source/Platform/WindowsShell.cpp',
    'platform/webview2': 'Source/Platform/WebView2Policy.cpp',
    'standalone/audio': 'Source/Standalone/AudioDevice.cpp',
    'standalone/cloud': 'Source/Standalone/CloudSession.cpp',
    'standalone/worker': 'Source/Standalone/AssetWorker.cpp',
    'standalone/cli': 'Source/Standalone/CommandDispatcher.cpp',
}

OVERRIDES = {
    'serialize_auth_state': 'Source/Authentication/AuthStateWriter.cpp',
    'deserialize_auth_state': 'Source/Authentication/AuthStateReader.cpp',
    'initialize_processor': 'Source/PluginProcessor.cpp',
    'prepare_to_play': 'Source/PluginProcessor.cpp',
    'fade_out_over_64_samples': 'Source/Audio/OutputFade.cpp',
    'configure_shared_ai_surfaces': 'Source/UI/SharedAiSurfaces.cpp',
    'apply_auth_state_to_shared_ai_surfaces': 'Source/UI/SharedAiSurfaces.cpp',
    'synchronize_ai_surface_auth_state': 'Source/UI/SharedAiSurfaces.cpp',
    'on_auth_state_changed': 'Source/UI/EditorAuthState.cpp',
    'synchronize_webview_auth_state': 'Source/UI/EditorAuthState.cpp',
    'synchronize_onboarding_visibility': 'Source/UI/EditorAuthState.cpp',
    'configure_onboarding_callbacks': 'Source/UI/EditorCallbacks.cpp',
    'build_webview_auth_json': 'Source/Authentication/AuthViewModel.cpp',
    'build_instrument_view_model': 'Source/UI/InstrumentViewModel.cpp',
    'paint_recovery_surface': 'Source/UI/OnboardingRecovery.cpp',
    'show_native_recovery_surface': 'Source/UI/OnboardingRecovery.cpp',
    'show_setup_error': 'Source/UI/OnboardingRecovery.cpp',
    'dispatch_deep_link': 'Source/UI/OnboardingNavigation.cpp',
    'filter_browser_navigation': 'Source/UI/OnboardingNavigation.cpp',
    'handle_native_command': 'Source/UI/OnboardingNavigation.cpp',
    'handle_acceptance_request': 'Source/UI/OnboardingAcceptance.cpp',
    'commit_acceptance': 'Source/UI/OnboardingAcceptance.cpp',
    'persist_acceptance_callback': 'Source/UI/OnboardingAcceptance.cpp',
    'validate_acceptance_nonce': 'Source/UI/OnboardingAcceptance.cpp',
    'build_account_handoff_url': 'Source/UI/OnboardingNavigation.cpp',
    'update_panel_auth_state': 'Source/UI/OnboardingState.cpp',
    'push_auth_state_to_javascript': 'Source/UI/OnboardingState.cpp',
    'check_startup_requirements': 'Source/UI/OnboardingStartup.cpp',
    'set_component_visible': 'Source/Platform/JuceComponent.cpp',
    'bring_component_to_front': 'Source/Platform/JuceComponent.cpp',
    'install_thread_message_hook': 'Source/Platform/JuceMessageLoop.cpp',
    'launch_child_process': 'Source/Platform/WindowsProcess.cpp',
    'read_process_creation_time': 'Source/Platform/WindowsProcess.cpp',
    'create_daw_ipc_transport': 'Source/Platform/WindowsIpc.cpp',
    'can_write_file': 'Source/Platform/WindowsSecurity.cpp',
    'verify_publisher_signature': 'Source/Platform/WindowsTrust.cpp',
    'query_os_version': 'Source/Platform/WindowsVersion.cpp',
    'launch_updater': 'Source/Platform/Updater.cpp',
    'load_runtime': 'Source/Platform/WebView2Runtime.cpp',
    'read_runtime_location': 'Source/Platform/WebView2Runtime.cpp',
    'render_preview': 'Source/Standalone/PreviewRenderer.cpp',
}

# Replace only primitive representations with the same signedness and width.
TYPES = {
    '__int8': 'std::int8_t', '__int16': 'std::int16_t',
    '__int32': 'std::int32_t', '__int64': 'std::int64_t',
    '_BYTE': 'std::uint8_t', '_WORD': 'std::uint16_t',
    '_DWORD': 'std::uint32_t', '_QWORD': 'std::uint64_t',
    '_BOOL8': 'std::int64_t',
    '_UNKNOWN': 'void',
}


def destination(relative):
    path = PurePosixPath(relative)
    if str(path.parent) == 'reference/duplicate_exports':
        name = ''.join(word[0].upper() + word[1:] for word in path.stem.split('_'))
        return f'Reference/DuplicateExports/{name}.cpp'
    # The processor auth callback shares a basename with the editor callback.
    if str(path.parent) == 'audio/gating':
        return OVERRIDES.get(path.stem, GROUPS[str(path.parent)]) if path.stem == 'fade_out_over_64_samples' else GROUPS[str(path.parent)]
    return OVERRIDES.get(path.stem, GROUPS[str(path.parent)])


def lower_camel(name):
    if name.startswith('g_'):
        return name[2:]
    words = name.split('_')
    return words[0][0].lower() + words[0][1:] + ''.join(
        word[0].upper() + word[1:] for word in words[1:] if word)


def modern_type(words):
    if len(words) == 2 and words[0] in ('unsigned', 'signed') and words[1] in TYPES:
        width = re.fullmatch(r'__int(8|16|32|64)', words[1])
        if width:
            return f'std::{"u" if words[0] == "unsigned" else ""}int{width[1]}_t'
    if len(words) == 1:
        return TYPES.get(words[0])
    return None
