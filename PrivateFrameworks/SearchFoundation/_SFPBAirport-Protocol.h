//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBLatLng, _SFPBTimeZone;

@protocol _SFPBAirport <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *country;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *postalCode;
@property(copy, nonatomic) NSString *state;
@property(copy, nonatomic) NSString *district;
@property(copy, nonatomic) NSString *street;
@property(copy, nonatomic) NSString *city;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(retain, nonatomic) _SFPBTimeZone *timezone;
@property(copy, nonatomic) NSString *code;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

