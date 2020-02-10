//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMBCloudZoneRebuilder.h"
#import "HMFLogging.h"

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NAFuture, NSString;

__attribute__((visibility("hidden")))
@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder>
{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMBCloudZone *_cloudZone;
}

+ (id)logCategory;
@property(nonatomic) __weak HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain, nonatomic) NAFuture *rebuildCompleteFuture; // @synthesize rebuildCompleteFuture=_rebuildCompleteFuture;
@property(copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // @synthesize rebuilderStatus=_rebuilderStatus;
- (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;
- (void)handleZoneChanged;
- (void)handleIdentityLost;
- (id)zoneStartUp;
- (void)rebuild;
- (id)initWithCloudZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
