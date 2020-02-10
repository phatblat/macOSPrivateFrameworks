//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSVBXPCConnectionClient.h"

@class NSPreviewTargetWindow, NSString, NSXPCConnection;

@interface NSPreviewTargetViewController : NSViewController <NSVBXPCConnectionClient>
{
    NSString *_previewIdentifier;
    NSPreviewTargetWindow *_window;
    struct os_unfair_lock_s _retainReleaseLock;
    struct os_unfair_lock_s _invalidationLock;
    long long _oldApplicationActivationPolicy;
    unsigned int _shouldRestoreActivationPolicy:1;
    unsigned int _invalid:1;
    NSXPCConnection *_nsxpcConnection;
    id <NSISEngineDelegate> _layoutEngineDelegate;
    struct CGRect _hostViewFrame;
}

+ (id)nsxpcListenerEndpoint;
+ (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
+ (id)nsxpcInterface;
+ (id)previewTargetViewControllerForIdentifier:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property __weak id <NSISEngineDelegate> layoutEngineDelegate; // @synthesize layoutEngineDelegate=_layoutEngineDelegate;
@property __weak NSXPCConnection *nsxpcConnection; // @synthesize nsxpcConnection=_nsxpcConnection;
@property struct CGRect hostViewFrame; // @synthesize hostViewFrame=_hostViewFrame;
- (void).cxx_destruct;
- (void)loadView;
- (void)setView:(id)arg1;
- (id)previewTargetView;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)_connectionInvalidated;
- (void)invalidate;
@property(readonly) BOOL isValid;
- (void)ifValidPerform:(CDUnknownBlockType)arg1;
- (void)_whileHoldingInvalidationLockPerform:(CDUnknownBlockType)arg1;
- (void)hostViewFrameInScreenCoordsDidChange:(struct CGRect)arg1;
- (void)bootstrap:(CDStruct_37f6246c)arg1 reply:(CDUnknownBlockType)arg2;
- (id)awakeFromPreviewHost;
- (void)actuateIconButton:(id)arg1;
- (id)previewIdentifier;
- (void)_afterSettingEventMaskOfWindow:(id)arg1;
- (unsigned int)_setEventMaskBasedOnWindow:(id)arg1;
- (void)_sendEventMaskToHost:(unsigned int)arg1;
- (id)asynchronousRemoteObjectProxy:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowWillBecomeKey:(id)arg1;
- (void)guaranteeSignal:(id)arg1 after:(CDUnknownBlockType)arg2;
- (void)fauxSynchronousRemoteObjectProxy:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
