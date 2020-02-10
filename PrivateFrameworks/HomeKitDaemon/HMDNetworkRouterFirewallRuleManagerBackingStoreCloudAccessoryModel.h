//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMBModel.h"

#import "HMFLogging.h"

@class NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>
{
}

+ (id)hmbProperties;
+ (id)modelIDForRecordID:(id)arg1;
+ (id)namespaceID;
+ (id)logCategory;
- (id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *networkDeclarationsData; // @dynamic networkDeclarationsData;
@property(readonly) Class superclass;

@end
