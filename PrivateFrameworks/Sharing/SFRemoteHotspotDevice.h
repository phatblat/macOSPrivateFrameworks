//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>
{
    unsigned char _networkType;
    BOOL _hasDuplicates;
    NSString *_deviceName;
    NSString *_deviceIdentifier;
    NSNumber *_batteryLife;
    NSNumber *_signalStrength;
    NSData *_advertisementData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property BOOL hasDuplicates; // @synthesize hasDuplicates=_hasDuplicates;
@property(retain) NSNumber *signalStrength; // @synthesize signalStrength=_signalStrength;
@property unsigned char networkType; // @synthesize networkType=_networkType;
@property(retain) NSNumber *batteryLife; // @synthesize batteryLife=_batteryLife;
@property(copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(CDStruct_56cc8428)arg3;

@end

