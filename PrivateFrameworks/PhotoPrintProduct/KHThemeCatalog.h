//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHCatalogBundle, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface KHThemeCatalog : NSObject
{
    NSMutableSet *_originalThemeProviders;
    NSMutableArray *_themeProviderConfigsInFlightProgressHandlers;
    NSMutableArray *_themeProviderConfigsInFlight;
    NSMutableArray *_themeProviderConfigsDownloadPriorityQueue;
    NSMutableArray *_themeProviderConfigsWhichFailedToDownload;
    NSMutableDictionary *_allThemeProviderConfigs;
    NSMutableArray *_readyThemeProviderConfigs;
    NSArray *_completedThemeProviderConfigs;
    KHCatalogBundle *_catalogBundle;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _isLoading;
    BOOL _isCancelled;
    unsigned long long _numberOfItemsToDownloadSimultanously;
    BOOL _allSourcesHaveReportedIn;
    NSString *_currentCategory;
    CDUnknownBlockType _filter;
    NSArray *_categories;
    long long _projectType;
    NSSet *_productCodes;
    NSString *_currentLanguageCode;
    id <KHThemeCatalogDelegate> _delegate;
}

+ (CDUnknownBlockType)landscapeCardFilter;
+ (CDUnknownBlockType)portraitCardFilter;
@property BOOL allSourcesHaveReportedIn; // @synthesize allSourcesHaveReportedIn=_allSourcesHaveReportedIn;
@property id <KHThemeCatalogDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentLanguageCode; // @synthesize currentLanguageCode=_currentLanguageCode;
@property(retain) NSSet *productCodes; // @synthesize productCodes=_productCodes;
@property(nonatomic) long long projectType; // @synthesize projectType=_projectType;
@property(readonly) KHCatalogBundle *catalogBundle; // @synthesize catalogBundle=_catalogBundle;
@property(readonly) unsigned long long numberOfItemsToDownloadSimultanously; // @synthesize numberOfItemsToDownloadSimultanously=_numberOfItemsToDownloadSimultanously;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *currentCategory; // @synthesize currentCategory=_currentCategory;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)_delegateThemeCatalogWasCancelled;
- (void)_delegateThemeCatalogDidFinishLoadingWithCompletedThemeConfigurations:(id)arg1;
- (void)_delegateThemeCatalogDidChangeFilterWithCompletedThemeConfigurations:(id)arg1;
- (void)_delegateThemeCatalogDidChangeCategoryWithCompletedThemeConfigurations:(id)arg1;
- (void)_delegateThemeProviderConfigFailedToLoad:(id)arg1 error:(id)arg2;
- (void)_delegateThemeProvidersAreReady:(id)arg1 newlyReadyProviderIndicies:(id)arg2 completedThemeProviders:(id)arg3;
- (void)_delegateBeginLoadingWithCompletedThemeConfigurations:(id)arg1;
- (void)_resetWithBlock:(CDUnknownBlockType)arg1;
- (void)_resetToFilter:(CDUnknownBlockType)arg1 category:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_resetInternalDataStructures;
- (void)reprioritizeDownloadQueueForIndicies:(id)arg1;
- (void)_dequeue;
- (void)_enqueue:(id)arg1;
- (id)allThemeProviderConfigs;
- (void)_checkIfDone;
- (void)_sortArray:(id)arg1;
- (void)cancel;
- (BOOL)beginLoading;
- (id)themeProviderConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForThemeProviderConfig:(id)arg1;
- (id)themeProviderConfigurationsWithThemePreviewIdentifier:(id)arg1;
- (id)themeProviderConfigurationsWithThemeIdentifier:(id)arg1;
@property(readonly, copy) NSArray *readyThemeProviderConfigs;
@property(readonly) unsigned long long numberOfThemeProviderConfigs;
- (void)_themeProviderConfigsCompletedLoading:(id)arg1 error:(id)arg2;
- (void)_themeProviderConfigsAreReady:(id)arg1;
- (unsigned long long)numberOfOperationInFlight;
- (unsigned long long)numberOfRemainingDownloadsInQueue;
- (id)initWithProjectType:(long long)arg1 productCodes:(id)arg2 themeProviders:(id)arg3 catalogBundle:(id)arg4;

@end
