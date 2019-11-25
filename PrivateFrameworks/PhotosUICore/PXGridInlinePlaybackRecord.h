//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PXMediaProvider;

@interface PXGridInlinePlaybackRecord : NSObject
{
    BOOL _isInvalid;
    float _videoScore;
    float _curationScore;
    id <PXDisplayAsset> _displayAsset;
    PXMediaProvider *_mediaProvider;
    id _geometryReference;
    long long _desiredPlayState;
    long long _visibilityScore;
    double _distanceToCenterScore;
    double _cellSizeScore;
    NSString *_diagnosticLog;
    CDStruct_e83c9415 _bestVideoTimeRange;
}

@property(copy) NSString *diagnosticLog; // @synthesize diagnosticLog=_diagnosticLog;
@property(nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) double cellSizeScore; // @synthesize cellSizeScore=_cellSizeScore;
@property(nonatomic) double distanceToCenterScore; // @synthesize distanceToCenterScore=_distanceToCenterScore;
@property(nonatomic) long long visibilityScore; // @synthesize visibilityScore=_visibilityScore;
@property(readonly, nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) float videoScore; // @synthesize videoScore=_videoScore;
@property(readonly, nonatomic) CDStruct_e83c9415 bestVideoTimeRange; // @synthesize bestVideoTimeRange=_bestVideoTimeRange;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(readonly, nonatomic) id geometryReference; // @synthesize geometryReference=_geometryReference;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> displayAsset; // @synthesize displayAsset=_displayAsset;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy) NSString *diagnosticScoresDescription;
- (void)prepareForInvisible;
- (void)prepareForVisible;
@property(readonly, nonatomic) BOOL isPlaying;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;

@end

