//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PMEditProviderDelegate.h"
#import "PMMovieProviderDelegate.h"

@class AVPlayer, AVPlayerView, NSString, NSView, PHAssetCollection, PMAVSynchronizedView, PMDurationProvider, PMMoodProvider, PMMovieProvider, PMPosterViewController, PMSaveProvider, PMTitleSubtitleView, PMmacOSProgressIndicatorView, VEKProduction;

@interface PMmacOSPlayerViewController : NSViewController <PMMovieProviderDelegate, PMEditProviderDelegate>
{
    BOOL _isFirstTime;
    BOOL _downloadInProgress;
    PHAssetCollection *_assetCollection;
    VEKProduction *_production;
    AVPlayerView *_playerView;
    NSView *_playerContainerView;
    PMmacOSProgressIndicatorView *_progressIndicatorView;
    PMTitleSubtitleView *_titleView;
    PMTitleSubtitleView *_posterTitleView;
    PMAVSynchronizedView *_synchronizedView;
    PMPosterViewController *_posterViewController;
    PMMovieProvider *_movieProvider;
    PMSaveProvider *_saveProvider;
    PMDurationProvider *_durationProvider;
    PMMoodProvider *_moodProvider;
    AVPlayer *_playerForObserving;
    id _playerTimeObserver;
    long long _initialNumberOfAssetsInMovie;
}

@property(nonatomic) long long initialNumberOfAssetsInMovie; // @synthesize initialNumberOfAssetsInMovie=_initialNumberOfAssetsInMovie;
@property(nonatomic) BOOL downloadInProgress; // @synthesize downloadInProgress=_downloadInProgress;
@property(nonatomic) BOOL isFirstTime; // @synthesize isFirstTime=_isFirstTime;
@property(retain, nonatomic) id playerTimeObserver; // @synthesize playerTimeObserver=_playerTimeObserver;
@property(retain, nonatomic) AVPlayer *playerForObserving; // @synthesize playerForObserving=_playerForObserving;
@property(retain, nonatomic) PMMoodProvider *moodProvider; // @synthesize moodProvider=_moodProvider;
@property(retain, nonatomic) PMDurationProvider *durationProvider; // @synthesize durationProvider=_durationProvider;
@property(retain, nonatomic) PMSaveProvider *saveProvider; // @synthesize saveProvider=_saveProvider;
@property(retain, nonatomic) PMMovieProvider *movieProvider; // @synthesize movieProvider=_movieProvider;
@property(retain, nonatomic) PMPosterViewController *posterViewController; // @synthesize posterViewController=_posterViewController;
@property(retain, nonatomic) PMAVSynchronizedView *synchronizedView; // @synthesize synchronizedView=_synchronizedView;
@property(retain, nonatomic) PMTitleSubtitleView *posterTitleView; // @synthesize posterTitleView=_posterTitleView;
@property(retain, nonatomic) PMTitleSubtitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) PMmacOSProgressIndicatorView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) NSView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) AVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) VEKProduction *production; // @synthesize production=_production;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)signalScheduling:(CDStruct_1b6d18a9)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserversWithPlayer:(id)arg1;
- (void)removeObservers;
- (void)editProvider:(id)arg1 didChange:(BOOL)arg2;
- (void)resultWasUpdated:(id)arg1;
- (void)progressDidChange:(double)arg1 description:(id)arg2;
- (void)didRefreshPlayerItem:(id)arg1 downloadError:(id)arg2;
- (void)updateSelectedMenuItemStatus;
- (void)setupMenu;
- (void)durationChanged:(id)arg1;
- (void)moodChanged:(id)arg1;
- (void)viewDidLayout;
- (void)setupTitleView;
- (void)setupPosterView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)constrainView:(id)arg1 toSuperviewWithBleed:(double)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithAssetCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

