//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFHardwareManagerCallbacks.h"
#import "NSXPCConnectionDelegate.h"

@class NFHardwareControllerInfo, NSArray, NSDictionary, NSMutableSet, NSString, NSUUID, NSXPCConnection;

@interface NFHardwareManager : NSObject <NSXPCConnectionDelegate, NFHardwareManagerCallbacks>
{
    NSXPCConnection *_connection;
    NSMutableSet *_sessions;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
    NSArray *_secureElements;
    NSDictionary *_secureElementsById;
    unsigned int _hwSupport;
    BOOL _didPreWarm;
}

+ (id)sharedHardwareManager;
- (void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL suspendBackgroundTagReading;
@property(readonly, nonatomic) BOOL isBackgroundTagReadingAvailable;
- (void)invalidateConnection;
- (id)getBoosterInfo;
- (id)getSecureElementInfo;
- (id)getControllerInfo;
- (BOOL)areFeaturesSupported:(unsigned long long)arg1 outError:(id *)arg2;
- (BOOL)areSessionsAllowed;
- (BOOL)isInRestrictedMode;
- (id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)startNdefTagSession:(CDUnknownBlockType)arg1;
- (id)startPeerPaymentSession:(CDUnknownBlockType)arg1;
- (BOOL)preWarm;
- (id)startSesHatSession:(CDUnknownBlockType)arg1;
- (id)startReaderSession:(CDUnknownBlockType)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(CDUnknownBlockType)arg1;
- (id)startValueAddedServiceSession:(CDUnknownBlockType)arg1;
- (id)startValueAddedServiceSession:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)startSecureElementManagerSessionWithPriority:(CDUnknownBlockType)arg1;
- (id)startSecureElementManagerSession:(CDUnknownBlockType)arg1;
- (id)startSecureElementSession:(id)arg1 didStartCallback:(CDUnknownBlockType)arg2;
- (id)startContactlessUICCSession:(CDUnknownBlockType)arg1;
- (id)startContactlessSession:(CDUnknownBlockType)arg1;
- (id)startContactlessPaymentSession:(CDUnknownBlockType)arg1;
- (id)startECommercePaymentSession:(CDUnknownBlockType)arg1;
- (id)startFieldDetectSession:(CDUnknownBlockType)arg1;
- (id)hostEmulationLog;
- (BOOL)secureElementBootHistory:(id *)arg1;
- (void)refreshSecureElements;
- (id)secureElementWithIdentifier:(id)arg1;
- (id)secureElements;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(BOOL)arg2;
- (id)toggleGPIO:(unsigned short)arg1;
- (id)enableHeadlessTestMode:(unsigned short)arg1;
- (BOOL)triggerDelayedWake:(unsigned char)arg1;
- (BOOL)setFieldDetectEnabled:(BOOL)arg1;
- (void)unregisterEventListener:(id)arg1;
- (void)registerEventListener:(id)arg1;
- (BOOL)hasCard;
- (void)setAuthorization:(id)arg1;
@property(readonly) NSUUID *blessedUser;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (unsigned int)checkUserBlessing:(id)arg1;
- (id)disableHeadless;
- (BOOL)getHeadlessFactoryMode:(id *)arg1;
- (id)getHeadlessModeFlags:(unsigned int *)arg1;
- (id)configureHeadlessFactoryMode:(BOOL)arg1;
- (id)expressTransitIdentifier;
- (BOOL)expressModesEnabled;
- (BOOL)isExpressAppletTypeSupported:(unsigned char)arg1;
- (BOOL)isExpressModeSupported;
- (id)pushSignedRF:(id)arg1;
- (id)getUniqueFDRKey:(id *)arg1;
- (id)getDieID;
- (id)getDieIDWithError:(id *)arg1;
- (id)rfSettings;
- (id)boosterInfo;
@property(readonly) NFHardwareControllerInfo *controllerInfo;
- (id)controllerInfoWithError:(id *)arg1;
- (unsigned int)queryHardwareSupport:(id *)arg1;
- (unsigned int)getHwSupport;
- (id)updateHWSupport;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (void)sessionDidEnd:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_connectIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

