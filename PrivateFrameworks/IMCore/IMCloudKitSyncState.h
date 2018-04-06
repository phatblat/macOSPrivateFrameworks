//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject
{
    BOOL _isDisablingDevices;
    BOOL _accountIsEnabled;
    unsigned long long _controllerSyncState;
    unsigned long long _controllerSyncType;
    long long _changingEnabledState;
    long long _syncState;
    NSDate *_lastSyncDate;
    NSArray *_errors;
}

@property(readonly, nonatomic) BOOL accountIsEnabled; // @synthesize accountIsEnabled=_accountIsEnabled;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) BOOL isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property(readonly, nonatomic) long long changingEnabledState; // @synthesize changingEnabledState=_changingEnabledState;
@property(readonly, nonatomic) unsigned long long controllerSyncType; // @synthesize controllerSyncType=_controllerSyncType;
@property(readonly, nonatomic) unsigned long long controllerSyncState; // @synthesize controllerSyncState=_controllerSyncState;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSyncEnabledForDisplayOnly;
@property(readonly, nonatomic) BOOL canChangeEnabledSetting;
@property(readonly, nonatomic) BOOL canStartSyncing;
- (BOOL)_isChangingEnabledState;
@property(readonly, nonatomic) BOOL canEnableSyncing;
- (id)description;
@property(readonly, nonatomic) BOOL isSyncingAvailable;
@property(readonly, nonatomic) BOOL isSyncingEnabled;
@property(readonly, nonatomic) BOOL isSyncing;
- (id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2;

@end
