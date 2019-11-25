//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSSet, NSString;

@interface PKPaymentMarket : NSObject <NSSecureCoding>
{
    NSDictionary *_localizedNames;
    NSSet *_geoFences;
    long long _type;
    long long _classification;
    NSString *_identifier;
    NSString *_region;
    NSSet *_supportedCredentialTypes;
    NSSet *_expressCredentialTypes;
    NSSet *_supportedTransitNetworks;
    NSSet *_expressTransitNetworks;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSSet *expressTransitNetworks; // @synthesize expressTransitNetworks=_expressTransitNetworks;
@property(readonly, copy) NSSet *supportedTransitNetworks; // @synthesize supportedTransitNetworks=_supportedTransitNetworks;
@property(readonly, copy) NSSet *expressCredentialTypes; // @synthesize expressCredentialTypes=_expressCredentialTypes;
@property(readonly, copy) NSSet *supportedCredentialTypes; // @synthesize supportedCredentialTypes=_supportedCredentialTypes;
@property(readonly, copy) NSString *region; // @synthesize region=_region;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long classification; // @synthesize classification=_classification;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_geoFenceWithDictionary:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (double)shortestDistanceFromLocation:(id)arg1;
- (BOOL)containsLocation:(id)arg1;
@property(readonly, copy) NSString *name; // @dynamic name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3;

@end

