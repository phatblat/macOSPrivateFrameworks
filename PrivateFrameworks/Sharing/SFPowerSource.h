//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface SFPowerSource : NSObject <NSSecureCoding>
{
    struct OpaqueIOPSPowerSourceID *_psID;
    int _lowPowerMonitoringToken;
    BOOL _charging;
    BOOL _lowPowerModeEnabled;
    BOOL _showChargingUI;
    BOOL _adapterSharedSource;
    BOOL _present;
    int _powerState;
    int _role;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    double _chargeLevel;
    long long _familyCode;
    NSString *_groupID;
    NSArray *_LEDs;
    double _lowWarnLevel;
    double _maxCapacity;
    NSString *_name;
    NSString *_partID;
    NSString *_partName;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    SFPowerSource *_subLeft;
    SFPowerSource *_subRight;
    SFPowerSource *_subCase;
    long long _temperature;
    NSString *_transportType;
    NSString *_type;
    long long _vendorID;
    long long _adapterErrorFlags;
    long long _adapterFamilyCode;
    NSString *_adapterName;
    long long _adapterSourceID;
    NSDictionary *_ioKitAdapterDescription;
    NSDictionary *_ioKitDescription;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL present; // @synthesize present=_present;
@property(copy, nonatomic) NSDictionary *ioKitDescription; // @synthesize ioKitDescription=_ioKitDescription;
@property(copy, nonatomic) NSDictionary *ioKitAdapterDescription; // @synthesize ioKitAdapterDescription=_ioKitAdapterDescription;
@property(nonatomic) long long adapterSourceID; // @synthesize adapterSourceID=_adapterSourceID;
@property(nonatomic) BOOL adapterSharedSource; // @synthesize adapterSharedSource=_adapterSharedSource;
@property(copy, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property(nonatomic) long long adapterFamilyCode; // @synthesize adapterFamilyCode=_adapterFamilyCode;
@property(nonatomic) long long adapterErrorFlags; // @synthesize adapterErrorFlags=_adapterErrorFlags;
@property(nonatomic) long long vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(nonatomic) long long temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) SFPowerSource *subCase; // @synthesize subCase=_subCase;
@property(retain, nonatomic) SFPowerSource *subRight; // @synthesize subRight=_subRight;
@property(retain, nonatomic) SFPowerSource *subLeft; // @synthesize subLeft=_subLeft;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) BOOL showChargingUI; // @synthesize showChargingUI=_showChargingUI;
@property(nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) long long productID; // @synthesize productID=_productID;
@property(nonatomic) int powerState; // @synthesize powerState=_powerState;
@property(copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property(readonly, nonatomic) double lowWarnLevel; // @synthesize lowWarnLevel=_lowWarnLevel;
@property(readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property(copy, nonatomic) NSArray *LEDs; // @synthesize LEDs=_LEDs;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long familyCode; // @synthesize familyCode=_familyCode;
@property(nonatomic) double chargeLevel; // @synthesize chargeLevel=_chargeLevel;
@property(nonatomic) BOOL charging; // @synthesize charging=_charging;
@property(copy, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
- (void).cxx_destruct;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
@property(readonly, nonatomic) BOOL aggregateComponent;
@property(readonly, nonatomic) BOOL aggregate;
@property(readonly, nonatomic, getter=isInternal) BOOL internal;
- (void)handleSubComponentsUpdated;
- (void)lowPowerModeChanged:(int)arg1;
- (void)startLowPowerMonitoringIfAppropriate;
- (void)invalidate;
- (int)publish;
- (id)detailedDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1;

@end

