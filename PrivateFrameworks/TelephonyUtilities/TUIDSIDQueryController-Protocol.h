//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@protocol TUIDSIDQueryController <NSObject>
- (BOOL)currentIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 listenerID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSDictionary *))arg5;
@end

