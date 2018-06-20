//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, NSUUID;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isIsland;
    NSUUID *_identifier;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
    NSString *_subLocality;
    NSString *_locality;
    NSString *_subAdministrativeArea;
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSString *_postalCode;
    NSString *_country;
    NSString *_countryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) BOOL isIsland; // @synthesize isIsland=_isIsland;
@property(readonly, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property(readonly, copy, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(readonly, copy, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, copy, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(readonly, copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(readonly, copy, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, copy, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, copy, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(readonly, copy, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mergedThoroughfare;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAddress:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(BOOL)arg15 creationDate:(id)arg16;
- (id)initWithThoroughfare:(id)arg1 subLocality:(id)arg2 locality:(id)arg3 subAdministrativeArea:(id)arg4 administrativeArea:(id)arg5 postalCode:(id)arg6 country:(id)arg7 countryCode:(id)arg8;
- (id)initWithThoroughfare:(id)arg1 locality:(id)arg2 administrativeArea:(id)arg3 postalCode:(id)arg4 country:(id)arg5 countryCode:(id)arg6;
- (id)init;

@end

