//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOHelperReceiverProtocol.h"

@class NSString;

@protocol SOUnreadCountHelperReceiverProtocol <SOHelperReceiverProtocol>
- (void)markChatGUIDAsRead:(NSString *)arg1;
- (void)processUnreadCountForChatGUID:(NSString *)arg1 withBlock:(void (^)(BOOL))arg2;
@end

