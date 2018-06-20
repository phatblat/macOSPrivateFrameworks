//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXMDescribing.h"
#import "AXMFeatureTrackingManagerDelegate.h"
#import "AXMTaskDispatcherDelegate.h"
#import "AXMVisionEngineNodeConnectionDelegate.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AXMFeatureTrackingManager, AXMService, AXMTaskDispatcher, AXMVisionEngineCache, NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, _AXMVisionEngineAnalysisTask;

@interface AXMVisionEngine : NSObject <AXMVisionEngineNodeConnectionDelegate, AXMFeatureTrackingManagerDelegate, AXMTaskDispatcherDelegate, NSCopying, NSSecureCoding, AXMDescribing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_sourceNodes;
    NSMutableArray *_queue_evaluationNodes;
    NSMutableArray *_queue_resultHandlers;
    BOOL _queue_shouldNotifyServiceOfEngineConfigChange;
    _AXMVisionEngineAnalysisTask *_queue_currentTask;
    AXMFeatureTrackingManager *_queue_featureTrackingManager;
    NSMapTable *_queue_featureTrackingObservers;
    BOOL _prioritySchedulingEnabled;
    BOOL _featureTrackingEnabled;
    BOOL _diagnosticsEnabled;
    NSString *_identifier;
    long long _maximumQueueSize;
    unsigned long long _thresholdPriority;
    AXMVisionEngineCache *_cache;
    AXMService *_axMediaUtilsService;
    AXMTaskDispatcher *_taskDispatcher;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AXMTaskDispatcher *taskDispatcher; // @synthesize taskDispatcher=_taskDispatcher;
@property(retain, nonatomic) AXMService *axMediaUtilsService; // @synthesize axMediaUtilsService=_axMediaUtilsService;
@property(nonatomic, getter=areDiagnosticsEnabled) BOOL diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(nonatomic, getter=isFeatureTrackingEnabled) BOOL featureTrackingEnabled; // @synthesize featureTrackingEnabled=_featureTrackingEnabled;
@property(retain, nonatomic) AXMVisionEngineCache *cache; // @synthesize cache=_cache;
@property unsigned long long thresholdPriority; // @synthesize thresholdPriority=_thresholdPriority;
@property BOOL prioritySchedulingEnabled; // @synthesize prioritySchedulingEnabled=_prioritySchedulingEnabled;
@property long long maximumQueueSize; // @synthesize maximumQueueSize=_maximumQueueSize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)captureSessionNodeDidDropFrame:(id)arg1;
- (void)captureSessionNodeWillProcessFrame:(id)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
- (void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
- (BOOL)engineWillAcceptTiggerWithSource:(id)arg1;
- (void)triggerWithSource:(id)arg1 context:(id)arg2;
- (void)trackingManager:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3;
- (void)trackingManager:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
- (void)trackingManager:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
@property(readonly, nonatomic) NSArray *trackedModelClassifiers;
@property(readonly, nonatomic) NSArray *trackedRectangles;
@property(readonly, nonatomic) NSArray *trackedText;
@property(readonly, nonatomic) NSArray *trackedFaces;
- (void)_queue_removeAllFeatureTrackingObservers;
- (void)removeAllFeatureTrackingObservers;
- (void)_queue_removeFeatureTrackingObbserver:(id)arg1;
- (void)removeFeatureTrackingObbserver:(id)arg1;
- (void)_queue_addFeatureTrackingObbserver:(id)arg1 targetQueue:(id)arg2;
- (void)addFeatureTrackingObbserver:(id)arg1 targetQueue:(id)arg2;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)purgeResources:(CDUnknownBlockType)arg1;
- (void)prewarmEngine;
- (void)updateEngineConfiguration:(CDUnknownBlockType)arg1;
- (void)disableResultCaching;
- (void)enableResultCachingWithCacheSize:(long long)arg1;
@property(readonly, nonatomic) long long cacheSize;
@property(readonly, nonatomic) BOOL isCachingEnabled;
- (void)_invokeResultHandlers:(id)arg1 withResult:(id)arg2;
- (void)_invokeResultHandlers:(id)arg1 withError:(id)arg2;
- (void)_queue_removeAllResultHandlers;
- (void)removeAllResultHandlers;
- (void)_queue_removeResultHandler:(CDUnknownBlockType)arg1;
- (void)removeResultHandler:(CDUnknownBlockType)arg1;
- (void)_queue_addResultHandler:(CDUnknownBlockType)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (id)resultHandlers;
- (BOOL)_queue_nodeIdentifierExists:(id)arg1;
- (BOOL)nodeIdentifierExists:(id)arg1;
- (id)_queue_makeUniqueIdentifierForNode:(Class)arg1;
- (id)makeUniqueIdentifierForNode:(Class)arg1;
- (id)_queue_evaluationNodeWithIdentifier:(id)arg1;
- (id)_queue_sourceNodeWithIdentifier:(id)arg1;
- (id)evaluationNodeWithIdentifier:(id)arg1;
- (id)sourceNodeWithIdentifier:(id)arg1;
- (void)addSourceNodes:(id)arg1 evaluationNodes:(id)arg2;
- (void)removeAllEvaluationNodes;
- (void)removeEvaluationNode:(id)arg1;
- (void)insertEvaluationNode:(id)arg1 atIndex:(long long)arg2;
- (void)addEvaluationNode:(id)arg1;
- (BOOL)canAddEvaluationNodeClass:(Class)arg1;
- (BOOL)canAddEvaluationNode:(id)arg1;
@property(readonly, nonatomic) NSArray *evaluationNodes;
- (void)removeAllSourceNodes;
- (void)removeSourceNode:(id)arg1;
- (void)insertSourceNode:(id)arg1 atIndex:(long long)arg2;
- (void)addSourceNode:(id)arg1;
- (BOOL)canAddSourceNodeClass:(Class)arg1;
- (BOOL)canAddSourceNode:(id)arg1;
@property(readonly, nonatomic) NSArray *sourceNodes;
- (void)_queue_handleEvaluatedContext:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_queue_evaluateWithSource:(id)arg1 context:(id)arg2;
- (BOOL)_queue_activeEvaluationNodesExclusivelyUseVisionFramework:(id)arg1;
- (void)_queue_logEvaluatedResult:(id)arg1;
- (id)_queue_activeEvaluationNodesForOptions:(id)arg1 applyPriorityScheduling:(BOOL)arg2;
- (BOOL)_queue_shouldEvaluateNode:(id)arg1 withOptions:(id)arg2;
- (void)_queue_remotelyEvaluateWithSource:(id)arg1 context:(id)arg2;
- (BOOL)_queue_shouldContinueWithoutResultHandlers:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToEngine:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_commonInit;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
