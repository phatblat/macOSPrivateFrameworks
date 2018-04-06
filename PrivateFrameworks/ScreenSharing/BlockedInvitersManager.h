//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSharing/BlockedInvitersManagerBase.h>

#import "BlockedInvitersManagerProtocol.h"

@class NSString;

@interface BlockedInvitersManager : BlockedInvitersManagerBase <BlockedInvitersManagerProtocol>
{
}

+ (void)migrateBlockedUsersToSharedBlockList:(id)arg1;
+ (id)inviterIDWithScheme:(id)arg1;
+ (id)blockListItemWithInviterID:(id)arg1;
+ (id)blockListItemWithABPerson:(id)arg1;
+ (BOOL)saveSharedPreferences:(id)arg1;
+ (id)unsandboxedPrefsPath;
+ (id)sharedBlockedInvitersManager;
- (void)clearBlockedInviter:(id)arg1;
- (BOOL)addBlockedInviterID:(id)arg1;
- (BOOL)isInviterIDInBlockedInvitersList:(id)arg1;
- (BOOL)isInviterIDInContacts:(id)arg1;
- (id)uniqueIDSForLinkedABPerson:(id)arg1;
- (id)getABPersonWithInviterID:(id)arg1;
- (void)setAllowOnlyContacts:(BOOL)arg1;
- (BOOL)allowOnlyContacts;
- (void)setBlockAllInviters:(BOOL)arg1;
- (BOOL)blockAllInviters;
- (BOOL)setBlockedInviters:(id)arg1;
- (id)getBlockedInviters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
