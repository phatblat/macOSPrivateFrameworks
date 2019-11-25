//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_subLocality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_postalCode;
    NSString *_country;
}

+ (BOOL)supportsSecureCoding;
+ (id)normalizeAddressString:(id)arg1;
+ (id)postalAddressWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(readonly, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(readonly, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
- (void).cxx_destruct;
- (BOOL)isEqualToPostalAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)singleLineNormalizedAddressString;
- (id)toCNPostalAddress;
- (id)initWithFoundInAppsPostalAddress:(id)arg1;
- (id)initWithContactsPostalAddress:(id)arg1;
- (id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;

@end

