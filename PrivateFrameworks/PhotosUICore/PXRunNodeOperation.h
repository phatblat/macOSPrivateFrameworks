//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation
{
    unsigned long long _state;
    PXRunNode *_runNode;
    NSLock *__stateLock;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;
@property(readonly, nonatomic) NSLock *_stateLock; // @synthesize _stateLock=__stateLock;
@property(readonly, nonatomic) PXRunNode *runNode; // @synthesize runNode=_runNode;
- (void).cxx_destruct;
- (BOOL)completeIfAble;
- (BOOL)cancelIfAble;
- (BOOL)_transitionToState:(unsigned long long)arg1;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)start;
- (id)initWithRunNode:(id)arg1;
- (id)init;

@end

