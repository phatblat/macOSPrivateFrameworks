//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSURL, SUScan;

@interface SUScanController : NSObject
{
    NSObject<OS_os_activity> *_activity;
    NSMutableArray *_availableProducts;
    NSMutableSet *_productsIneligibleForCleanup;
    NSMutableDictionary *_productByKey;
    NSURL *_catalogURLFromPrefs;
    NSURL *_appleCatalogURLFromPrefs;
    NSURL *_catalogURL;
    int _catalogTrustLevel;
    NSArray *_preferredLocalizationsForLastClient;
    long long _scanState;
    SUScan *_scanInProgress;
    NSError *_lastScanError;
    NSDate *_lastCmdRScanCompleted;
    NSObject<OS_dispatch_queue> *_updateInfoQueue;
    NSObject<OS_dispatch_queue> *_scanRefreshQueue;
    NSObject<OS_dispatch_queue> *_scanStateQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    BOOL _scanDisabled;
    CDUnknownBlockType _availableProductsDidChangeHandler;
    CDUnknownBlockType _catalogURLDidChangeHandler;
}

+ (id)sharedScanController;
@property(copy) CDUnknownBlockType catalogURLDidChangeHandler; // @synthesize catalogURLDidChangeHandler=_catalogURLDidChangeHandler;
@property(copy) CDUnknownBlockType availableProductsDidChangeHandler; // @synthesize availableProductsDidChangeHandler=_availableProductsDidChangeHandler;
- (void)_handleDeferredInstallSettingsDidChangeNotification:(id)arg1;
- (void)populateTagCache:(CDUnknownBlockType)arg1;
- (void)removeInapplicableLocalProducts;
- (void)setProductIneligibleForCleanup:(id)arg1;
- (void)clearAllHidden;
- (void)setScanDisabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2;
- (BOOL)checkForChangeInCatalogURL;
- (void)markRampedUpdatesAsSeen;
- (void)_clearCriticalUpdateNotificationDateIfAppropriate;
- (void)removeAvailableProductsWithKeys:(id)arg1;
- (double)currentRefreshProgress;
- (BOOL)_wasSoftwareInstalledSinceLastScan;
- (void)_refreshAvailableUpdatesFromScan:(id)arg1;
- (void)refreshAvailableProductsInForeground:(BOOL)arg1 limitedToChanged:(BOOL)arg2 evenIfConfigurationChanged:(BOOL)arg3 initiatedByDeviceConnection:(BOOL)arg4 limitedToProductKeys:(id)arg5 limitedToProductTypes:(id)arg6 forCurrentConfiguration:(BOOL)arg7 distributionEnvironment:(id)arg8 distributionEvalutionMetainfo:(id)arg9 installedPrinters:(id)arg10 preferredLocalizations:(id)arg11 finish:(CDUnknownBlockType)arg12;
- (id)availableProductsForKeys:(id)arg1;
- (id)availableProductForKey:(id)arg1;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 filterDeferred:(BOOL)arg4 filterDuplicates:(BOOL)arg5 usingUpdates:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (id)_shortDescriptionOf:(id)arg1;
- (id)_logScanResultsWithProducts:(id)arg1;
- (id)availableProducts;
- (BOOL)isScanActive;
- (id)currentlySetCatalogURL;
- (BOOL)isEVProtected;
- (BOOL)isAppleSeedCatalog;
- (BOOL)isDefaultAppleCatalog;
- (int)catalogTrustLevel;
- (id)catalogURL;
- (void)dumpDebugInfo;
- (void)resetState;
- (void)archiveToCoder:(id)arg1;
- (void)restoreFromCoder:(id)arg1;
- (void)dumpStateFromCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

