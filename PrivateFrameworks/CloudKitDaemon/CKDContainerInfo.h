//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicCodeServiceURL;
    NSURL *_publicMetricsServiceURL;
    NSURL *_publicDatabaseRPCServiceURL;
    NSString *_containerScopedUserID;
    NSString *_orgAdminUserID;
    long long _environment;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(copy, nonatomic) NSURL *publicDatabaseRPCServiceURL; // @synthesize publicDatabaseRPCServiceURL=_publicDatabaseRPCServiceURL;
@property(copy, nonatomic) NSURL *publicMetricsServiceURL; // @synthesize publicMetricsServiceURL=_publicMetricsServiceURL;
@property(copy, nonatomic) NSURL *publicCodeServiceURL; // @synthesize publicCodeServiceURL=_publicCodeServiceURL;
@property(copy, nonatomic) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(copy, nonatomic) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(copy, nonatomic) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)init;

@end

