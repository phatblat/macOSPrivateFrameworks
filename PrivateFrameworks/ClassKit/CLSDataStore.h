//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSFaultProcessorDelegate.h"
#import "NSLocking.h"

@class CLSActivity, CLSAuthTree, CLSContext, CLSCurrentUser, CLSEndpointConnection, CLSGraph, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking>
{
    NSMutableSet *_dataObservers;
    struct NSMutableDictionary *_deletedObjectsByID;
    NSMutableDictionary *_objectGenerationsByID;
    CLSCurrentUser *_cachedCurrentUser;
    int _accountChangeToken;
    struct os_unfair_recursive_lock_s _lock;
    NSMutableArray *_pendingSaves;
    BOOL _saveInProgress;
    CLSAuthTree *_authTree;
    NSMutableArray *_runningActivities;
    NSDate *_lastPruneDate;
    NSString *_appBundleIdentifier;
    NSString *_appName;
    id <CLSDataStoreDelegate> _delegate;
    CLSContext *_mainAppContext;
    CLSEndpointConnection *_endpointConnection;
    CLSGraph *_graph;
}

+ (BOOL)isSearchAPIEnabled;
+ (BOOL)isPrivateSearchAPIEnabled;
+ (BOOL)isDashboardApp;
+ (BOOL)isPDTool;
+ (id)newDatastore;
+ (BOOL)isAvailable;
+ (id)shared;
+ (Class)endpointClass;
@property(readonly, nonatomic) CLSGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) CLSEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
@property(retain, nonatomic) CLSContext *mainAppContext; // @synthesize mainAppContext=_mainAppContext;
@property(nonatomic) __weak id <CLSDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)featureIsEnabled:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)pruneDeletedObjectsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(struct NSObject *)arg3;
- (void)deregisterDataObserver:(id)arg1;
- (void)registerDataObserver:(id)arg1;
- (void)currentUserWithServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentUser;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)reset;
- (void)developerModeChanged:(id)arg1;
- (void)setShouldSyncTeacherBrowsedContexts:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchTransparencyMessageInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerProgressTransparencyMessageIfNeeded;
- (BOOL)isAppClient;
- (void)removeRunningActivitiesObject:(id)arg1;
- (void)addRunningActivitiesObject:(id)arg1;
- (id)runningActivities;
@property(readonly, nonatomic) CLSActivity *runningActivity;
@property(readonly, nonatomic) CLSContext *activeContext;
- (id)syncUtilityServer:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)syncDataServer:(CDUnknownBlockType)arg1;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contextsMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeContextWithObjectID:(id)arg1;
- (void)removeContext:(id)arg1;
- (BOOL)isRemovedObject:(id)arg1;
- (void)markObjectAsDeleted:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2;
- (id)_addObject:(id)arg1;
- (id)addObject:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (id)_validateObjects:(id)arg1;
- (id)_modifiedObjects;
- (id)_filterObjectsBeingSavedFromObjects:(id)arg1;
- (void)_saveObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshAuthTreeWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CLSAuthTree *authTree;
- (void)_save;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)completeAllAssignedActivitiesMatching:(id)arg1;
- (void)contextsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextsMatchingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allContexts;
- (id)appIdentifier;
- (void)_refreshMainAppContext;
- (void)faultMainAppContext;
- (void)refreshMainAppContext;
- (void)_createMainAppContext;
- (id)cachedMainAppContext;
- (void)awaitExecuteQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataServer:(id)arg1 executeQuery:(id)arg2;
- (void)executeQuery:(id)arg1;
@property(retain, nonatomic) CLSCurrentUser *cachedCurrentUser;
- (void)_reconnect;
- (void)_reenableObservers;
- (void)_registerForDarwinNotifications;
- (void)_connectionConnected;
- (void)_connectionInterupted;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;
- (BOOL)isAllowedToInsertObject:(id)arg1;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isDashboardAPIEnabled;
- (void)removeClass:(id)arg1;
- (void)saveClass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)instructedClassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFavorite:(id)arg1;
- (void)addFavorite:(id)arg1;
- (void)handoutAttachmentForDocumentURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)publishHandout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandout:(id)arg1;
- (void)addHandout:(id)arg1;
- (void)enrolledClassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)membersOfGroupWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)objectsMatching:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldPerformSearchAPIOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isSearchAllowed;
- (void)canSearchRostersWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

