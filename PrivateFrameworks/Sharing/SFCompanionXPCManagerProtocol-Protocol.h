//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)createHotspotSessionForClientProxy:(id <SFRemoteHotspotClient>)arg1 reply:(void (^)(id <SFRemoteHotspotProtocol>, NSError *))arg2;
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)createUnlockManagerWithReply:(void (^)(id <SFUnlockProtocol>, NSError *))arg1;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id <SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id <SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
@end

