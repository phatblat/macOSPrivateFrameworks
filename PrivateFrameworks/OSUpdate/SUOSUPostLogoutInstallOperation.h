//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IASUnifiedProgressClient, NSArray, NSObject<OS_dispatch_source>, SUPowerAssertionManager;

@interface SUOSUPostLogoutInstallOperation : NSObject
{
    BOOL _enableBatteryPowerCheck;
    BOOL _enableStashing;
    BOOL _shouldShutDownWhenComplete;
    BOOL _cancelled;
    BOOL _hasCriticalUpdates;
    BOOL _hasBaseSystemSU;
    BOOL _nowIsLater;
    BOOL _enableFirstLoginOptimization;
    BOOL _enableCreatingPreUpdateAPFSSnapshot;
    BOOL _installInProgress;
    NSArray *_productKeys;
    SUPowerAssertionManager *_powerAssertionManager;
    IASUnifiedProgressClient *_progressClient;
    NSObject<OS_dispatch_source> *_progressTimer;
}

@property BOOL installInProgress; // @synthesize installInProgress=_installInProgress;
@property(retain) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain) IASUnifiedProgressClient *progressClient; // @synthesize progressClient=_progressClient;
@property(retain) SUPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property BOOL enableCreatingPreUpdateAPFSSnapshot; // @synthesize enableCreatingPreUpdateAPFSSnapshot=_enableCreatingPreUpdateAPFSSnapshot;
@property BOOL enableFirstLoginOptimization; // @synthesize enableFirstLoginOptimization=_enableFirstLoginOptimization;
@property BOOL nowIsLater; // @synthesize nowIsLater=_nowIsLater;
@property BOOL hasBaseSystemSU; // @synthesize hasBaseSystemSU=_hasBaseSystemSU;
@property BOOL hasCriticalUpdates; // @synthesize hasCriticalUpdates=_hasCriticalUpdates;
@property(retain) NSArray *productKeys; // @synthesize productKeys=_productKeys;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property BOOL shouldShutDownWhenComplete; // @synthesize shouldShutDownWhenComplete=_shouldShutDownWhenComplete;
@property BOOL enableStashing; // @synthesize enableStashing=_enableStashing;
@property BOOL enableBatteryPowerCheck; // @synthesize enableBatteryPowerCheck=_enableBatteryPowerCheck;
- (void).cxx_destruct;
- (id)_productKeysFromProducts:(id)arg1;
- (id)_synchronousUpdateService;
- (id)_asynchronousUpdateService;
- (void)_commitStashAndRebootAfterSuccessfulPreparation:(BOOL)arg1;
- (BOOL)_install;
- (void)_createPreUpdateAPFSSnapshot;
- (BOOL)_hasSufficientBatteryPower;
- (BOOL)_hasSufficientDiskSpace;
- (void)_configureAndShowProgress;
- (BOOL)_run;
- (BOOL)_configure;
- (BOOL)runAndRebootWhenFinished;
- (id)init;

@end

