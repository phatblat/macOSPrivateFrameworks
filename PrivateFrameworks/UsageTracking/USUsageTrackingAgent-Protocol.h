//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSDateInterval, NSSet, NSString, NSURL;

@protocol USUsageTrackingAgent
- (void)fetchBudgetsWithIdentifier:(NSString *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifiers:(NSArray *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)checkStatusOfAllBudgetsWithReplyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg1;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)stopMonitoringAllBudgetsWithReplyHandler:(void (^)(NSError *))arg1;
- (void)stopMonitoringBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)startMonitoringBudgets:(NSArray *)arg1 darwinNotificationName:(NSString *)arg2 notificationTimes:(NSSet *)arg3 clientIdentifier:(NSString *)arg4 replyHandler:(void (^)(NSError *))arg5;
- (void)deleteWebApplicationFromStorage:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)deleteStorageDataDuringInterval:(NSDateInterval *)arg1 webApplication:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)deleteWebDomainFromStorage:(NSString *)arg1 webApplication:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)deleteWebpageURLFromStorage:(NSURL *)arg1 webApplication:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)updateStorageWithInUseStartDate:(NSDate *)arg1 inFocusStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 webApplication:(NSString *)arg4 url:(NSURL *)arg5 domain:(NSString *)arg6 replyHandler:(void (^)(NSError *))arg7;
- (void)fetchReportsDuringInterval:(NSDateInterval *)arg1 partitionInterval:(double)arg2 focalOnly:(BOOL)arg3 forceImmediateSync:(BOOL)arg4 replyHandler:(void (^)(NSString *, NSDictionary *, NSArray *, NSError *))arg5;
@end

