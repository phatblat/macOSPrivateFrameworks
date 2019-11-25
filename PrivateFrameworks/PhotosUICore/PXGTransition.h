//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, PXGLayout;

@interface PXGTransition : NSObject
{
    BOOL _invalid;
    BOOL _animatingTowardsInitialState;
    BOOL _animatingTowardsFinalState;
    BOOL _isIntercative;
    float _fractionCompleted;
    NSSet *_animations;
    PXGLayout *_layout;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) BOOL isIntercative; // @synthesize isIntercative=_isIntercative;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) BOOL animatingTowardsFinalState; // @synthesize animatingTowardsFinalState=_animatingTowardsFinalState;
@property(readonly, nonatomic) BOOL animatingTowardsInitialState; // @synthesize animatingTowardsInitialState=_animatingTowardsInitialState;
@property(readonly, nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) float fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly, nonatomic) NSSet *animations; // @synthesize animations=_animations;
- (void).cxx_destruct;
- (void)animateToFinalStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateToInitialStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithAnimations:(id)arg1 layout:(id)arg2;

@end

