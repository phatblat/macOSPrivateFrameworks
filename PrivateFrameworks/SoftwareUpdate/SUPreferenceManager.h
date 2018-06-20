//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUUpdateClient.h"

@class NSDate, NSNumber, NSString, NSXPCConnection;

@interface SUPreferenceManager : NSObject <SUUpdateClient>
{
    NSXPCConnection *_connection;
}

+ (id)defaultManager;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)updatesQueuedForLaterDidChange;
- (void)hiddenUpdatesDidChange;
- (void)catalogURLDidChange;
- (void)installStateDidChange:(id)arg1 forUpdateWithProductKey:(id)arg2;
- (void)availableUpdatesDidChange;
- (void)_reconnectIfNecessary;
- (id)_newResumedConnection;
- (BOOL)_migratePreferencesWithError:(id *)arg1;
- (BOOL)_setPreferenceObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;
- (id)_preferenceObjectForKey:(id)arg1 withError:(id *)arg2;
- (BOOL)enableRecommendedSettings;
- (BOOL)setBaseSystemDiskImageOverridePath:(id)arg1;
- (BOOL)setOnlyConsiderStagedUpdatesForPredicateAndConfigDataUpdates:(BOOL)arg1;
- (BOOL)setDisableSeedUI:(BOOL)arg1;
- (BOOL)setAllowAnyCatalogCertificate:(BOOL)arg1;
- (BOOL)setSpecialTestMode:(BOOL)arg1;
- (BOOL)setAutomaticallyInstallMacOSUpdates:(BOOL)arg1;
- (BOOL)setAutomaticallyInstallRestartRequiredUpdates:(BOOL)arg1;
- (BOOL)setAutomaticallyInstallConfigDataAndSecurityUpdates:(BOOL)arg1;
- (BOOL)setDownloadUpdatesInBackground:(BOOL)arg1;
- (BOOL)setAutomaticallyCheckForUpdates:(BOOL)arg1;
- (BOOL)setCatalogURL:(id)arg1;
- (BOOL)setCatalogToProductionAndNotify;
@property(readonly) BOOL allowSameOrOlderMajorOSVersion;
@property(readonly) long long lastScanResultCode;
@property(readonly) NSString *baseSystemDiskImageOverridePath;
@property(readonly) BOOL onlyConsiderStagedUpdates;
@property(readonly) BOOL disableSeedUI;
@property(readonly) BOOL allowAnyCatalogCertificate;
@property(readonly) BOOL specialTestMode;
@property(readonly) BOOL automaticallyInstallMacOSUpdates;
@property(readonly) BOOL automaticallyInstallRestartRequiredUpdates;
@property(readonly) BOOL automaticallyInstallConfigDataAndSecurityUpdates;
@property(readonly) BOOL downloadUpdatesInBackground;
@property(readonly) BOOL automaticallyCheckForUpdates;
- (BOOL)migratePreferencesIfNecessary;
@property(readonly) NSNumber *recommendedUpdatesAvailable;
@property(readonly) NSDate *lastCatalogChangedDate;
@property(readonly) NSDate *lastFullScanSuccessfulDate;
@property(readonly) NSDate *lastScanSuccessfulDate;
@property(readonly) NSString *catalogURL;
- (BOOL)_setPreferenceObject:(id)arg1 requiringObjectClass:(Class)arg2 forKey:(id)arg3;
- (id)_preferenceObjectForKey:(id)arg1 requiringClass:(Class)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

