//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSNumber, NSString;

@interface SASProximityInformation : NSObject <NSSecureCoding>
{
    BOOL _automaticTimeZoneEnabled;
    BOOL _locationServicesOptIn;
    NSArray *_keyboards;
    NSString *_appleID;
    NSArray *_networks;
    NSArray *_networkPasswords;
    NSString *_timeZone;
    NSString *_firstName;
    NSString *_deviceModel;
    NSString *_deviceName;
    NSString *_backupUDID;
    NSNumber *_deviceAnalyticsOptIn;
    NSNumber *_appAnalyticsOptIn;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSNumber *appAnalyticsOptIn; // @synthesize appAnalyticsOptIn=_appAnalyticsOptIn;
@property(retain) NSNumber *deviceAnalyticsOptIn; // @synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn;
@property BOOL locationServicesOptIn; // @synthesize locationServicesOptIn=_locationServicesOptIn;
@property(copy) NSString *backupUDID; // @synthesize backupUDID=_backupUDID;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property BOOL automaticTimeZoneEnabled; // @synthesize automaticTimeZoneEnabled=_automaticTimeZoneEnabled;
@property(copy) NSArray *networkPasswords; // @synthesize networkPasswords=_networkPasswords;
@property(copy) NSArray *networks; // @synthesize networks=_networks;
@property(copy) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy) NSArray *keyboards; // @synthesize keyboards=_keyboards;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

