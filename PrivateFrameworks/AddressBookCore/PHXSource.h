//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABAccountPersistenceDelegate.h"
#import "ABWorkQueueDelegate.h"
#import "NSCopying.h"

@class ABAccountPersistence, ABAccountStatus, ABAddressBook, ABSimilarRecordMerger, ABWorkQueue, NSArray, NSDate, NSSecureTextField, NSString, NSView;

@interface PHXSource : NSObject <ABAccountPersistenceDelegate, NSCopying, ABWorkQueueDelegate>
{
    ABAddressBook *_addressBook;
    BOOL _addressBookWasSetManually;
    NSString *_subname;
    NSString *_uid;
    NSString *_path;
    NSView *configurationView;
    NSSecureTextField *passwordField;
    ABWorkQueue *_workQueue;
    ABAccountPersistence *_persistence;
    BOOL _canCreateGroups;
    BOOL _canCreatePeople;
    NSDate *_lastRefreshDate;
    BOOL _unloaded;
    NSArray *_personConstraints;
    ABSimilarRecordMerger *_similarRecordMerger;
    ABAccountStatus *_currentStatus;
    BOOL _busy;
    BOOL _supportsDistributionLists;
    BOOL _meCardHasChanged;
    BOOL _shouldSendStatusChangeNotifications;
    BOOL _isSetupComplete;
    NSString *_allocationBacktrace;
}

+ (BOOL)setPassword:(id)arg1 forConfiguration:(id)arg2;
+ (id)passwordForConfiguration:(id)arg1;
+ (id)passwordForUser:(id)arg1 server:(id)arg2 port:(unsigned short)arg3 protocol:(void *)arg4 error:(id *)arg5;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 server:(id)arg3 port:(unsigned short)arg4 protocol:(void *)arg5 access:(struct OpaqueSecAccessRef *)arg6 error:(id *)arg7;
+ (BOOL)removePasswordForUser:(id)arg1 server:(id)arg2 port:(unsigned short)arg3 protocol:(void *)arg4 error:(id *)arg5;
+ (id)passwordForUser:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (int)addKeychainItemForPassword:(id)arg1 user:(id)arg2 service:(id)arg3 access:(struct OpaqueSecAccessRef *)arg4;
+ (int)updateKeychainItemForPassword:(id)arg1 user:(id)arg2 service:(id)arg3;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 service:(id)arg3 access:(struct OpaqueSecAccessRef *)arg4 error:(id *)arg5;
+ (BOOL)setPassword:(id)arg1 forUser:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (BOOL)removePasswordForUser:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (BOOL)_userCanConfigure;
+ (Class)searchOperationClass;
+ (void)postAccountDidChangeNotificationsWithUID:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)defaultPersonConstraints;
+ (Class)defaultPersonConstraintsClass;
+ (BOOL)accountExistsForiCalWithRootFolderId:(id)arg1 userName:(id)arg2 serverAddress:(id)arg3;
+ (BOOL)accountExistsForMailWithRootFolderId:(id)arg1 userName:(id)arg2 serverAddress:(id)arg3;
+ (void)cancelTestConnection;
+ (id)testConnectionFuture:(id)arg1;
+ (id)testConnection:(id)arg1;
+ (void)cancelAutodiscovery;
+ (id)autodiscoveryFutureWithSettings:(id)arg1;
+ (id)autodiscoverSettings:(id)arg1;
+ (id)addressBookInitOptions;
+ (Class)accountPersistenceClass;
+ (id)persistenceWithAccountComponents:(id)arg1;
+ (id)persistenceWithUID:(id)arg1 account:(id)arg2;
+ (id)persistenceBackendWithAccountComponents:(id)arg1;
+ (id)persistentPathForUID:(id)arg1;
+ (id)makeSearchPolicyWithAccount:(id)arg1;
+ (id)customizationPolicy;
+ (int)backingStoreType;
+ (id)sourceForObject:(id)arg1;
+ (id)sourceForContact:(id)arg1;
+ (id)sourcesForManagedObjects:(id)arg1;
+ (id)uncachedSourceForClassName:(id)arg1 uid:(id)arg2 account:(id)arg3;
+ (id)contactsBySource:(id)arg1;
+ (id)existingSourceWithUID:(id)arg1;
+ (id)defaultSource;
+ (id)availablePluginClasses;
+ (id)displayNameForClassName:(id)arg1;
+ (id)serverAddressPlaceholderForClassName:(id)arg1;
+ (BOOL)testConnectionSupportedForClassName:(id)arg1;
+ (BOOL)autodiscoverySupportedForClassName:(id)arg1;
+ (BOOL)autocompletionProvidedForClassName:(id)arg1;
+ (BOOL)setupAssistantCreationAllowedForClassName:(id)arg1;
+ (id)infoForClassName:(id)arg1;
+ (id)sourceAtPath:(id)arg1;
+ (id)localSource;
+ (id)localSourcePersistence;
+ (Class)localSourceClass;
+ (id)sources;
+ (id)autocompletionSources;
+ (id)allSources;
+ (id)recordForUniqueId:(id)arg1;
+ (id)recordsMatchingSearchElement:(id)arg1;
+ (id)searchForString:(id)arg1 delegate:(id)arg2 callback:(SEL)arg3;
+ (id)exchangeSourcesWithRootFolderId:(id)arg1;
+ (id)exchangeSourcesWithUsername:(id)arg1 host:(id)arg2;
+ (id)sourcesOfType:(id)arg1;
+ (Class)sourceClassForClassName:(id)arg1;
@property(retain) ABAccountStatus *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain) ABSimilarRecordMerger *similarRecordMerger; // @synthesize similarRecordMerger=_similarRecordMerger;
@property(retain) NSArray *personConstraints; // @synthesize personConstraints=_personConstraints;
@property(getter=isUnloaded) BOOL unloaded; // @synthesize unloaded=_unloaded;
@property(readonly) ABWorkQueue *workQueue; // @synthesize workQueue=_workQueue;
@property BOOL canCreatePeople; // @synthesize canCreatePeople=_canCreatePeople;
@property BOOL canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property(readonly, copy) NSString *uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy) NSString *subname; // @synthesize subname=_subname;
- (id)valueForUndefinedKey:(id)arg1;
- (id)secureServiceName;
- (id)secureUserName;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)migrationLog:(id)arg1;
- (BOOL)_isMigrating;
- (void)_exportSummaryOfDatabaseContents;
- (void)_firstMergeCompleted;
- (void)_prepareRecordMergerForSyncWithAddressBook:(id)arg1;
- (id)_localRecordsForMergingInAddressBook:(id)arg1;
@property BOOL shouldMergeServerContactsAtNextSync;
- (id)_persistentStoreURL;
- (id)_mergeSimilarRecords:(id)arg1;
- (BOOL)supportsDistributionLists;
- (void)_preheatGroups:(id)arg1;
- (void)releaseTopLevelObjects;
- (void)didImportPeople:(id)arg1 intoGroup:(id)arg2;
- (void)removeGroup:(id)arg1;
- (BOOL)shouldOfferRemoveContacts:(id)arg1 fromGroup:(id)arg2;
- (long long)sortOrderForGroup:(id)arg1;
- (BOOL)canRemoveGroup:(id)arg1;
- (BOOL)canRenameGroup:(id)arg1;
- (BOOL)canEditGroup:(id)arg1;
- (BOOL)canEditPerson:(id)arg1;
- (void)meDidChange:(id)arg1;
- (id)constraintsForRecordClass:(Class)arg1;
- (BOOL)record:(id)arg1 validateValue:(id *)arg2 forProperty:(id)arg3 error:(id *)arg4;
- (void)addressBook:(id)arg1 didDeleteRecords:(id)arg2;
- (void)addressBook:(id)arg1 willDeleteRecords:(id)arg2;
- (void)addressBook:(id)arg1 willRemoveRecordsWithUniqueIDs:(id)arg2;
- (void)addressBook:(id)arg1 didInsertRecords:(id)arg2;
- (void)addressBook:(id)arg1 willInsertRecords:(id)arg2;
- (void)addressBook:(id)arg1 didUpdateRecords:(id)arg2;
- (void)addressBook:(id)arg1 willUpdateRecords:(id)arg2;
- (void)sanityCheckNotificationRecords:(id)arg1 notification:(id)arg2;
- (void)addressBookSaved:(id)arg1;
- (void)willDeleteRecordsWithUniqueIDs:(id)arg1;
- (void)mocDidSave:(id)arg1;
- (void)mocWillSave:(id)arg1;
- (void)generateMetadataWithChangedObjectsInContext:(id)arg1;
- (void)anAddressBookWillSave:(id)arg1;
- (void)anAddressBookDidSave:(id)arg1;
- (id)recordIDsThatBelongToMe:(id)arg1;
- (void)myDatabaseChangedExternally:(id)arg1;
- (id)databaseChangeNotificationName;
- (void)sendStatusDidChangeNotification;
- (BOOL)shouldSendStatusDidChangeNotifications;
- (void)updateStatus:(id)arg1;
- (void)openInternetAccountsPreferences;
- (void)beginPhotoUpdatesForPeople:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateProgressIndicatorsForOperationCount:(unsigned long long)arg1;
- (void)workQueueOperationCountDidChange:(unsigned long long)arg1;
- (void)abWorkQueue:(id)arg1 operationCountDidChange:(unsigned long long)arg2;
- (void)displayNameChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShowProgressIndicator:(BOOL)arg1;
- (void)setBusy:(BOOL)arg1;
- (BOOL)isBusy;
@property(readonly) BOOL isDeletable;
@property(readonly) BOOL supportsDataMigration;
- (BOOL)_userCanConfigure;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (double)minimumIntervalBetweenRefreshes;
- (void)handlePushNotification:(id)arg1;
- (void)renewPushSubscriptionAtURL:(id)arg1;
- (void)_sourceShouldRefreshImmediately:(BOOL)arg1;
- (void)_sourceShouldRefresh;
- (void)sourceShouldRefresh:(id)arg1;
- (void)sourceDidSelect:(id)arg1;
- (void)searchForTerms:(id)arg1 delegate:(id)arg2;
- (id)searchOperationWithTerms:(id)arg1 delegate:(id)arg2;
- (id)searchOperationWithString:(id)arg1 delegate:(id)arg2;
@property(readonly) int searchMethod;
- (int)containmentPersonality;
- (int)sourceType;
- (BOOL)includeSubscribedGroupsInChildItems;
- (id)accountType;
- (void)setSearchable:(BOOL)arg1;
- (BOOL)isSearchable;
@property BOOL enabled;
@property BOOL primitiveEnabled;
- (void)_persistValuesAndPostDidChangeNotifcation:(BOOL)arg1;
- (void)_persistValues;
- (void)applyChangesAndRefresh:(BOOL)arg1;
- (void)applyChanges:(id)arg1;
@property BOOL hasChanges;
- (id)acParentAccountTypeIdentifier;
- (id)acAccountTypeIdentifier;
- (id)sourceIcon;
@property(readonly) NSView *configurationView;
- (void)loadConfigurationView;
- (id)children;
@property(readonly) BOOL canDeletePeople;
@property(readonly) NSString *displayName;
- (id)persistentStoreURL;
- (id)imagesFolderURL;
- (id)managedAddressBooks;
- (id)labelsConstraint;
- (void)deletePersistentValues;
@property(retain) NSDate *lastPushSubscription;
@property double pushRefreshInterval;
@property double periodicRefreshInterval;
@property(copy) NSString *name;
- (id)persistentRepresentation;
- (void)finalizeAccountSetupWithDictionary:(id)arg1;
- (void)finalizeAccountSetup;
- (id)makeAddressBookAtPath;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldUnload;
- (void)willUnload;
- (void)unload;
- (void)awakeFromLoad;
- (void)awakeFromInsert;
- (void)assertIsUnloaded;
- (void)stopObservingAddressBookSaveNotifications;
- (void)startObservingAddressBookSaveNotifications;
- (id)persistence;
- (void)dealloc;
- (id)initWithUID:(id)arg1 path:(id)arg2 persistence:(id)arg3;
- (id)initWithUID:(id)arg1 persistence:(id)arg2;
- (BOOL)_shouldCreateWorkQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

