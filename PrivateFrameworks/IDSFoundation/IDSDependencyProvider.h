//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSKeychainAdapter.h"
#import "IDSPushAdapter.h"
#import "IDSServiceLoader.h"
#import "IDSXPCAdapter.h"

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter>
{
    NSMutableDictionary *_registeredAdapters;
}

+ (void)registerObject:(id)arg1 forProtocol:(id)arg2;
+ (id)registeredObjectForProtocol:(id)arg1;
+ (id)userDefaults;
+ (id)systemMonitorAdapter;
+ (id)keychainAdapter;
+ (id)XPCAdapter;
+ (id)serviceLoader;
+ (id)pushAdapter;
+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)registerObject:(id)arg1 forProtocol:(id)arg2;
- (id)registeredObjectForProtocol:(id)arg1;
- (id)loadServiceDictionaries;
- (BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int *)arg3;
- (BOOL)getKeychainData:(id *)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int *)arg5;
- (BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int *)arg6;
- (id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(id)arg4;
- (id)placeholderMachPort;
- (id)createServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(CDUnknownBlockType)arg2 terminationHandler:(CDUnknownBlockType)arg3 peerEventHandler:(CDUnknownBlockType)arg4 peerQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

