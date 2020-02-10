//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXChangeObserver.h"
#import "PXReusableObject.h"
#import "PXSectionedDataSourceManagerObserver.h"

@class NSArray, NSString, PXCMMPosterBannerView, PXCMMViewModel, PXMomentShareStatusPresentation;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject>
{
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id <PXAssetImportStatusManager> _importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMBannerTileControllerDelegate> _delegate;
    PXCMMPosterBannerView *_bannerView;
}

+ (id)new;
@property(retain, nonatomic) PXCMMPosterBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <PXCMMBannerTileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLocalizedNamesByViewModel;
- (void)_updatePeopleSuggestionNames;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateContainsUnverifierPersons;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateBannerActionButton;
- (void)_updateCounts;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
