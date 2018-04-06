//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSStoryboard, NSViewController, NSWindow, RPPairingViewController;

@interface RPPairingUIController : NSObject
{
    NSStoryboard *_storyboard;
    RPPairingViewController *_vc;
    NSViewController *_presentingViewController;
    NSWindow *_window;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _tryPINHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType tryPINHandler; // @synthesize tryPINHandler=_tryPINHandler;
@property(copy, nonatomic) CDUnknownBlockType retryHandler; // @synthesize retryHandler=_retryHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)pairingError:(id)arg1;
- (void)invalidate;
- (void)_ensureUIStarted;
- (void)activate;
- (void)_cleanup;
- (id)init;

@end
