//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, RBSXPCMessage;

@protocol RBProcessMonitorObserverConnection <NSObject>
- (void)sendMessage:(RBSXPCMessage *)arg1 replyQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSError *))arg3;
@end
