//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, PLClientServerTransaction, PLDelayedSaveActionsDetail;

@protocol PLChangePublisher <NSObject>
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (PLClientServerTransaction *)publishChangeEvent:(NSObject<OS_xpc_object> *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 transaction:(PLClientServerTransaction *)arg3;
@end
