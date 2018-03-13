//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCForegroundClient.h"
#import "BRCNotificationPipeDelegate.h"
#import "BRCProcessMonitorDelegate.h"

@class BRCAccountSession, BRCClientPrivilegesDescriptor, BRMangledID, NSCountedSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet, NSString, NSXPCConnection, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate>
{
    BRCClientPrivilegesDescriptor *_clientPriviledgesDescriptor;
    NSCountedSet *_appLibraries;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BRCAccountSession *_session;
    int _clientPid;
    CDStruct_4c969caf auditToken;
    BOOL _dieOnInvalidate;
    unsigned int _isForeground:1;
    unsigned int _invalidated:1;
    BOOL _isUsingUbiquity;
    NSXPCConnection *_connection;
}

@property(nonatomic) BOOL isUsingUbiquity; // @synthesize isUsingUbiquity=_isUsingUbiquity;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BOOL dieOnInvalidate; // @synthesize dieOnInvalidate=_dieOnInvalidate;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor; // @synthesize clientPriviledgesDescriptor=_clientPriviledgesDescriptor;
- (void).cxx_destruct;
- (void)_t_resetAllZones:(id)arg1 waitUntilIdle:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_startSharingOperationAfterAcceptation:(struct _BRCFrameworkOperation *)arg1 client:(id)arg2 item:(id)arg3;
- (id)_sharingOperationItemFromLookup:(id)arg1 url:(id)arg2 allowDirectory:(BOOL)arg3 error:(id *)arg4;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2;
- (void)_setupAppLibraryAndZoneWithID:(id)arg1 recreateDocumentsIfNeeded:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_createBookmarkWithTarget:(id)arg1 targetPath:(id)arg2 parentPath:(id)arg3 aliasName:(id)arg4 error:(id *)arg5;
- (id)_setupAppLibrary:(id)arg1 error:(id *)arg2;
- (id)issueContainerExtensionForURL:(id)arg1 error:(id *)arg2;
- (BOOL)canAccessPhysicalURL:(id)arg1;
- (void)accessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 dbAccessKind:(long long)arg3 asynchronously:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (BOOL)canAccessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2;
- (BOOL)canAccessPath:(const char *)arg1 accessKind:(long long)arg2;
- (id)_auditedURLFromPath:(id)arg1;
- (void)_auditURL:(id)arg1;
@property(readonly, nonatomic) BOOL isSandboxed;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) BOOL hasPrivateSharingInterfaceEntitlement;
- (BOOL)_isAutomationEntitled;
- (BOOL)_isAppLibraryProxyEntitled;
@property(readonly, nonatomic) NSSet *entitledAppLibraryIDs;
@property(readonly, nonatomic) BRMangledID *defaultMangledID;
- (BOOL)_entitlementBooleanValueForKey:(id)arg1;
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id *)arg2;
- (BOOL)_isAppLibraryProxyWithError:(id *)arg1;
- (BOOL)_canCreateAppLibraryWithID:(id)arg1 error:(id *)arg2;
- (BOOL)_hasAccessToAppLibraryID:(id)arg1 error:(id *)arg2;
- (BOOL)cloudEnabledStatus;
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;
- (void)_stopMonitoringProcess;
- (void)removeAppLibrary:(id)arg1;
- (void)addAppLibrary:(id)arg1;
- (void)_startMonitoringProcessIfNeeded;
- (void)process:(int)arg1 didBecomeForeground:(BOOL)arg2;
@property(readonly, nonatomic) NSString *identifier;
- (void)addOperation:(id)arg1;
- (void)dumpToContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)wait;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)setPrivilegesDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

