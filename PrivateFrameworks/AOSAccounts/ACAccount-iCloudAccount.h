//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@class NSArray, NSDictionary, NSString, iCloudRegionInfo;

@interface ACAccount (iCloudAccount)
+ (id)icaAppleAccountWithAppleID:(id)arg1 password:(id)arg2;
- (id)supportedDataclass:(id)arg1 isPrimary:(BOOL)arg2 isManagedAppleID:(BOOL)arg3;
- (void)icaClearRawPassword;
- (void)icaSetRawPassword:(id)arg1;
- (id)icaRawPassword;
- (id)icaAppleAccountInfo;
- (id)icaMobileMeInfo;
- (id)icaPropertiesForDataclass:(id)arg1;
@property(readonly, nonatomic) NSArray *icaAvailableFeatures; // @dynamic icaAvailableFeatures;
- (id)icaAuthTokenWithError:(id *)arg1;
- (id)icaFmipSiriToken;
@property(readonly, nonatomic) NSString *icaCloudKitToken; // @dynamic icaCloudKitToken;
@property(readonly, nonatomic) NSString *icaMDMServerToken; // @dynamic icaMDMServerToken;
- (id)icaMapsToken;
@property(readonly, nonatomic) NSString *icaFmipToken; // @dynamic icaFmipToken;
@property(readonly, nonatomic) NSString *icaFmfToken; // @dynamic icaFmfToken;
@property(readonly, nonatomic) NSString *icaAuthToken; // @dynamic icaAuthToken;
@property(readonly, nonatomic) NSDictionary *icaTokens; // @dynamic icaTokens;
- (void)icaSetTokens:(id)arg1;
@property(nonatomic, setter=icaSetDelegateParameters:) NSDictionary *icaDelegateParameters; // @dynamic icaDelegateParameters;
@property(nonatomic, setter=icaSetAOSMigrationCompleted:) BOOL icaAOSMigrationCompleted;
@property(nonatomic, setter=icaSetNeedsToVerifyTerms:) BOOL icaNeedsToVerifyTerms;
@property(readonly, nonatomic) NSArray *icaAppleIDAliases; // @dynamic icaAppleIDAliases;
@property(readonly, nonatomic) NSString *icaAppleIDAlias; // @dynamic icaAppleIDAlias;
@property(readonly, nonatomic) NSString *icaAltDSID;
@property(readonly, nonatomic) NSString *icaAppleID;
@property(readonly, nonatomic) NSString *icaAppleIDProtocolVersion;
- (BOOL)primaryEmailVerified;
@property(readonly, nonatomic) NSString *icaPrimaryEmail; // @dynamic icaPrimaryEmail;
@property(readonly, nonatomic) iCloudRegionInfo *icaRegionInfo;
@property(readonly, nonatomic) BOOL icaHasOptionalTerms;
@property(readonly, nonatomic) BOOL icaIsSandboxAcct;
@property(readonly, nonatomic) BOOL icaIsNotesMigrated;
@property(readonly, nonatomic) BOOL icaIsManagedAppleID;
@property(readonly, nonatomic) BOOL icaIsPrimaryEmailVerified;
@property(nonatomic, setter=icaSetPrimaryAccount:) BOOL icaIsPrimaryAccount;
@property(readonly, nonatomic) NSString *icaAccountTypeString; // @dynamic icaAccountTypeString;
@property(readonly, nonatomic) NSString *icaPersonID; // @dynamic icaPersonID;
@property(readonly, nonatomic) NSString *icaLastName; // @dynamic icaLastName;
@property(readonly, nonatomic) NSString *icaFirstName; // @dynamic icaFirstName;
@property(readonly, nonatomic) NSString *icaFormattedUsername;
@property(readonly, nonatomic) NSString *icaDisplayName; // @dynamic icaDisplayName;

// Remaining properties
@property(readonly, nonatomic) NSString *icaPrimaryEmailVerified; // @dynamic icaPrimaryEmailVerified;
@property(readonly, nonatomic) NSString *icsMapsToken; // @dynamic icsMapsToken;
@end

