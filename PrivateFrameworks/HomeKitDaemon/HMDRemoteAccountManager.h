//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDAccountManager.h"
#import "HMFLogging.h"
#import "HMFObject.h"
#import "IDSServiceDelegate.h"
#import "NSFastEnumeration.h"

@class HMDBackingStore, IDSService, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFObject, IDSServiceDelegate, NSFastEnumeration>
{
    NSMutableSet *_accounts;
    BOOL _monitoring;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    IDSService *_service;
    NSMutableArray *_resolveOperations;
    HMDBackingStore *_backingStore;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) NSMutableArray *resolveOperations; // @synthesize resolveOperations=_resolveOperations;
@property(nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldSyncDevice:(id)arg1;
- (BOOL)shouldSyncAccount:(id)arg1;
- (BOOL)shouldCacheAccount:(id)arg1;
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
@property(retain, nonatomic) NSArray *accounts;
- (id)accountForModelIdentifier:(id)arg1;
- (id)accountForHandle:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithIDSService:(id)arg1;
- (id)init;
- (void)__handleSendMessageFailureWithError:(id)arg1 handle:(id)arg2;
- (id)deviceForSenderContext:(id)arg1;
- (id)accountForSenderContext:(id)arg1;
- (void)updateWithSenderContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

