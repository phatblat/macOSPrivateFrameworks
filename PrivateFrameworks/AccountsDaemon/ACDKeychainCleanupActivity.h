//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface ACDKeychainCleanupActivity : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSObject<OS_dispatch_queue> *_activityQueue;
}

+ (id)sharedActivity;
- (void).cxx_destruct;
- (void)_activityQueue_unregisterActivity;
- (void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_removeExpiredCredentials;
- (void)_activityQueue_removeExpiredCredentials;
- (void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2;
- (void)_activityQueue_checkIn;
- (void)queueNonPersistentCredentialRemoval:(id)arg1;
- (void)checkInIfNecessary;
- (id)init;

@end

