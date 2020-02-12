//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccountStore.h"

#import "ACRemoteAccountStoreProtocol.h"

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabaseBackupActivity, ACDDatabaseConnection, ACDDataclassOwnersManager, ACDFakeRemoteAccountStoreSession, ACRemoteDeviceProxy, NSMutableArray, NSString;

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol>
{
    NSMutableArray *_accountChanges;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;
    BOOL _notificationsEnabled;
    BOOL _migrationInProgress;
    id <ACDAccountStoreDelegate> _delegate;
    ACDClient *_client;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACDAccountNotifier *_accountNotifier;
    ACDDatabaseBackupActivity *_databaseBackupActivity;
}

@property(getter=isMigrationInProgress) BOOL migrationInProgress; // @synthesize migrationInProgress=_migrationInProgress;
@property BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain) ACDDatabaseBackupActivity *databaseBackupActivity; // @synthesize databaseBackupActivity=_databaseBackupActivity;
@property(retain) ACDAccountNotifier *accountNotifier; // @synthesize accountNotifier=_accountNotifier;
@property(retain) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property(retain) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
@property(readonly, nonatomic) ACDDatabaseConnection *databaseConnection; // @synthesize databaseConnection=_databaseConnection;
@property(retain) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property(readonly) ACDClientAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property __weak ACDClient *client; // @synthesize client=_client;
@property __weak id <ACDAccountStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)longLivedRemoteAccountStoreSession;
- (id)remoteAccountStoreSession;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_clientTokenQueue;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(BOOL)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_lockForAccountType:(id)arg1;
- (BOOL)shouldPreventAccountCreationWithObsoleteAccountType;
- (void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(BOOL)arg3 dataclassActions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;
- (BOOL)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_childAccountsForAccountWithID:(id)arg1;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2;
- (id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_accountsWithAcountType:(id)arg1 error:(id *)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;
- (id)_allAccounts_sync;
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (BOOL)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (BOOL)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;
- (void)_delegate_accountStoreDidSaveAccount:(id)arg1;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id *)arg4;
- (BOOL)_canSaveAccount:(id)arg1 error:(id *)arg2;
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_displayAccountForAccount:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (void)deleteAccountNoSave:(id)arg1 error:(id *)arg2;
- (BOOL)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (void)updateAccountNoSave:(id)arg1 error:(id *)arg2;
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (void)addAccountNoSave:(id)arg1 error:(id *)arg2;
- (BOOL)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3;
- (BOOL)_saveWithError:(id *)arg1;
- (BOOL)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;
- (BOOL)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountTypeIdentifier:(id)arg1;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

