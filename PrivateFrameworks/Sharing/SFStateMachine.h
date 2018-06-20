//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SFStateMachine : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    BOOL _shouldLogStateTransitions;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id <SFStateMachineDelegate> _delegate;
}

@property(nonatomic) BOOL shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
@property id <SFStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
- (void).cxx_destruct;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
@property(copy) NSString *currentState; // @synthesize currentState=_currentState;
- (BOOL)applyState:(id)arg1;
- (id)target;
- (void)dealloc;
- (id)init;

@end
