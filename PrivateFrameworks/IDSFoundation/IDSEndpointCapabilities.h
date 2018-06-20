//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary;

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding>
{
    NSDictionary *_capabilitiesMap;
}

+ (BOOL)supportsSecureCoding;
+ (id)validCapabilityKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_capabilitiesMapFromClientDeviceData:(id)arg1;
- (id)description;
- (id)valueForCapability:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (id)initWithClientDeviceData:(id)arg1;

@end

