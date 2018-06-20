//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logID;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)sendConfigureBulletinNotification:(id)arg1;
- (void)_sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2;
- (void)sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

