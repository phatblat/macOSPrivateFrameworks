//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

#import "NSXPCListenerDelegate.h"

@class BLControl, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSRunLoop, NSString, NSTimer;

@interface BrightnessSystemInternal : NSThread <NSXPCListenerDelegate>
{
    _Bool _shouldKeepRunning;
    _Bool _initializationComplete;
    NSTimer *_timer;
    BLControl *bl;
    CDUnknownBlockType _callback;
    float _cachedSlider;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    NSRunLoop *_NS_rl;
    NSMutableDictionary *_ownedProps;
    NSObject<OS_dispatch_semaphore> *_initSemaphore;
}

- (void)waitForInitialization;
- (void)undoOwnedPropertiesForClient:(id)arg1;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAlsSupported;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)main;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)timerFire:(id)arg1;
- (void)dealloc;
- (void)destroyServer;
- (void)stopRL;
- (id)init;
- (void)runXPCServer;
- (void)initializationCompleted;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (void)clientConnectedWithExpObj:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

