//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

#import "HMFLogging.h"

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging>
{
    HMDAccessoryAdvertisement *_advertisement;
}

+ (id)logCategory;
+ (Class)modelClass;
@property(retain) HMDAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)associationOptions;
- (id)dumpDescription;
- (void)updateAdvertisementData:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

