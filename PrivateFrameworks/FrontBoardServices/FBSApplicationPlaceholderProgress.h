//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSInvalidatable.h"
#import "FBSApplicationPlaceholderProgress.h"

@class FBSApplicationPlaceholder, NSObject<OS_dispatch_queue>, NSProgress, NSString;

@interface FBSApplicationPlaceholderProgress : NSObject <FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
    int _invalidated;
    long long _cancellationAllowed;
    long long _state;
    double _percentComplete;
    unsigned long long _installPhase;
    unsigned long long _installState;
    FBSApplicationPlaceholder *_placeholder;
}

@property(readonly, nonatomic) __weak FBSApplicationPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingProgress:(id)arg1 withContext:(void *)arg2;
- (void)_startObservingProgress:(id)arg1 withContext:(void *)arg2;
- (BOOL)queue_canPerformAction:(unsigned long long)arg1;
- (unsigned long long)queue_supportedActions;
- (BOOL)queue_isCancellationAllowed;
- (BOOL)queue_updateProxy:(id)arg1;
- (BOOL)queue_isValid;
- (BOOL)_queue_updateFromProgress;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic) unsigned long long installPhase; // @synthesize installPhase=_installPhase;
@property(readonly, nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)dealloc;
- (id)initWithPlaceholder:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
