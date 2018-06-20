//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "CKAccountObserver.h"

@class APSConnection, CKAccountStore, NSString;

@interface ADAdTrackingSchedulingManager : NSObject <CKAccountObserver, APSConnectionDelegate>
{
    CKAccountStore *_accountStore;
    id _accountStoreToken;
    BOOL _isConfigRequestInFlight;
    id <NSObject> _storeFrontNotifyToken;
    id <NSObject> _accountChangedNotifyToken;
    APSConnection *_pushConnection;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL isConfigRequestInFlight; // @synthesize isConfigRequestInFlight=_isConfigRequestInFlight;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) id <NSObject> accountChangedNotifyToken; // @synthesize accountChangedNotifyToken=_accountChangedNotifyToken;
@property(retain, nonatomic) id <NSObject> storeFrontNotifyToken; // @synthesize storeFrontNotifyToken=_storeFrontNotifyToken;
- (void).cxx_destruct;
- (void)accountStore:(id)arg1 primaryAccountChanged:(id)arg2;
- (void)runOnFirstUnlock:(CDUnknownBlockType)arg1;
- (BOOL)deviceUnlockedOnce;
- (BOOL)purpleBuddyWillRun;
- (void)handleAccountChange;
- (void)pushDisable;
- (void)pushEnable;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)currentBundleID;
- (void)forceExpiration;
- (void)refreshConfiguration:(CDUnknownBlockType)arg1;
- (void)handleConfiguration;
- (BOOL)isAdEnabledLocality;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

