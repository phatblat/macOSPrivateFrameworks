//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AFMultiUserService <NSObject>
- (oneway void)getConformingSharedUserIds:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getConformingSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end
