//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, OSLogEventLiveStream, SignpostIntervalBuilder, SignpostSupportExactProcessNameFilter, SignpostSupportObjectFilter, SignpostSupportPIDFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter;

@interface SignpostSupportObjectExtractor : NSObject
{
    BOOL __shouldStopProcessing;
    SignpostSupportSubsystemCategoryFilter *_subsystemCategoryFilter;
    SignpostSupportExactProcessNameFilter *_processNameFilter;
    SignpostSupportPIDFilter *_pidFilter;
    SignpostSupportUniquePIDFilter *_uniquePidFilter;
    SignpostSupportObjectFilter *_objectFilter;
    CDUnknownBlockType _beginEventProcessingBlock;
    CDUnknownBlockType _endEventProcessingBlock;
    CDUnknownBlockType _repeatedBeginEventProcessingBlock;
    CDUnknownBlockType _unmatchedEndEventProcessingBlock;
    CDUnknownBlockType _emitEventProcessingBlock;
    CDUnknownBlockType _intervalCompletionProcessingBlock;
    CDUnknownBlockType _animationIntervalCompletionProcessingBlock;
    CDUnknownBlockType _logMessageProcessingBlock;
    CDUnknownBlockType _processingCompletionBlock;
    SignpostIntervalBuilder *_intervalBuilder;
    unsigned long long _processedEventCount;
    CDUnknownBlockType _timedOutBeginEventProcessingBlock;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    unsigned long long __notificationTimeout;
    NSObject<OS_xpc_object> *_notificationConnection;
    NSObject<OS_dispatch_queue> *_notificationProcessingQueue;
    OSLogEventLiveStream *__liveStream;
    CDUnknownBlockType __stopProcessingBlock;
    CDUnknownBlockType __intervalEndHandler;
}

@property(copy, nonatomic) CDUnknownBlockType _intervalEndHandler; // @synthesize _intervalEndHandler=__intervalEndHandler;
@property(copy, nonatomic) CDUnknownBlockType _stopProcessingBlock; // @synthesize _stopProcessingBlock=__stopProcessingBlock;
@property(retain, nonatomic) OSLogEventLiveStream *_liveStream; // @synthesize _liveStream=__liveStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationProcessingQueue; // @synthesize notificationProcessingQueue=_notificationProcessingQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *notificationConnection; // @synthesize notificationConnection=_notificationConnection;
@property(nonatomic) unsigned long long _notificationTimeout; // @synthesize _notificationTimeout=__notificationTimeout;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property BOOL _shouldStopProcessing; // @synthesize _shouldStopProcessing=__shouldStopProcessing;
@property(copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock; // @synthesize timedOutBeginEventProcessingBlock=_timedOutBeginEventProcessingBlock;
@property(nonatomic) unsigned long long processedEventCount; // @synthesize processedEventCount=_processedEventCount;
@property(readonly, nonatomic) SignpostIntervalBuilder *intervalBuilder; // @synthesize intervalBuilder=_intervalBuilder;
@property(copy, nonatomic) CDUnknownBlockType processingCompletionBlock; // @synthesize processingCompletionBlock=_processingCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType logMessageProcessingBlock; // @synthesize logMessageProcessingBlock=_logMessageProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType animationIntervalCompletionProcessingBlock; // @synthesize animationIntervalCompletionProcessingBlock=_animationIntervalCompletionProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType intervalCompletionProcessingBlock; // @synthesize intervalCompletionProcessingBlock=_intervalCompletionProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType emitEventProcessingBlock; // @synthesize emitEventProcessingBlock=_emitEventProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType unmatchedEndEventProcessingBlock; // @synthesize unmatchedEndEventProcessingBlock=_unmatchedEndEventProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType repeatedBeginEventProcessingBlock; // @synthesize repeatedBeginEventProcessingBlock=_repeatedBeginEventProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType endEventProcessingBlock; // @synthesize endEventProcessingBlock=_endEventProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType beginEventProcessingBlock; // @synthesize beginEventProcessingBlock=_beginEventProcessingBlock;
@property(retain, nonatomic) SignpostSupportObjectFilter *objectFilter; // @synthesize objectFilter=_objectFilter;
@property(retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter; // @synthesize uniquePidFilter=_uniquePidFilter;
@property(retain, nonatomic) SignpostSupportPIDFilter *pidFilter; // @synthesize pidFilter=_pidFilter;
@property(retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter; // @synthesize processNameFilter=_processNameFilter;
@property(retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter; // @synthesize subsystemCategoryFilter=_subsystemCategoryFilter;
- (void).cxx_destruct;
- (id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(BOOL)arg1;
- (void)dealloc;
- (void)_processingCompleted:(id)arg1;
- (void)stopProcessing;
- (void)_cleanupState;
- (id)init;
@property(nonatomic) BOOL buildAnimationCompositeIntervalTimelines;
- (BOOL)_processSignpostEvent:(id)arg1 shouldReport:(BOOL)arg2;
- (BOOL)_processSignpostSupportLogMessage:(id)arg1;
- (BOOL)_generateIntervalFromEnd:(id)arg1 shouldReport:(BOOL)arg2;
- (BOOL)_shouldBuildEventWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5 shouldReport:(char *)arg6;
- (BOOL)_shouldProcessEvent:(id)arg1 shouldReport:(char *)arg2;
- (BOOL)_eventPassesFilters:(id)arg1;
- (BOOL)_eventPassesWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5;
- (BOOL)_isTrackingIntervals;
- (BOOL)_hasSignpostProcessingBlock;
- (BOOL)processSerializedObjectsFromSignpostFile:(id)arg1 errorOut:(id *)arg2;
- (void)finishProcessingSerializedData;
- (BOOL)processSerializedObjectsFromData:(id)arg1 errorOut:(id *)arg2;

@end
