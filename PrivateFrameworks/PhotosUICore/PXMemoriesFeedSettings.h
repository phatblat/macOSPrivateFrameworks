//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesFeedSettings : PXSettings
{
    BOOL _useSlowAnimations;
    BOOL _forceReloadAfterRefresh;
    BOOL _disableRoundedOverlays;
    BOOL _displayContentDuringGraphRebuild;
    BOOL _alwaysShowOnboarding;
    long long _dataSourceType;
    long long _memoryGroupingMethod;
    double _memoryGroupingInterval;
    double _additionalContentThreshold;
    unsigned long long _groupsPerBatch;
    long long _favoriteMemoriesSortOrder;
    long long _sharingBehavior;
}

+ (id)sharedInstance;
+ (id)_resetRejectedMemories;
+ (id)_postNotificationAction;
+ (id)settingsControllerModule;
@property(nonatomic) long long sharingBehavior; // @synthesize sharingBehavior=_sharingBehavior;
@property(nonatomic) long long favoriteMemoriesSortOrder; // @synthesize favoriteMemoriesSortOrder=_favoriteMemoriesSortOrder;
@property(nonatomic) unsigned long long groupsPerBatch; // @synthesize groupsPerBatch=_groupsPerBatch;
@property(nonatomic) double additionalContentThreshold; // @synthesize additionalContentThreshold=_additionalContentThreshold;
@property(nonatomic) double memoryGroupingInterval; // @synthesize memoryGroupingInterval=_memoryGroupingInterval;
@property(nonatomic) long long memoryGroupingMethod; // @synthesize memoryGroupingMethod=_memoryGroupingMethod;
@property(nonatomic) BOOL alwaysShowOnboarding; // @synthesize alwaysShowOnboarding=_alwaysShowOnboarding;
@property(nonatomic) BOOL displayContentDuringGraphRebuild; // @synthesize displayContentDuringGraphRebuild=_displayContentDuringGraphRebuild;
@property(nonatomic) BOOL disableRoundedOverlays; // @synthesize disableRoundedOverlays=_disableRoundedOverlays;
@property(nonatomic) BOOL forceReloadAfterRefresh; // @synthesize forceReloadAfterRefresh=_forceReloadAfterRefresh;
@property(nonatomic) BOOL useSlowAnimations; // @synthesize useSlowAnimations=_useSlowAnimations;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (void)setDefaultValues;
- (long long)_defaultDataSourceType;
- (id)parentSettings;

@end

