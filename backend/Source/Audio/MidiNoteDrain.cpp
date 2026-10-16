#include <cstdint>

// ===== MuteDrain_AllNotesOff_real @ 0x180067de0 size=333 =====
// standalone: engine note-off sweep + MIDI ring drain counters
void audioMidiDrainPendingNotes (std::int64_t processor)
{
    volatile std::int64_t* engineNoteGenerationCounter; // rax
    std::int64_t remainingEngineSlots; // r13
    std::int64_t remainingGenerationCounters; // rdx
    int engineNoteBase; // r15d
    std::uint8_t engineResetCommand; // r12
    int* engineMidiRingState; // rsi
    std::int64_t currentNoteGeneration; // rbp
    unsigned int resetNoteIndex; // ebx
    std::int64_t synthesisEngine; // rdi
    int ringWritePosition; // eax
    int ringReadPosition; // ebp
    unsigned int drainedEventCount; // r14d
    std::int64_t updatedNoteGeneration; // r13
    unsigned int pendingResetNoteIndex; // ebx
    std::int64_t pendingSynthesisEngine; // rdi
    std::int64_t processorAlias; // [rsp+60h] [rbp+8h]
    int savedRingWritePosition; // [rsp+68h] [rbp+10h]
    std::int64_t remainingEngineSlotsScratch; // [rsp+70h] [rbp+18h]

    processorAlias = processor;
    if (*(std::uint32_t*)(processor + 8) == 6)
    {
        engineNoteGenerationCounter = (volatile std::int64_t*)(processor + 280808);
        remainingEngineSlots = 8;
        remainingEngineSlotsScratch = 8;
        for (remainingGenerationCounters = 8; remainingGenerationCounters != 0; --remainingGenerationCounters)
        {
            _InterlockedIncrement64 (engineNoteGenerationCounter);
            engineNoteGenerationCounter += 644;
        }
        engineNoteBase = 0;
        engineResetCommand = 3;
        engineMidiRingState = (int*)(processor + 280800);
        do
        {
            currentNoteGeneration = *((std::uint64_t*)engineMidiRingState + 1);
            if (currentNoteGeneration != *((std::uint64_t*)engineMidiRingState + 3))
            {
                resetNoteIndex = 0;
                synthesisEngine = processor + 69152;
                do
                {
                    while (resetNoteIndex == 0)
                    {
                        sub_1803DD160 (synthesisEngine, engineResetCommand);
                        resetNoteIndex = 1;
                    }
                    sub_1803DD160 (synthesisEngine, engineNoteBase + resetNoteIndex + 10);
                    ++resetNoteIndex;
                } while (resetNoteIndex < 0x10);
                *((std::uint64_t*)engineMidiRingState + 3) = currentNoteGeneration;
                processor = processorAlias;
            }
            ringWritePosition = engineMidiRingState[1];
            savedRingWritePosition = ringWritePosition;
            ringReadPosition = *engineMidiRingState;
            drainedEventCount = 0;
            if (*engineMidiRingState != ringWritePosition)
            {
                do
                {
                    if (drainedEventCount >= 0x80)
                        break;
                    *engineMidiRingState = ++ringReadPosition;
                    updatedNoteGeneration = *((std::uint64_t*)engineMidiRingState + 1);
                    if (updatedNoteGeneration != *((std::uint64_t*)engineMidiRingState + 3))
                    {
                        pendingResetNoteIndex = 0;
                        pendingSynthesisEngine = processor + 69152;
                        do
                        {
                            while (pendingResetNoteIndex == 0)
                            {
                                sub_1803DD160 (pendingSynthesisEngine, engineResetCommand);
                                pendingResetNoteIndex = 1;
                            }
                            sub_1803DD160 (pendingSynthesisEngine, engineNoteBase + pendingResetNoteIndex + 10);
                            ++pendingResetNoteIndex;
                        } while (pendingResetNoteIndex < 0x10);
                        *((std::uint64_t*)engineMidiRingState + 3) = updatedNoteGeneration;
                        ringWritePosition = savedRingWritePosition;
                    }
                    ++drainedEventCount;
                    processor = processorAlias;
                } while (ringReadPosition != ringWritePosition);
                remainingEngineSlots = remainingEngineSlotsScratch;
            }
            ++engineResetCommand;
            engineNoteBase += 15;
            engineMidiRingState += 1288;
            remainingEngineSlotsScratch = --remainingEngineSlots;
            processor = processorAlias;
        } while (remainingEngineSlots != 0);
    }
}
