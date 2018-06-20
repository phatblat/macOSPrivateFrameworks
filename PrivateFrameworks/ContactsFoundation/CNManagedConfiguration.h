//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CNManagedConfiguration : NSObject
{
    NSString *_bundleIdentifier;
    id <CNManagedProfileConnection> _profileConnection;
}

+ (id)bundleIdentifierForAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)os_log;
@property(readonly, nonatomic) id <CNManagedProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (BOOL)canWriteToAccountWithIdentifier:(id)arg1;
- (BOOL)canReadFromAccountWithIdentifier:(id)arg1;
- (BOOL)accountIsManagedForIdentifier:(id)arg1;
- (BOOL)accountIsManaged:(id)arg1;
- (BOOL)allowsLocalAccount;
- (BOOL)deviceHasManagementRestrictions;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1 managedProfileConnection:(id)arg2;

@end

