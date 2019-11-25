//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    long long _serviceType;
    WiFiAwarePublishDatapathSecurityConfiguration *_securityConfiguration;
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration; // @synthesize securityConfiguration=_securityConfiguration;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)serviceSpecificInfoEqual:(id)arg1;
- (BOOL)securityConfigurationEqual:(id)arg1;
- (id)initWithServiceType:(long long)arg1 securityConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

