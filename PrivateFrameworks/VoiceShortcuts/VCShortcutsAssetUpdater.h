//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCUserDefaults;

@interface VCShortcutsAssetUpdater : NSObject
{
    VCUserDefaults *_defaults;
}

+ (BOOL)updateAsset;
+ (void)scheduleAssetUpdate;
@property(readonly, nonatomic) VCUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void).cxx_destruct;
- (BOOL)updateVoiceShortcutsBlacklistWithAsset:(id)arg1;
- (BOOL)downloadAsset:(id)arg1;
- (BOOL)downloadAssetCatalog;
- (id)fetchLatestAsset;
- (BOOL)updateAsset;
- (id)init;

@end

