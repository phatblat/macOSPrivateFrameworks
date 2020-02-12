//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface APSDNSResponse : NSObject <NSSecureCoding>
{
    NSString *_hostname;
    NSArray *_ipv4Address;
    NSArray *_ipv6Address;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *ipv6Address; // @synthesize ipv6Address=_ipv6Address;
@property(readonly, nonatomic) NSArray *ipv4Address; // @synthesize ipv4Address=_ipv4Address;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initResponseForHostname:(id)arg1 ipv4Address:(id)arg2 ipv6Address:(id)arg3;

@end
