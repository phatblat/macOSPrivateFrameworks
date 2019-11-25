//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding>
{
    unsigned char _datapathID;
    WiFiMACAddress *_initiatorDataAddress;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) WiFiMACAddress *initiatorDataAddress; // @synthesize initiatorDataAddress=_initiatorDataAddress;
@property(readonly, nonatomic) unsigned char datapathID; // @synthesize datapathID=_datapathID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

