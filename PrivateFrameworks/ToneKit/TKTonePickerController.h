//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLToneStoreDownloadObserver.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TKTonePickerItem, TLAlert, TLToneManager;

@interface TKTonePickerController : NSObject <TLToneStoreDownloadObserver>
{
    TLToneManager *_toneManager;
    unsigned long long _toneTypes;
    BOOL _defaultToneIdentifierWasExplicitlySet;
    BOOL _selectedToneWasExplicitlySetToDefaultTone;
    BOOL _selectedVibrationIdentifierWasExplicitlySet;
    BOOL _showsNoneWasExplicitlySet;
    BOOL _isToneStoreDownloadButtonAllowed;
    long long _toneStoreDownloadButtonState;
    NSMutableDictionary *_activeToneStoreDownloadsByIdentifier;
    NSMutableDictionary *_finishedToneStoreDownloadsByIdentifier;
    BOOL _shouldFreezeContentsOriginatingFromToneManager;
    BOOL _hasLoadedTonesOnce;
    NSMutableArray *_cachedPickerSectionItems;
    NSMutableArray *_cachedPickerRowItems;
    NSMutableArray *_cachedClassicRingtonePickerItems;
    NSMutableArray *_cachedClassicAlertTonePickerItems;
    NSArray *_installedTones;
    NSMutableArray *_toneGroupLists;
    NSMutableArray *_toneGroupNames;
    NSMutableArray *_toneGroupBucketIdentifiers;
    NSMutableSet *_identifiersOfRemovableTones;
    TLAlert *_playingAlert;
    BOOL _showsDefault;
    BOOL _showsNone;
    BOOL _noneAtTop;
    BOOL _showsNothingSelected;
    BOOL _showsToneStore;
    BOOL _mediaAtTop;
    BOOL _showsVibrations;
    BOOL _showsIgnoreMute;
    BOOL _ignoreMute;
    BOOL __behavesAsRingtonePicker;
    id <TKTonePickerControllerDelegate> _delegate;
    long long _alertType;
    NSString *_topic;
    NSString *_defaultToneIdentifier;
    NSString *_noneString;
    NSString *_selectedVibrationIdentifier;
    id <TLToneStoreDownloadController> _toneStoreDownloadController;
    NSArray *__classicRingtoneIdentifiers;
    NSArray *__classicAlertToneIdentifiers;
    unsigned long long __selectedClassicRingtoneIndex;
    unsigned long long __selectedClassicAlertToneIndex;
    NSIndexPath *__selectedToneIndexPath;
}

+ (void)_updateLatestRedownloadAllTonesDate;
+ (id)_latestRedownloadAllTonesDate;
@property(nonatomic, setter=_setBehavesAsRingtonePicker:) BOOL _behavesAsRingtonePicker; // @synthesize _behavesAsRingtonePicker=__behavesAsRingtonePicker;
@property(retain, nonatomic, setter=_setSelectedToneIndexPath:) NSIndexPath *_selectedToneIndexPath; // @synthesize _selectedToneIndexPath=__selectedToneIndexPath;
@property(nonatomic, setter=_setSelectedClassicAlertToneIndex:) unsigned long long _selectedClassicAlertToneIndex; // @synthesize _selectedClassicAlertToneIndex=__selectedClassicAlertToneIndex;
@property(nonatomic, setter=_setSelectedClassicRingtoneIndex:) unsigned long long _selectedClassicRingtoneIndex; // @synthesize _selectedClassicRingtoneIndex=__selectedClassicRingtoneIndex;
@property(retain, nonatomic, setter=_setClassicAlertToneIdentifiers:) NSArray *_classicAlertToneIdentifiers; // @synthesize _classicAlertToneIdentifiers=__classicAlertToneIdentifiers;
@property(retain, nonatomic, setter=_setClassicRingtoneIdentifiers:) NSArray *_classicRingtoneIdentifiers; // @synthesize _classicRingtoneIdentifiers=__classicRingtoneIdentifiers;
@property(retain, nonatomic) id <TLToneStoreDownloadController> toneStoreDownloadController; // @synthesize toneStoreDownloadController=_toneStoreDownloadController;
@property(nonatomic) BOOL ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property(nonatomic) BOOL showsIgnoreMute; // @synthesize showsIgnoreMute=_showsIgnoreMute;
@property(copy, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;
@property(nonatomic) BOOL showsVibrations; // @synthesize showsVibrations=_showsVibrations;
@property(nonatomic, getter=isMediaAtTop) BOOL mediaAtTop; // @synthesize mediaAtTop=_mediaAtTop;
@property(nonatomic) BOOL showsToneStore; // @synthesize showsToneStore=_showsToneStore;
@property(nonatomic) BOOL showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(copy, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic, getter=isNoneAtTop) BOOL noneAtTop; // @synthesize noneAtTop=_noneAtTop;
@property(nonatomic) BOOL showsNone; // @synthesize showsNone=_showsNone;
@property(nonatomic) BOOL showsDefault; // @synthesize showsDefault=_showsDefault;
@property(copy, nonatomic) NSString *defaultToneIdentifier; // @synthesize defaultToneIdentifier=_defaultToneIdentifier;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(nonatomic) __weak id <TKTonePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_toneManagerContentsChanged:(id)arg1;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)_didUpdateDetailText:(id)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_didReloadTones;
- (id)_annotatedNameForToneIdentifier:(id)arg1;
- (void)_updateDetailTextOfVibrationItem;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (id)_nameOfSelectedVibrationIdentifier;
- (id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(BOOL)arg1;
- (void)_resetSelectedVibrationIdentifierForcingUpdatingVibrationName:(BOOL)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 forceUpdatingVibrationName:(BOOL)arg2 explicitlySet:(BOOL)arg3;
- (void)_setSelectedVibrationIdentifier:(id)arg1 explicitlySet:(BOOL)arg2;
- (void)_reloadMediaItems;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (unsigned long long)_indexOfMediaItemWithIdentifier:(id)arg1;
- (id)_identifierOfMediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)_mediaItemsCount;
- (BOOL)_isMediaAtTop;
- (BOOL)_showsMedia;
- (void)finishedWithPicker;
- (void)_didFinishPlayingAlert:(id)arg1;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)_togglePlayForToneWithIdentifier:(id)arg1;
- (void)_playToneWithIdentifier:(id)arg1;
- (void)_redownloadAllTones;
- (void)_goToStore;
- (id)_nameForToneIdentifier:(id)arg1;
- (id)_footerTextForToneStoreGroup;
- (void)_disableToneStoreDownloadItem;
- (BOOL)_enableToneStoreDownloadItemIfAppropriate;
- (void)_didUpdateToneStoreDownloadItem;
- (void)_didUpdateFooterTextForToneStoreGroup;
- (void)toneStoreDownloadsDidFinish:(id)arg1;
- (void)toneStoreDownloadsDidProgress:(id)arg1;
- (void)toneStoreDownloadsDidStart:(id)arg1;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)arg1;
- (void)storeAccountNameDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL canShowStore;
- (void)_applyBatchUpdatesWithDeletedPickerRowItems:(id)arg1 deletedTonePickerSectionItems:(id)arg2 insertedPickerRowItems:(id)arg3 insertedTonePickerSectionItems:(id)arg4 tonePickerSectionItemsWithUpdatedHeaderText:(id)arg5 tonePickerSectionItemsWithUpdatedFooterText:(id)arg6;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic, setter=_setToneManager:) TLToneManager *_toneManager;
- (void)_sortToneIdentifiersArray:(id)arg1;
- (id)_loadRingtonesFromPlist;
- (id)_loadAlertTonesFromPlist;
- (id)_loadTonesFromPlistNamed:(id)arg1;
@property(readonly, nonatomic) NSString *_ringtonesPlistName;
@property(readonly, nonatomic) NSString *_alertTonesPlistName;
- (void)_reloadTonesForExternalChange:(BOOL)arg1 shouldSkipDelegateFullReload:(BOOL)arg2;
- (void)_reloadTones;
- (void)_reloadStateForBasicBehavior;
- (void)deleteTonePickerItem:(id)arg1;
- (BOOL)canDeleteTonePickerItem:(id)arg1;
- (BOOL)_didSelectToneClassicsPickerItem:(id)arg1;
- (BOOL)didSelectTonePickerItem:(id)arg1;
- (id)_selectedIdentifier:(char *)arg1;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_identifierOfSelectedClassicAlertTone;
- (void)_setSelectedToneIdentifier:(id)arg1 currentlyReloadingTones:(BOOL)arg2;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(readonly, nonatomic) TKTonePickerItem *selectedTonePickerItem;
@property(readonly, nonatomic) TKTonePickerItem *_topLevelSelectedTonePickerItem;
- (id)_identifierAtIndexPath:(id)arg1 isMediaItem:(char *)arg2;
- (id)_identifierOfToneAtIndexPath:(id)arg1;
- (id)_indexPathForToneWithIdentifier:(id)arg1;
- (BOOL)_isDividerAtIndexPath:(id)arg1;
- (BOOL)_isMediaGroupAtIndexPath:(id)arg1;
- (BOOL)_isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)_isDefaultGroupAtIndexPath:(id)arg1;
- (BOOL)_isToneStoreGroupAtIndexPath:(id)arg1;
- (BOOL)_isVibrationGroupAtIndexPath:(id)arg1;
- (BOOL)_isIgnoreMuteGroupAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPathForSelectedTone;
@property(readonly, nonatomic) NSIndexPath *_indexPathForNone;
@property(readonly, nonatomic) NSIndexPath *_indexPathForMediaGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForFirstToneGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForDefaultGroup;
- (id)_indexPathForToneStoreDownloadItem;
@property(readonly, nonatomic) NSIndexPath *_indexPathForToneStoreGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForVibrationGroup;
- (id)_indexPathForIgnoreMuteGroup;
- (void)_invalidatePickerItemCaches;
- (void)_cacheToneClassicsPickerItem:(id)arg1 forIndex:(long long)arg2 headerKind:(unsigned long long)arg3;
- (id)_cachedToneClassicsPickerItemForIndex:(long long)arg1 headerKind:(unsigned long long)arg2;
- (void)_uncachePickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_cachePickerRowItem:(id)arg1 atIndex:(long long)arg2 inSectionForItem:(id)arg3;
- (id)_cachedPickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_cachePickerSectionItem:(id)arg1 forSection:(long long)arg2;
- (id)_cachedPickerItemForSection:(long long)arg1;
- (id)_toneClassicsPickerItemAtIndex:(long long)arg1 belowTonePickerItem:(id)arg2;
- (id)_pickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (id)pickerItemForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)dealloc;
- (id)initWithAlertType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

