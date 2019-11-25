//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSUUID;

@protocol ASDInstallationServiceProtocol <NSObject>
- (void)installWatchApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installTestFlightApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installSystemApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installScreenSyncApps:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)installEnterpriseApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installAppReviewApps:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

