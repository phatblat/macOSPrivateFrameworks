//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Sharing/SFPeerDevice.h>

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding>
{
    BOOL _unlockEnabled;
    BOOL _keyExists;
    BOOL _bluetoothCloudPaired;
    BOOL _supportsApproveWithWatch;
    BOOL _placeholder;
    BOOL _supportsAlwaysDirect;
    BOOL _supportsApproveIcon;
    BOOL _supportsEncryption;
    BOOL _supportsAdvertisingUnlocked;
    BOOL _supportsConnectionCache;
    BOOL _supportsHEIC;
    NSString *_modelDescription;
    NSUUID *_bluetoothID;
    NSUUID *_proxyBluetoothID;
    NSString *_modelName;
    NSDictionary *_results;
    NSData *_hintToken;
    long long _majorOSVersion;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long majorOSVersion; // @synthesize majorOSVersion=_majorOSVersion;
@property(nonatomic) BOOL supportsHEIC; // @synthesize supportsHEIC=_supportsHEIC;
@property(nonatomic) BOOL supportsConnectionCache; // @synthesize supportsConnectionCache=_supportsConnectionCache;
@property(nonatomic) BOOL supportsAdvertisingUnlocked; // @synthesize supportsAdvertisingUnlocked=_supportsAdvertisingUnlocked;
@property(nonatomic) BOOL supportsEncryption; // @synthesize supportsEncryption=_supportsEncryption;
@property(nonatomic) BOOL supportsApproveIcon; // @synthesize supportsApproveIcon=_supportsApproveIcon;
@property(nonatomic) BOOL supportsAlwaysDirect; // @synthesize supportsAlwaysDirect=_supportsAlwaysDirect;
@property(nonatomic) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSData *hintToken; // @synthesize hintToken=_hintToken;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSUUID *proxyBluetoothID; // @synthesize proxyBluetoothID=_proxyBluetoothID;
@property(retain, nonatomic) NSUUID *bluetoothID; // @synthesize bluetoothID=_bluetoothID;
@property(nonatomic) BOOL supportsApproveWithWatch; // @synthesize supportsApproveWithWatch=_supportsApproveWithWatch;
@property(nonatomic) BOOL bluetoothCloudPaired; // @synthesize bluetoothCloudPaired=_bluetoothCloudPaired;
@property(nonatomic) BOOL keyExists; // @synthesize keyExists=_keyExists;
@property(nonatomic) BOOL unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(copy, nonatomic) NSString *modelDescription; // @synthesize modelDescription=_modelDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) long long type;
- (id)init;

@end

