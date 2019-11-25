//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ASDApp, NSPredicate, NSUUID;

@protocol ASDAppLibraryServiceProtocol
- (void)uninstallApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)launchApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(long long))arg3;
- (void)launchApp:(ASDApp *)arg1 withReplyHandler:(void (^)(long long))arg2;
- (void)launchApp:(ASDApp *)arg1 extensionType:(long long)arg2 withReplyHandler:(void (^)(long long))arg3;
- (void)resumeApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)pauseApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)cancelApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)cancelApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)executeQueryWithPredicate:(NSPredicate *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)executeQueryWithPredicate:(NSPredicate *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

