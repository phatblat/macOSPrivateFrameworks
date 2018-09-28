//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSObject<OS_dispatch_queue>, NSString;

@interface CUSystemMonitor : NSObject
{
    BOOL _activateCalled;
    BOOL _activateCompleted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateCalled2;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _callChangedHandler;
    CDUnknownBlockType _consoleUserChangedHandler;
    CDUnknownBlockType _familyUpdatedHandler;
    CDUnknownBlockType _meDeviceChangedHandler;
    CDUnknownBlockType _netFlagsChangedHandler;
    CDUnknownBlockType _primaryIPChangedHandler;
    CDUnknownBlockType _powerUnlimitedChangedHandler;
    CDUnknownBlockType _primaryAppleIDChangedHandler;
    CDUnknownBlockType _rotatingIdentifierChangedHandler;
    CDUnknownBlockType _screenLockedChangedHandler;
    CDUnknownBlockType _screenOnChangedHandler;
    CDUnknownBlockType _screenSaverChangedHandler;
    CDUnknownBlockType _firstUnlockHandler;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler; // @synthesize wifiStateChangedHandler=_wifiStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType firstUnlockHandler; // @synthesize firstUnlockHandler=_firstUnlockHandler;
@property(copy) CDUnknownBlockType screenSaverChangedHandler; // @synthesize screenSaverChangedHandler=_screenSaverChangedHandler;
@property(copy) CDUnknownBlockType screenOnChangedHandler; // @synthesize screenOnChangedHandler=_screenOnChangedHandler;
@property(copy) CDUnknownBlockType screenLockedChangedHandler; // @synthesize screenLockedChangedHandler=_screenLockedChangedHandler;
@property(copy) CDUnknownBlockType rotatingIdentifierChangedHandler; // @synthesize rotatingIdentifierChangedHandler=_rotatingIdentifierChangedHandler;
@property(copy) CDUnknownBlockType primaryAppleIDChangedHandler; // @synthesize primaryAppleIDChangedHandler=_primaryAppleIDChangedHandler;
@property(copy) CDUnknownBlockType powerUnlimitedChangedHandler; // @synthesize powerUnlimitedChangedHandler=_powerUnlimitedChangedHandler;
@property(copy) CDUnknownBlockType primaryIPChangedHandler; // @synthesize primaryIPChangedHandler=_primaryIPChangedHandler;
@property(copy) CDUnknownBlockType netFlagsChangedHandler; // @synthesize netFlagsChangedHandler=_netFlagsChangedHandler;
@property(copy) CDUnknownBlockType meDeviceChangedHandler; // @synthesize meDeviceChangedHandler=_meDeviceChangedHandler;
@property(copy) CDUnknownBlockType familyUpdatedHandler; // @synthesize familyUpdatedHandler=_familyUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType consoleUserChangedHandler; // @synthesize consoleUserChangedHandler=_consoleUserChangedHandler;
@property(copy) CDUnknownBlockType callChangedHandler; // @synthesize callChangedHandler=_callChangedHandler;
@property(copy) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int wifiState;
@property(readonly, nonatomic) unsigned int wifiFlags;
@property(readonly, nonatomic) BOOL firstUnlocked;
@property(readonly) BOOL screenSaverActive;
@property(readonly) BOOL screenOn;
@property(readonly) BOOL screenLocked;
@property(readonly, copy) NSData *rotatingIdentifierData;
@property(readonly) CDStruct_83abfce7 rotatingIdentifier48;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv6Addr;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv4Addr;
@property(readonly) BOOL primaryAppleIDIsHSA2;
@property(readonly) BOOL powerUnlimited;
@property(readonly) unsigned int netFlags;
@property(readonly) BOOL meDeviceValid;
@property(readonly, copy) NSString *meDeviceName;
@property(readonly, copy) NSString *meDeviceIDSDeviceID;
@property(readonly, copy) NSString *meDeviceFMFDeviceID;
@property(readonly, copy) NSArray *familyMembers;
@property(readonly, copy) NSString *consoleUserName;
@property(readonly) unsigned int consoleUserID;
@property(readonly, copy) NSData *bluetoothAddressData;
@property(readonly) CDStruct_83abfce7 bluetoothAddress48;
@property(readonly) int activeCallCount;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

