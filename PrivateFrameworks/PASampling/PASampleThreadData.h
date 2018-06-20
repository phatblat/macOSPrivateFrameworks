//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSString, PASampleFrame, PASampleWaitInfo;

@interface PASampleThreadData : NSObject <PASerializable>
{
    PASampleFrame *leafUserFrame;
    PASampleFrame *leafKernelFrame;
    PASampleWaitInfo *waitInfo;
    NSString *name;
    unsigned long long threadId;
    unsigned long long dispatchQueueId;
    unsigned long long voucherIdentifier;
    unsigned long long userTimeInNs;
    unsigned long long systemTimeInNs;
    unsigned long long instructions;
    unsigned long long cycles;
    int state;
    int staticPriority;
    int currentScheduledPriority;
    int schedulerFlags;
    BOOL threadQos;
    BOOL threadRequestedQos;
    BOOL threadRequestedQosOverride;
    BOOL threadQosPromote;
    BOOL threadQosIpcOverride;
    BOOL threadQosSyncIpcOverride;
    unsigned char ioTier;
    unsigned int isIOPassive:1;
    unsigned int isSuspended:1;
    unsigned int isDarwinBG:1;
    unsigned int isGlobalForcedIdle:1;
    unsigned int isIdleWorkQueue:1;
    unsigned int isRunning:1;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isStackEqualTo:(id)arg1;
- (id)stack;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithKCDataStackshotDeltaThreadV3:(const struct thread_delta_snapshot_v3 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7;
- (id)initWithKCDataStackshotDeltaThreadV2:(const struct thread_delta_snapshot_v2 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6;
- (id)initWithKCDataStackshotThreadV2:(const struct thread_snapshot_v2 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andMachTimebase:(struct mach_timebase_info)arg5 andWaitInfo:(id)arg6;
- (id)initWithKCDataStackshotThreadV4:(const struct thread_snapshot_v4 *)arg1 withName:(id)arg2 leafUserFrame:(id)arg3 leafKernelFrame:(id)arg4 machTimebase:(struct mach_timebase_info)arg5 waitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7 threadInstructionCycles:(const struct instrs_cycles_snapshot *)arg8;
- (id)initWithTid:(unsigned long long)arg1;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2 andLeafKernelFrame:(id)arg3;
@property(readonly) BOOL hasAnyInfo;
@property(readonly) BOOL hasDispatchQueue;
@property(readonly) unsigned int powerstatsFlags;
@property(readonly) BOOL hasValidPowerstatsFlags;
@property(readonly) BOOL isProcessorIdleThread;
@property(readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property(readonly) BOOL isAbortingInterruptibleWaits;
@property(readonly) BOOL isHaltedAtTermination;
@property(readonly) BOOL isWaitingUninterruptibly;
@property(readonly) BOOL isRunnable;
@property(readonly) BOOL isStopped;
@property(readonly) BOOL isWaiting;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
