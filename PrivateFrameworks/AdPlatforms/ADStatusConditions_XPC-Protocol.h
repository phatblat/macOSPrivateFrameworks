//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSUUID;

@protocol ADStatusConditions_XPC
- (void)isStatusConditionRegistered:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)clearStatusCondition:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setStatusCondition:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
