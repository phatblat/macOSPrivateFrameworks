//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSUUID, NSXPCListenerEndpoint;

@protocol NCNotificationCenterProtocol <NSObject>
- (void)ncReleaseKeyAlert:(NSUUID *)arg1;
- (void)ncMakeKeyAlert:(NSUUID *)arg1 completion:(void (^)(void))arg2;
- (void)ncDismissAlert:(NSUUID *)arg1 withAnimation:(unsigned long long)arg2 completion:(void (^)(void))arg3;
- (void)ncActuallyPresentRemoteAlert:(NSUUID *)arg1;
- (void)ncRequestPresentationOfRemoteAlert:(NSUUID *)arg1 options:(NSDictionary *)arg2 withVBEndpoint:(NSXPCListenerEndpoint *)arg3;
- (void)ncPing:(void (^)(void))arg1;
@end
