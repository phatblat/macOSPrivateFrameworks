//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WirelessCoexManager/WRMClientInterface.h>

@class NSMutableArray;

@interface WRM_iRATInterface : WRMClientInterface
{
    NSMutableArray *mAppLists;
    _Bool mClientSupportsMultipleAppTypes;
    CDUnknownBlockType mObserver;
    CDUnknownBlockType mOppModeObserver;
    _Bool mLinkPreferenceSubscriptionEnabled;
    _Bool mTelephoneAssertionEnabled;
    _Bool mTelephonyStateEnabled;
    _Bool mLocationAssertionEnabled;
    int mLocationState;
}

- (void)unregisterClient;
- (void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(_Bool)arg3;
- (void)subscribeMultipleAppTypes:(id)arg1 observer:(CDUnknownBlockType)arg2;
- (void)subscribeAppType:(CDStruct_a734b2e2)arg1 observer:(CDUnknownBlockType)arg2;
- (void)setTelephonyEnabled:(_Bool)arg1;
- (void)assertCommCenterBaseBandMode:(int)arg1;
- (void)assertCommCenterBaseBand:(int)arg1;
- (void)subscribeOperatingModeChangeNotification:(CDUnknownBlockType)arg1;
- (int)getStatusUpdateMessageType:(int)arg1;
- (int)getSubscribeMessageType:(int)arg1;
- (void)dealloc;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)handleNotification:(id)arg1:(_Bool)arg2;
- (void)reConnect;
- (void)processNotificationList:(id)arg1;
- (void)processOperatingModeNotification:(id)arg1;
- (void)removeAppType:(id)arg1;
- (void)addAppType:(id)arg1;
- (id)init;

@end

