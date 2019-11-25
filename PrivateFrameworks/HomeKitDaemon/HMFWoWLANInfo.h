//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>
{
    NSData *_primaryMACAddress;
    NSArray *_additionalMACAddresses;
}

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *additionalMACAddresses; // @synthesize additionalMACAddresses=_additionalMACAddresses;
@property(readonly, nonatomic) NSData *primaryMACAddress; // @synthesize primaryMACAddress=_primaryMACAddress;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2;

@end

