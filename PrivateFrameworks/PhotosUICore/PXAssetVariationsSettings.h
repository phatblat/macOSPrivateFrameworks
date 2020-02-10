//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings
{
    BOOL _addSimulatedProgressComponent;
    BOOL _simulateLoadingFailure;
    BOOL _simulateSavingFailure;
    BOOL _useNeutrinoRendering;
    BOOL _showStatusInDisclosureLabel;
    BOOL _showLoopBadges;
    BOOL _invalidateCachedPreviews;
    BOOL _useLiveRenderedPreviews;
    double _selectionDetailsDismissalDelay;
    long long _suggestionsScheme;
    long long _layoutStyle;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL useLiveRenderedPreviews; // @synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews;
@property(nonatomic) BOOL invalidateCachedPreviews; // @synthesize invalidateCachedPreviews=_invalidateCachedPreviews;
@property(nonatomic) BOOL showLoopBadges; // @synthesize showLoopBadges=_showLoopBadges;
@property(nonatomic) BOOL showStatusInDisclosureLabel; // @synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel;
@property(nonatomic) BOOL useNeutrinoRendering; // @synthesize useNeutrinoRendering=_useNeutrinoRendering;
@property(nonatomic) BOOL simulateSavingFailure; // @synthesize simulateSavingFailure=_simulateSavingFailure;
@property(nonatomic) BOOL simulateLoadingFailure; // @synthesize simulateLoadingFailure=_simulateLoadingFailure;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) BOOL addSimulatedProgressComponent; // @synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent;
@property(nonatomic) long long suggestionsScheme; // @synthesize suggestionsScheme=_suggestionsScheme;
@property(nonatomic) double selectionDetailsDismissalDelay; // @synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay;
- (void)setDefaultValues;
- (id)parentSettings;

@end
