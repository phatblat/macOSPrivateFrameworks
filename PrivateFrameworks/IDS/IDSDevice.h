//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSDestination, NSArray, NSData, NSDate, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;
}

- (void).cxx_destruct;
- (id)_internal;
- (void)_setService:(id)arg1;
- (void)_setAccount:(id)arg1;
@property(readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
- (void)_addIdentity:(id)arg1;
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) BOOL supportsPhoneCalls;
@property(readonly, nonatomic) BOOL supportsMMSRelay;
@property(readonly, nonatomic) BOOL supportsSMSRelay;
@property(readonly, nonatomic) BOOL supportsApplePay;
@property(readonly, nonatomic) BOOL supportsHandoff;
@property(readonly, nonatomic) BOOL supportsTethering;
@property(readonly, nonatomic) BOOL supportsiCloudPairing;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) IDSDestination *destination;
@property(readonly, nonatomic) BOOL isHSATrusted;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL isLocallyPaired;
@property(readonly, nonatomic) BOOL isDefaultPairedDevice;
@property(readonly, nonatomic) BOOL locallyPresent;
@property(readonly, nonatomic) BOOL isCloudConnected;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, nonatomic, getter=isNearby) BOOL nearby;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)description;
- (id)fullDescription;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end

