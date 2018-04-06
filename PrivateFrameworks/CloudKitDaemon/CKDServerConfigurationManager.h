//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDSystemAvailabilityWatcher.h"

@class CKDServerConfiguration, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>
{
    BOOL _shouldDropAllConfigurations;
    int _iCloudEnvNotifToken;
    NSObject<OS_dispatch_source> *_switchNotifSource;
    NSOperationQueue *_configurationQueue;
    CKDServerConfiguration *_globalConfiguration;
    NSMutableSet *_globalConfigurationOps;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)sharedManager;
@property(nonatomic) BOOL shouldDropAllConfigurations; // @synthesize shouldDropAllConfigurations=_shouldDropAllConfigurations;
@property(nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property(retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property(retain, nonatomic) NSMutableSet *globalConfigurationOps; // @synthesize globalConfigurationOps=_globalConfigurationOps;
@property(retain, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(retain, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)expireConfigurationForContext:(id)arg1;
- (void)expireGlobalConfiguration;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)_reallyDropAllConfigurations;
- (void)serverEnvironmentForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)containerScopedUserIDForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configurationForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 needUserID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)_watchForSwitchPrefFileChanges;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
