//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface SPLocationAddress : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_formattedAddressLines;
    NSString *_country;
    NSString *_countryCode;
    NSString *_streetName;
    NSString *_streetAddress;
    NSString *_locality;
    NSString *_stateCode;
    NSString *_administrativeArea;
    NSString *_placemark;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *placemark; // @synthesize placemark=_placemark;
@property(copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(copy, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 placemark:(id)arg9;
- (id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8;

@end
