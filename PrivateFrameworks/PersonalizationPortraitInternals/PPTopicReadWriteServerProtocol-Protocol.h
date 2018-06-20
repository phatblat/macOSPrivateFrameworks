//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSString, PPSource;

@protocol PPTopicReadWriteServerProtocol
- (void)clearWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 groupId:(NSString *)arg2 olderThan:(NSDate *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 groupIds:(NSArray *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 documentIds:(NSArray *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)deleteAllTopicsWithTopicId:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)donateTopics:(NSArray *)arg1 source:(PPSource *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 completion:(void (^)(BOOL, NSError *))arg6;
@end

