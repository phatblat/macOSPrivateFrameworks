//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSString *activeNetworkRouterAccessoryUUID; // @dynamic activeNetworkRouterAccessoryUUID;
@property(retain, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange; // @dynamic minHomeKitVersionForAccessoryNetworkProtectionChange;
@property(retain, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion; // @dynamic minimumNetworkRouterSupportHomeKitVersion;

@end
