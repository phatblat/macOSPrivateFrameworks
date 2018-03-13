//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemAdministration/ADMDSRecord.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface ADMUser : ADMDSRecord
{
    NSMutableDictionary *mCache;
    NSMutableArray *mModifiedFields;
    NSString *mCachedName;
    NSString *mCachedPassword;
    NSNumber *mIsLocal;
    struct __CSIdentity *mIdentityRef;
}

+ (BOOL)shouldHide500Users;
+ (BOOL)shouldDisplayUser:(id)arg1;
+ (BOOL)removeHomeFolderOfUser:(id)arg1 async:(BOOL)arg2 delegate:(id)arg3;
+ (BOOL)removeHomeFolderOfUser:(id)arg1;
+ (BOOL)isUnixNameValid:(id)arg1;
+ (id)generateUnixNameUsingString:(id)arg1;
+ (id)suggestUnixNameUsingString:(id)arg1;
+ (BOOL)hasRootPasswordBeingSet;
+ (BOOL)isCurrentUserAdministrator;
+ (struct __CSIdentity *)currentUserCSIdentityRef;
+ (id)currentUser;
+ (id)newUser;
+ (long long)nextFreeUserID;
+ (id)allLocalUserNamesWithPrimaryGroup:(id)arg1;
+ (id)allLocalUsers;
+ (id)findUserByID:(unsigned long long)arg1 searchParent:(BOOL)arg2;
+ (id)findUserByFullName:(id)arg1 searchParent:(BOOL)arg2;
+ (id)findUserByName:(id)arg1 searchParent:(BOOL)arg2;
+ (id)extendNameUntilUnique:(id)arg1;
+ (BOOL)isUserNameUnique:(id)arg1 searchParent:(BOOL)arg2;
+ (id)defaultFamilySettings;
+ (unsigned long long)sizeOfUserHomeTemplate;
+ (id)SBSNodeName;
+ (BOOL)isBootVolumeAPFSFDE;
+ (BOOL)isBootVolumeCSFDE;
+ (struct __CFBundle *)_AOSFrameworkBundle;
+ (id)_findUserName:(id)arg1 searchParent:(BOOL)arg2;
+ (CDStruct_166d2db6)_createDSListFromArray:(id)arg1;
+ (id)_userWithInfo:(id)arg1 attributes:(id)arg2;
+ (id)_findUser:(id)arg1 fullName:(BOOL)arg2 searchParent:(BOOL)arg3 attributes:(id)arg4;
+ (BOOL)_isAdministrator:(id)arg1;
+ (id)_attributesToFetch;
- (void)setUserCanChangeDefaultLanguage:(BOOL)arg1;
- (BOOL)userCanChangeDefaultLanguage;
- (void)setDefaultLanguage:(id)arg1 immideately:(BOOL)arg2;
- (id)defaultLanguage;
- (void)setGuestUser:(BOOL)arg1;
- (BOOL)isGuestUser;
- (void)setGeneratedUID:(id)arg1;
- (id)generatedUID;
- (void)disableUser;
- (void)enableUser;
- (void)enableUserWithPassword:(id)arg1;
- (void)familySettingsDidChangeExternally;
- (void)setMCXFlags:(id)arg1;
- (BOOL)deleteMSXSettings;
- (BOOL)hasMSXSettings;
- (id)familySettings;
- (void)setFamilySettings:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (BOOL)isExternalAccount;
- (BOOL)hasMobileHomeDirectory;
- (void)setHomeloc:(id)arg1;
- (id)homeloc;
- (BOOL)isLocalCachedAccount;
- (BOOL)isModernTokenAuthenticationEnabled;
- (BOOL)isTokenAuthenticationEnabled;
- (BOOL)isDisabledUser;
- (id)metaNodeLocation;
- (id)originalNodeName;
- (id)originalNFSHomeDirectory;
- (id)originalHomeDirectory;
- (void)setruid:(id)arg1;
- (id)ruid;
- (void)setNAPrivs:(id)arg1;
- (id)naprivs;
- (id)HTTPConfigFilePath;
- (BOOL)deleteHTTPConfig;
- (BOOL)createHTTPConfig;
- (long long)commitChangesReturningError;
- (BOOL)commitChanges;
- (BOOL)deleteUserWithParameters:(id)arg1;
- (BOOL)deleteUser;
- (void)revertChanges;
- (void)updatePublicFolderAliasInNI;
- (void)setAdministrator:(BOOL)arg1;
- (BOOL)isDirectAdministrator;
- (BOOL)isAdministrator;
- (void)userPictureDidChangeExternally;
- (BOOL)setPicturePathImmideately:(id)arg1;
- (BOOL)setPictureImmideately:(id)arg1;
- (void)setUserCanChangePicture:(BOOL)arg1;
- (BOOL)userCanChangePicture;
- (void)setPicture:(id)arg1;
- (void)setPicturePath:(id)arg1;
- (id)picture;
- (id)picturePath;
- (BOOL)setHintImmideately:(id)arg1;
- (void)setUserCanChangeHint:(BOOL)arg1;
- (BOOL)userCanChangeHint;
- (void)setHint:(id)arg1;
- (id)hint;
- (void)deauthenticate;
- (BOOL)authenticate:(id)arg1;
- (int)authenticateWithPassword:(id)arg1;
- (void)appleIDLoginDidChangeExternally;
- (id)appleIDLoginAccount;
- (BOOL)isAppleIDLoginEnabled;
- (BOOL)setAppleIDLoginEnabled:(BOOL)arg1 appleID:(id)arg2 appleIDPassword:(id)arg3 password:(id)arg4;
- (BOOL)setAppleIDLoginEnabled:(BOOL)arg1 appleID:(id)arg2 appleIDPassword:(id)arg3;
- (BOOL)isSMBCompatible;
- (BOOL)setSMBCompatible:(BOOL)arg1 password:(id)arg2;
- (int)verifyPasswordReturnError:(id)arg1;
- (BOOL)verifyPassword:(id)arg1;
- (void)setNoLoginPassword;
- (BOOL)hasEmptyPassword;
- (long long)setPassword:(id)arg1 oldPassword:(id)arg2;
- (void)setPassword:(id)arg1;
- (BOOL)shadowPassword;
- (void)setShadowPassword:(BOOL)arg1;
- (void)setUserCanChangePassword:(BOOL)arg1;
- (BOOL)userCanChangePassword;
- (BOOL)isHomeDirInStandartPlace;
- (BOOL)createHomeDirectoryWithParameters:(id)arg1;
- (BOOL)createHomeDirectory;
- (id)defaultHomeDirectory;
- (void)setHomeDirectory:(id)arg1;
- (id)homeDirectory;
- (void)setUserCanChangeCertificate:(BOOL)arg1;
- (BOOL)userCanChangeCertificate;
- (id)userFullNameDidChangeExternally;
- (void)setUserCanChangeFullName:(BOOL)arg1;
- (BOOL)userCanChangeFullName;
- (BOOL)setFullNameImmideately:(id)arg1;
- (void)setFullName:(id)arg1;
- (id)fullName;
- (void)setShell:(id)arg1;
- (id)shell;
- (void)setGroupID:(long long)arg1;
- (long long)groupID;
- (id)groupName;
- (void)setUserID:(long long)arg1;
- (long long)userID;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)isPasswordServerEnabled;
- (BOOL)isLocal;
- (BOOL)isNewUser;
- (id)description;
- (void)dealloc;
- (id)initWithRecordName:(const char *)arg1 type:(const char *)arg2 node:(id)arg3;
- (id)setSecureTokenAuthorizationEnabled:(BOOL)arg1 userPassword:(id)arg2 authorizingUserName:(id)arg3 authorizingUserPassword:(id)arg4;
- (id)setSecureTokenAuthorizationEnabled:(BOOL)arg1 userPassword:(id)arg2;
- (BOOL)isSecureTokenAuthorizationEnabled;
- (id)authenticationAuthority;
- (void)setUnlockOptions:(long long)arg1 immideately:(BOOL)arg2;
- (long long)unlockOptions;
- (int)unpairSBSAccountWithAuthorizationRef:(struct AuthorizationOpaqueRef *)arg1;
- (int)pairWithSBSAccount:(id)arg1 SBSPassword:(id)arg2 SBSNode:(id)arg3 password:(id)arg4 authorizationRef:(struct AuthorizationOpaqueRef *)arg5;
- (id)SBSAccountName;
- (BOOL)hasAFPHomeDir;
- (id)AFPHomeDirURL;
- (BOOL)isHomeDirEncrypted;
- (void)setHomeDirEncrypted:(BOOL)arg1;
- (void)setEncryptedHomeVolumeUUID:(id)arg1;
- (void)setEncryptedDiskImagePath:(id)arg1;
- (id)encryptedDiskImagePath;
- (id)homeLocURLString;
- (id)defaultEncryptedDiskImagePath;
- (id)pathToProxyFile;
- (id)defaultPortableUserHomeDirectoryOnVolume:(id)arg1;
- (id)portableUserVolume;
- (void)setPortableUserVolume:(id)arg1;
- (void)setUserCanChangeLinkedIdentityName:(BOOL)arg1;
- (BOOL)userCanChangeLinkedIdentityName;
- (void)linkedIdentityNameDidChangeExternally;
- (long long)setLinkedIdentityName:(id)arg1 authorization:(id)arg2;
- (id)linkedIdentityName;
- (struct __CSIdentity *)identityRef;
- (BOOL)isIdentity;
- (long long)prvisionForFDEAuthUser:(id)arg1 authPassword:(id)arg2;
- (BOOL)canUnlockFDE;
- (void)wcSetPreHashedPassword:(id)arg1;
- (void)wcSetNAPrivs:(id)arg1;
- (void)_removeAuthAuthority:(id)arg1;
- (id)_authAuthorityForString:(id)arg1;
- (BOOL)_hasAuthAuthority:(id)arg1;
- (id)_authAuthorityDictForString:(id)arg1;
- (void)_postDistributedNotification:(id)arg1;
- (void)_setDefaults;
- (void)_setAdministrator:(BOOL)arg1 postNotification:(BOOL)arg2;
- (void)_setUserCanChange:(BOOL)arg1 writersKey:(id)arg2;
- (BOOL)_checkWritersKey:(id)arg1;
- (id)_cachedFirstObjectForKey:(id)arg1;
- (void)_setNoneStandardAttribute:(id)arg1 value:(id)arg2;
- (id)_noneStandardAttribute:(id)arg1;
- (id)_recacheAttribute:(id)arg1;
- (void)_removeCachedAttribute:(id)arg1;
- (void)_setCachedObject:(id)arg1 forKey:(id)arg2;
- (void)_cacheAttributes:(id)arg1 forKey:(id)arg2;
- (void)_cacheUserInfo;
- (void)_setLocal:(BOOL)arg1;
- (id)_initWithInfo:(id)arg1 node:(id)arg2 attributes:(id)arg3;
- (id)_cachedObjectForKey:(id)arg1;

@end

