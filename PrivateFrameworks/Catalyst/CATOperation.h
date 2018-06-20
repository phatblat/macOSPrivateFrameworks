//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSDate, NSDictionary, NSError, NSLock, NSUUID, _CATObserverManager;

@interface CATOperation : NSOperation
{
    NSArray *mCallStackSymbols;
    // Error parsing type: Ai, name: mState
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
    BOOL _canCancel;
    NSUUID *_UUID;
    NSDate *_createdDate;
    NSDate *_enqueuedDate;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    unsigned long long _phase;
    NSError *_error;
    id _resultObject;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

+ (id)callStackSymbols;
+ (id)keyPathsForValuesAffectingIsCanceled;
+ (BOOL)isCancelable;
+ (BOOL)automaticallyNotifiesObserversOfFinishedDate;
+ (BOOL)automaticallyNotifiesObserversOfStartedDate;
+ (BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+ (BOOL)automaticallyNotifiesObserversOfCreatedDate;
+ (BOOL)automaticallyNotifiesObserversOfUUID;
@property long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(readonly) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) id resultObject; // @synthesize resultObject=_resultObject;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long phase; // @synthesize phase=_phase;
@property(retain) NSDate *finishedDate; // @synthesize finishedDate=_finishedDate;
@property(retain) NSDate *startedDate; // @synthesize startedDate=_startedDate;
@property(retain) NSDate *enqueuedDate; // @synthesize enqueuedDate=_enqueuedDate;
@property(retain) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3;
- (void)addObserver:(id)arg1;
- (void)operationDidFinish;
- (void)operationWillFinish;
- (void)operationWillStart;
- (BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;
- (void)operationWillEnqueueOntoOperationQueue:(id)arg1;
- (void)finalizeOperation;
- (void)endOperationWithError:(id)arg1;
- (void)endOperationWithResultObject:(id)arg1;
- (void)endOperationSuccessfullyIfNeeded;
- (void)start;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinished;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
@property(readonly) BOOL isCanceled;
- (BOOL)isAsynchronous;
- (id)stateDescription;
- (id)description;
- (id)init;

@end

