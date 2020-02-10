//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"

@class CEMAccountSettingsDeclaration, CEMApplicationSettingsDeclaration, CEMApplicationStoreDeclaration, CEMLegacyRestrictionsAppsDeclaration, CEMMediaSettingsDeclaration, CEMNetworkCellularSettingsDeclaration, CEMPasscodeSettingsDeclaration, CEMSystemAirdropDeclaration, CEMSystemBasicWebContentFilterDeclaration, CEMSystemCameraDeclaration, CEMSystemCarPlayDeclaration, CEMSystemDoNotDisturbDeclaration, CEMSystemGameCenterDeclaration, CEMSystemMusicDeclaration, CEMSystemRatingsDeclaration, CEMSystemSiriDeclaration, CEMSystemTVProviderDeclaration, NSArray, NSDictionary, NSFetchedResultsController, NSManagedObjectContext, NSString, STBlueprint, STCoreOrganization, STCoreUser, STKeyValuePair;

@interface STContentAndPrivacyController : NSObject <NSFetchedResultsControllerDelegate>
{
    BOOL _screenTimeEnabled;
    BOOL _contentAndPrivacyEnabled;
    BOOL _volumeLimitChangesAllowed;
    STCoreUser *_user;
    NSFetchedResultsController *_userFetchedResultsController;
    NSFetchedResultsController *_localUserFetchedResultsController;
    NSFetchedResultsController *_blueprintFetchedResultsController;
    NSFetchedResultsController *_configurationFetchedResultsController;
    STCoreOrganization *_managingOrganization;
    STBlueprint *_blueprint;
    STCoreUser *_localUser;
    CEMLegacyRestrictionsAppsDeclaration *_legacyAppRestrictions;
    CEMSystemCameraDeclaration *_cameraRestrictions;
    CEMSystemSiriDeclaration *_siriRestrictions;
    CEMSystemAirdropDeclaration *_airdropRestrictions;
    CEMSystemCarPlayDeclaration *_carplayRestrictions;
    CEMMediaSettingsDeclaration *_mediaRestrictions;
    CEMApplicationStoreDeclaration *_storeRestrictions;
    CEMSystemRatingsDeclaration *_ratingsRestrictions;
    CEMSystemMusicDeclaration *_musicRestrictions;
    CEMSystemBasicWebContentFilterDeclaration *_webRestrictions;
    CEMSystemGameCenterDeclaration *_gameCenterRestrictions;
    CEMPasscodeSettingsDeclaration *_passcodeRestrictions;
    CEMAccountSettingsDeclaration *_accountRestrictions;
    CEMNetworkCellularSettingsDeclaration *_cellularRestrictions;
    CEMSystemDoNotDisturbDeclaration *_doNotDisturbRestrictions;
    CEMSystemTVProviderDeclaration *_tvProviderRestrictions;
    CEMApplicationSettingsDeclaration *_applicationSettingsRestrictions;
}

+ (id)keyPathsForValuesAffectingBackgroundAppActivityChangesAllowed;
+ (id)keyPathsForValuesAffectingTvProviderChangesAllowed;
+ (id)keyPathsForValuesAffectingDoNotDisturbWhileDrivingChangesAllowed;
+ (id)keyPathsForValuesAffectingCellularDataChangesAllowed;
+ (id)keyPathsForValuesAffectingAccountChangesAllowed;
+ (id)keyPathsForValuesAffectingPasscodeChangesAllowed;
+ (id)keyPathsForValuesAffectingGameCenterScreenRecordingAllowed;
+ (id)keyPathsForValuesAffectingAddingFriendsInGameCenterAllowed;
+ (id)keyPathsForValuesAffectingMultiplayerGameCenterGamesAllowed;
+ (id)keyPathsForValuesAffectingSiriWebSearchAllowed;
+ (id)keyPathsForValuesAffectingExplicitSiriAllowed;
+ (id)keyPathsForValuesAffectingAllowedTitlesByURL;
+ (id)keyPathsForValuesAffectingBlackListedSites;
+ (id)keyPathsForValuesAffectingWhiteListedSites;
+ (id)keyPathsForValuesAffectingContentFilterEnabled;
+ (id)keyPathsForValuesAffectingWebAllowed;
+ (id)keyPathsForValuesAffectingMusicProfilesAndPostsAllowed;
+ (id)keyPathsForValuesAffectingExplicitMusicPodcastsNewsAllowed;
+ (id)keyPathsForValuesAffectingBookstoreEroticaAllowed;
+ (id)keyPathsForValuesAffectingSelectedTVRating;
+ (id)keyPathsForValuesAffectingValuesByLocalizedTVRating;
+ (id)keyPathsForValuesAffectingSelectedMovieRating;
+ (id)keyPathsForValuesAffectingValuesByLocalizedMovieRating;
+ (id)keyPathsForValuesAffectingSelectedAppRating;
+ (id)keyPathsForValuesAffectingValuesByLocalizedAppRating;
+ (id)keyPathsForValuesAffectingSelectedRegionCodePair;
+ (id)keyPathsForValuesAffectingLocalizedRegionAndCodePairs;
+ (id)keyPathsForValuesAffectingAlwaysRequirePassword;
+ (id)keyPathsForValuesAffectingInAppPurchasesAllowed;
+ (id)keyPathsForValuesAffectingDeletingAppsAllowed;
+ (id)keyPathsForValuesAffectingInstallingAppsAllowed;
+ (id)keyPathsForValuesAffectingRequirePasswordSubtitleText;
+ (id)keyPathsForValuesAffectingNewsAllowed;
+ (id)keyPathsForValuesAffectingPodcastsAllowed;
+ (id)keyPathsForValuesAffectingBooksAllowed;
+ (id)keyPathsForValuesAffectingStoreAllowed;
+ (id)keyPathsForValuesAffectingCarplayAllowed;
+ (id)keyPathsForValuesAffectingAirdropAllowed;
+ (id)keyPathsForValuesAffectingWalletAllowed;
+ (id)keyPathsForValuesAffectingSiriAllowed;
+ (id)keyPathsForValuesAffectingCameraAllowed;
+ (id)keyPathsForValuesAffectingFacetimeAllowed;
+ (id)keyPathsForValuesAffectingSafariAllowed;
+ (id)keyPathsForValuesAffectingMailAllowed;
+ (id)keyPathsForValuesAffectingDisplayingChildAccount;
+ (id)keyPathsForValuesAffectingStatusLabelText;
+ (id)keyPathsForValuesAffectingEnableRestrictionsButtonTitle;
@property(retain, nonatomic) CEMApplicationSettingsDeclaration *applicationSettingsRestrictions; // @synthesize applicationSettingsRestrictions=_applicationSettingsRestrictions;
@property(retain, nonatomic) CEMSystemTVProviderDeclaration *tvProviderRestrictions; // @synthesize tvProviderRestrictions=_tvProviderRestrictions;
@property(retain, nonatomic) CEMSystemDoNotDisturbDeclaration *doNotDisturbRestrictions; // @synthesize doNotDisturbRestrictions=_doNotDisturbRestrictions;
@property(retain, nonatomic) CEMNetworkCellularSettingsDeclaration *cellularRestrictions; // @synthesize cellularRestrictions=_cellularRestrictions;
@property(retain, nonatomic) CEMAccountSettingsDeclaration *accountRestrictions; // @synthesize accountRestrictions=_accountRestrictions;
@property(retain, nonatomic) CEMPasscodeSettingsDeclaration *passcodeRestrictions; // @synthesize passcodeRestrictions=_passcodeRestrictions;
@property(retain, nonatomic) CEMSystemGameCenterDeclaration *gameCenterRestrictions; // @synthesize gameCenterRestrictions=_gameCenterRestrictions;
@property(retain, nonatomic) CEMSystemBasicWebContentFilterDeclaration *webRestrictions; // @synthesize webRestrictions=_webRestrictions;
@property(retain, nonatomic) CEMSystemMusicDeclaration *musicRestrictions; // @synthesize musicRestrictions=_musicRestrictions;
@property(retain, nonatomic) CEMSystemRatingsDeclaration *ratingsRestrictions; // @synthesize ratingsRestrictions=_ratingsRestrictions;
@property(retain, nonatomic) CEMApplicationStoreDeclaration *storeRestrictions; // @synthesize storeRestrictions=_storeRestrictions;
@property(retain, nonatomic) CEMMediaSettingsDeclaration *mediaRestrictions; // @synthesize mediaRestrictions=_mediaRestrictions;
@property(retain, nonatomic) CEMSystemCarPlayDeclaration *carplayRestrictions; // @synthesize carplayRestrictions=_carplayRestrictions;
@property(retain, nonatomic) CEMSystemAirdropDeclaration *airdropRestrictions; // @synthesize airdropRestrictions=_airdropRestrictions;
@property(retain, nonatomic) CEMSystemSiriDeclaration *siriRestrictions; // @synthesize siriRestrictions=_siriRestrictions;
@property(retain, nonatomic) CEMSystemCameraDeclaration *cameraRestrictions; // @synthesize cameraRestrictions=_cameraRestrictions;
@property(retain, nonatomic) CEMLegacyRestrictionsAppsDeclaration *legacyAppRestrictions; // @synthesize legacyAppRestrictions=_legacyAppRestrictions;
@property(retain, nonatomic) STCoreUser *localUser; // @synthesize localUser=_localUser;
@property(retain, nonatomic) STBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) STCoreOrganization *managingOrganization; // @synthesize managingOrganization=_managingOrganization;
@property(retain, nonatomic) NSFetchedResultsController *configurationFetchedResultsController; // @synthesize configurationFetchedResultsController=_configurationFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *blueprintFetchedResultsController; // @synthesize blueprintFetchedResultsController=_blueprintFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *localUserFetchedResultsController; // @synthesize localUserFetchedResultsController=_localUserFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *userFetchedResultsController; // @synthesize userFetchedResultsController=_userFetchedResultsController;
@property(nonatomic) BOOL volumeLimitChangesAllowed; // @synthesize volumeLimitChangesAllowed=_volumeLimitChangesAllowed;
@property(nonatomic) BOOL contentAndPrivacyEnabled; // @synthesize contentAndPrivacyEnabled=_contentAndPrivacyEnabled;
@property(nonatomic) BOOL screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property(retain, nonatomic) STCoreUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)updateWithBlueprintConfigurations:(id)arg1;
- (id)fetchedResultsControllerWithFetchRequest:(id)arg1 context:(id)arg2 initialFetchCompletion:(CDUnknownBlockType)arg3;
- (void)startObservingBlueprintConfigurationForBlueprint:(id)arg1;
- (void)startObservingBlueprintForUser:(id)arg1 managingOrganization:(id)arg2;
- (void)startObservingLocalUserIfNeeded;
- (void)startObservingUser:(id)arg1;
- (void)resetAllPanes;
- (void)saveDeclaration:(id)arg1;
- (id)fetchBlueprintConfigurationForType:(id)arg1;
@property(readonly, nonatomic) NSString *localUseriTunesUsername;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) NSManagedObjectContext *context;
@property(nonatomic) BOOL backgroundAppActivityChangesAllowed;
@property(nonatomic) BOOL tvProviderChangesAllowed;
@property(nonatomic) BOOL doNotDisturbWhileDrivingChangesAllowed;
@property(nonatomic) BOOL cellularDataChangesAllowed;
@property(nonatomic) BOOL accountChangesAllowed;
@property(nonatomic) BOOL passcodeChangesAllowed;
@property(nonatomic) BOOL screenRecordingAllowed;
@property(nonatomic) BOOL addingFriendsInGameCenterAllowed;
@property(nonatomic) BOOL multiplayerGameCenterGamesAllowed;
@property(nonatomic) BOOL siriWebSearchAllowed;
@property(nonatomic) BOOL explicitSiriAllowed;
@property(copy, nonatomic) NSArray *onlyAllowedSites;
@property(copy, nonatomic) NSArray *blackListedSites;
@property(copy, nonatomic) NSArray *whiteListedSites;
@property(nonatomic) BOOL contentFilterEnabled;
@property(nonatomic) BOOL webAllowed;
@property(nonatomic) BOOL musicProfilesAndPostsAllowed;
@property(nonatomic) BOOL explicitMusicPodcastsNewsAllowed;
@property(nonatomic) BOOL bookstoreEroticaAllowed;
@property(copy, nonatomic) NSString *selectedTVRating;
@property(readonly, nonatomic) NSDictionary *valuesByLocalizedTVRating;
@property(copy, nonatomic) NSString *selectedMovieRating;
@property(readonly, nonatomic) NSDictionary *valuesByLocalizedMovieRating;
@property(copy, nonatomic) NSString *selectedAppRating;
@property(readonly, nonatomic) NSDictionary *valuesByLocalizedAppRating;
@property(copy, nonatomic) STKeyValuePair *selectedRegionCodePair;
- (id)countryCodeForLocalizedRegion:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedRegionAndCodePairs;
@property(nonatomic) BOOL alwaysRequirePassword;
@property(nonatomic) BOOL inAppPurchasesAllowed;
@property(nonatomic) BOOL deletingAppsAllowed;
@property(nonatomic) BOOL installingAppsAllowed;
@property(readonly, nonatomic) NSString *requirePasswordSubtitleText;
@property(nonatomic) BOOL newsAllowed;
@property(nonatomic) BOOL podcastsAllowed;
@property(nonatomic) BOOL booksAllowed;
@property(nonatomic) BOOL storeAllowed;
@property(nonatomic) BOOL carplayAllowed;
@property(nonatomic) BOOL airdropAllowed;
@property(nonatomic) BOOL walletAllowed;
@property(nonatomic) BOOL siriAllowed;
@property(nonatomic) BOOL cameraAllowed;
@property(nonatomic) BOOL facetimeAllowed;
@property(nonatomic) BOOL safariAllowed;
@property(nonatomic) BOOL mailAllowed;
@property(readonly, nonatomic) BOOL displayingChildAccount;
@property(readonly, nonatomic) NSString *statusLabelText;
@property(readonly, nonatomic) NSString *enableRestrictionsButtonTitle;
- (void)toggleRestrictions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
