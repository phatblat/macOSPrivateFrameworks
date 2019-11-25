//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LegacyPhotoStreamConfiguration : NSObject
{
}

+ (id)streamLibraryIdentifier;
+ (BOOL)hasUnimportedAssets;
+ (id)importStatusInformation;
+ (id)legacyStatusInformationWithStatusInformation:(id)arg1;
+ (struct __CFString *)configurationAppId;
+ (id)rawLegacyServiceConfiguration;
+ (id)configuration;
+ (void)setConfiguration:(id)arg1;
+ (BOOL)isSharedPhotoStreamEnabledInSettings:(id)arg1;
+ (BOOL)isSharedPhotoStreamEnabled;
+ (BOOL)isMyPhotoStreamEnabledInSettings:(id)arg1;
+ (BOOL)isMyPhotoStreamEnabled;
+ (id)versionStringForBundleAtURL:(id)arg1;
+ (id)applicationBundleVersionForIdentifier:(id)arg1;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)arg1 versionLowerThanVersion:(id)arg2;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)arg1 minimumVersion:(id)arg2;
+ (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (void)disablePhotostreamAgentLoginItemAtURL:(id)arg1;
+ (void)disablePhotostreamAgentLoginItem;
+ (id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)arg1;
+ (id)photoStreamAgentURL;
+ (void)enablePhotostreamAgentLoginItem;
+ (BOOL)setLegacyPhotoStreamStateForAppleID:(id)arg1 options:(id)arg2;
+ (void)disableLegacyPhotoApplicationCloudPhotoServices;
+ (BOOL)applyStateChangeMap:(id)arg1 forAppleID:(id)arg2;
+ (BOOL)applyStateChangeRequest:(id)arg1 forAppleID:(id)arg2;
+ (BOOL)currentProcessIsLegacyPhotoApplication;

@end

