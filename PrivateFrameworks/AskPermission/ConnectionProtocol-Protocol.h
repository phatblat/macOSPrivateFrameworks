//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSDictionary, NSString, NSURL;

@protocol ConnectionProtocol <NSObject>
- (void)didReceiveStorePushNotificationWithPayload:(NSDictionary *)arg1;
- (void)presentProductPageWithTitle:(NSString *)arg1 body:(NSString *)arg2 approve:(NSString *)arg3 decline:(NSString *)arg4 itemIdentifier:(NSString *)arg5 previewURL:(NSString *)arg6;
- (void)start;
- (void)resetAccountWithType:(long long)arg1;
- (void)updateRequestWithIdentifier:(NSString *)arg1 action:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)localApproveRequestWithItemIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addRequestWithURL:(NSURL *)arg1 account:(ACAccount *)arg2 completion:(void (^)(NSError *))arg3;
@end

