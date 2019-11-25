//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSError, SKDisk;

@interface OSICleanUpElement : OSIInstallQueueElement
{
    BOOL _done;
    SKDisk *_alternateBlessTarget;
    NSError *_error;
}

@property BOOL done; // @synthesize done=_done;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) SKDisk *alternateBlessTarget; // @synthesize alternateBlessTarget=_alternateBlessTarget;
- (void).cxx_destruct;
- (BOOL)_requestTRBXCompatibilityCheck;
- (void)_cleanUpPKGDMGSItemsAtPath:(id)arg1;
- (void)_writeTALRestoreApps;
- (void)_writeInstallTypeCookieForServerAndMacBuddy;
- (void)_writeInstallResultsCookieForSpotlight;
- (void)_writeToSeedingPlist;
- (void)_stampSeedingProgramToSeedingCookie:(id)arg1 cookiePath:(id)arg2;
- (void)_addRunningLanguageAndDirToGlobalPreferences;
- (void)_writeAutoLanguageChooserCookie;
- (void)_copyDiagnosticReportsToTarget;
- (void)_copyFSCKLogToTarget;
- (void)_copyAPFSConverterLogToTarget;
- (void)_flushIALogToTarget;
- (void)removeCleanupInstallerPlist:(id)arg1;
- (double)estimatedTimeToComplete;
- (BOOL)okayToSkip;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;

@end

