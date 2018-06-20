//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABUserDefaults, NSString;

@interface ABAccountFactory : NSObject
{
    NSString *_basePath;
    ABUserDefaults *_userDefaults;
    NSString *_tag;
    id <ABACAccountStore> _accountStore;
    id <ABAccountFactoryDelegate> _delegate;
}

+ (BOOL)isDirectoryServicesConfigured;
+ (id)accountComponentsWithAccountStore:(id)arg1 basePath:(id)arg2;
+ (Class)sourceClassForClassName:(id)arg1;
+ (id)factoryWithBaseDirectory:(id)arg1;
+ (id)sharedFactory;
@property __weak id <ABAccountFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)pathForAccountWithIdentifier:(id)arg1;
- (id)pointOfInterestAccount;
- (id)directoryServicesAccount;
- (id)localAccount;
- (id)makeAccountWithExistingSource:(id)arg1;
- (BOOL)configuredForSingleSource;
- (id)uncachedAccounts;
- (id)accountComponentsWithBasePath:(id)arg1;
- (id)accountComponentsAtPath:(id)arg1;
- (BOOL)shouldUseACAccountPersistence;
- (id)accountComponents;
- (id)migrationAccountWithComponents:(id)arg1;
- (id)migrationAccountsFromComponents:(id)arg1;
- (id)accountsFromComponents:(id)arg1;
- (id)uncachedPersistentMigrationAccounts;
- (id)uncachedLDAPMigrationAccounts;
- (id)uncachedPersistentAccounts;
- (id)uncachedLdapAccounts;
- (id)uncachedAccountWithIdentifier:(id)arg1;
- (id)ldapAccountWithIdentifier:(id)arg1;
- (id)ldapAccountWithACAccount:(id)arg1;
- (id)ldapACAccountWithIdentifier:(id)arg1;
- (id)persistentAccountWithComponents:(id)arg1;
- (id)persistentAccountWithIdentifier:(id)arg1;
- (id)accountWithComponents:(id)arg1;
- (id)makeComponentsValidationHelperWithComponents:(id)arg1;
- (id)accountBuilderForAccountComponents:(id)arg1;
- (id)accountBuilderForAccountAtPath:(id)arg1 withIdentifier:(id)arg2;
- (id)userLDAPAccounts;
- (Class)sourceClassForClassName:(id)arg1;
- (id)initWithBasePath:(id)arg1 accountStore:(id)arg2;
- (id)init;

@end

