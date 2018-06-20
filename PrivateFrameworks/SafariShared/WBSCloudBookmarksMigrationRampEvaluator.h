//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString, WBSCloudBookmarksMigrationRampSettings;

@interface WBSCloudBookmarksMigrationRampEvaluator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_dateOfLastSettingsUpdate;
    BOOL _rampIncludesUserIdentity;
    WBSCloudBookmarksMigrationRampSettings *_settings;
    NSString *_userIdentity;
}

- (void).cxx_destruct;
- (BOOL)_isInternalBuild;
- (id)_macSafariNormalizedBundleVersion;
- (CDStruct_f6aba300)_operatingSystemVersion;
- (id)_operatingSystemFamily;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (BOOL)_evaluateRampIncludesOperatingSystemVersion;
- (BOOL)_evaluateRampIncludesUserIdentity;
@property(readonly, nonatomic) WBSCloudBookmarksMigrationRampSettings *settings;
@property(readonly, nonatomic) BOOL rampIncludesUserIdentity;
- (void)clearUserIdentity;
- (void)_didFetchSettingsDictionary:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSettingsIfNeeded:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateUserIdentityIfNeededWithFetcher:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateForced:(BOOL)arg1 withUserIdentityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initFromDictionaryRepresentation:(id)arg1;

@end

