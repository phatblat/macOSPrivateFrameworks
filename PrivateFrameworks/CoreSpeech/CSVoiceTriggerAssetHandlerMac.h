//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>

#import "CSFirstUnlockMonitorDelegate.h"
#import "CSLanguageCodeUpdateMonitorDelegate.h"
#import "CSVoiceTriggerAssetDownloadMonitorDelegate.h"

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSAsset *_cachedAsset;
}

@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void).cxx_destruct;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2;
- (void)_checkNewAssetAvailablity;
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
