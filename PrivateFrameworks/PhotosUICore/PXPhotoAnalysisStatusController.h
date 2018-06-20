//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSDate, NSError, NSMutableArray, NSString;

@interface PXPhotoAnalysisStatusController : PXObservable
{
    struct {
        char graphStatus;
    } _needsUpdateFlags;
    BOOL _hasBeenReadyForSomeTime;
    BOOL __didReceiveGraphFractionCompleted;
    BOOL __graphReady;
    BOOL __requestingGraphFractionCompleted;
    long long _graphStatus;
    double _graphFractionCompleted;
    NSDate *__initialUpdateDate;
    NSDate *__lastGraphBecameReadyDate;
    NSError *__graphError;
    NSMutableArray *__retryBlocks;
}

+ (id)sharedStatusController;
@property(readonly, nonatomic) NSMutableArray *_retryBlocks; // @synthesize _retryBlocks=__retryBlocks;
@property(nonatomic, getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:) BOOL _requestingGraphFractionCompleted; // @synthesize _requestingGraphFractionCompleted=__requestingGraphFractionCompleted;
@property(retain, nonatomic, setter=_setGraphError:) NSError *_graphError; // @synthesize _graphError=__graphError;
@property(nonatomic, getter=_isGraphReady, setter=_setGraphReady:) BOOL _graphReady; // @synthesize _graphReady=__graphReady;
@property(retain, nonatomic, setter=_setLastGraphBecameReadyDate:) NSDate *_lastGraphBecameReadyDate; // @synthesize _lastGraphBecameReadyDate=__lastGraphBecameReadyDate;
@property(retain, nonatomic, setter=_setInitialUpdateDate:) NSDate *_initialUpdateDate; // @synthesize _initialUpdateDate=__initialUpdateDate;
@property(nonatomic, setter=_setDidReceiveGraphFractionCompleted:) BOOL _didReceiveGraphFractionCompleted; // @synthesize _didReceiveGraphFractionCompleted=__didReceiveGraphFractionCompleted;
@property(nonatomic, setter=_setGraphFractionCompleted:) double graphFractionCompleted; // @synthesize graphFractionCompleted=_graphFractionCompleted;
@property(nonatomic, setter=_setHasBeenReadyForSomeTime:) BOOL hasBeenReadyForSomeTime; // @synthesize hasBeenReadyForSomeTime=_hasBeenReadyForSomeTime;
@property(nonatomic, setter=_setGraphStatus:) long long graphStatus; // @synthesize graphStatus=_graphStatus;
- (void).cxx_destruct;
- (void)_updateGraphStatusIfNeeded;
- (void)_invalidateGraphStatus;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)_dequeueAndPerformBlocks:(id)arg1;
- (BOOL)_isWithinGracePeriod;
- (void)_handleGraphReadyForSomeTimeForDate:(id)arg1;
- (void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2;
- (void)_requestGraphFractionCompleted;
- (void)_handleGraphReadyReplyWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_requestGraphReady;
- (void)_handleInitialGraceDelay;
@property(readonly, nonatomic) NSString *stateDescription;
- (void)registerRetryBlock:(CDUnknownBlockType)arg1;
- (void)update;
- (id)init;

@end

