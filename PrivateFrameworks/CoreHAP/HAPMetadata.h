//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface HAPMetadata : HMFObject
{
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSString *_hapBaseUUIDSuffix;
    NSDictionary *_rawPlist;
    NSMutableArray *_parsedUUIDs;
    NSDictionary *_hapUnitMap;
    NSDictionary *_hapPropertyMap;
    NSDictionary *_hapCharacteristicMap;
    NSDictionary *_hapServiceMap;
    NSSet *_hapSupportsAuthDataSet;
    NSDictionary *_hapCharacteristicNameTypeMap;
    NSDictionary *_hapServiceNameTypeMap;
}

+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;
+ (BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)getSharedInstance;
+ (id)getBuiltinInstance;
+ (void)setBuiltinInstanceWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *hapServiceNameTypeMap; // @synthesize hapServiceNameTypeMap=_hapServiceNameTypeMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap; // @synthesize hapCharacteristicNameTypeMap=_hapCharacteristicNameTypeMap;
@property(retain, nonatomic) NSSet *hapSupportsAuthDataSet; // @synthesize hapSupportsAuthDataSet=_hapSupportsAuthDataSet;
@property(retain, nonatomic) NSDictionary *hapServiceMap; // @synthesize hapServiceMap=_hapServiceMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicMap; // @synthesize hapCharacteristicMap=_hapCharacteristicMap;
@property(retain, nonatomic) NSDictionary *hapPropertyMap; // @synthesize hapPropertyMap=_hapPropertyMap;
@property(retain, nonatomic) NSDictionary *hapUnitMap; // @synthesize hapUnitMap=_hapUnitMap;
@property(retain, nonatomic) NSMutableArray *parsedUUIDs; // @synthesize parsedUUIDs=_parsedUUIDs;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(retain, nonatomic) NSString *hapBaseUUIDSuffix; // @synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)generateDictionary;
- (BOOL)updateRawPlist;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
@property(readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;
@property(readonly, nonatomic) NSArray *hapServices;
@property(readonly, nonatomic) NSArray *hapCharacteristics;
@property(readonly, nonatomic) NSArray *hapProperties;
@property(readonly, nonatomic) NSArray *hapValueUnits;
- (id)hapUnitFromName:(id)arg1;
- (id)hapServiceFromType:(id)arg1;
- (id)hapServiceFromName:(id)arg1;
- (id)hapCharacteristicFromType:(id)arg1;
- (id)hapCharacteristicFromName:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (id)serviceTypeToBTLE:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicValueUnitOfType:(id)arg1;
- (BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (BOOL)allowAssociatedService:(id)arg1;
- (BOOL)isStandardHAPUnitName:(id)arg1;
- (BOOL)isStandardHAPCharacteristicName:(id)arg1;
- (BOOL)isStandardHAPCharacteristic:(id)arg1;
- (BOOL)isStandardHAPServiceName:(id)arg1;
- (BOOL)isStandardHAPService:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)characteristicUTIFromType:(id)arg1;
- (id)serviceTypeFromUTI:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (BOOL)parseMetadata:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseUnits:(id)arg1;
- (BOOL)parseVersion:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

