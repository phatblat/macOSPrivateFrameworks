//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface DMFPolicyMonitor : NSObject
{
    int _keyBagFirstUnlockNotificationToken;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_notificationTokensByPolicyMonitorIdentifier;
    NSMutableDictionary *_policyTypesByRegistrationIdentifier;
}

+ (id)remoteInterface;
+ (id)policyMonitor;
@property(readonly, nonatomic) NSMutableDictionary *policyTypesByRegistrationIdentifier; // @synthesize policyTypesByRegistrationIdentifier=_policyTypesByRegistrationIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier; // @synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyClientsOfChange:(id)arg1;
- (void)_notifyClientsOfApplicationsChange:(id)arg1;
- (void)_notifyClientsOfCategoryChange:(id)arg1;
- (void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidatePolicyMonitor:(id)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)init;

@end

