//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMTrack, NSDictionary, NSObject<FlexSongProtocol>;

@interface FMSongRendition : NSObject
{
    FMTrack *_trackA;
    FMTrack *_trackB;
    NSDictionary *_options;
    long long _duration;
    long long _durationOfSilence;
    long long _durationOfMusic;
    NSObject<FlexSongProtocol> *_song;
}

+ (id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2;
@property(retain, nonatomic) NSObject<FlexSongProtocol> *song; // @synthesize song=_song;
@property(nonatomic) long long durationOfMusic; // @synthesize durationOfMusic=_durationOfMusic;
@property(nonatomic) long long durationOfSilence; // @synthesize durationOfSilence=_durationOfSilence;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) FMTrack *trackB; // @synthesize trackB=_trackB;
@property(retain, nonatomic) FMTrack *trackA; // @synthesize trackA=_trackA;
- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (double)_maxPeakAndLoudness:(double *)arg1 missingPeakValueCount:(int *)arg2 missingLoudnessCount:(int *)arg3;
- (id)timedMetadataItemsWithIdentifier:(id)arg1;
- (id)avCompositionWithAudioMix:(id *)arg1 includeShortenedOutroFadeOut:(BOOL)arg2;
- (id)description;
- (id)initWithSong:(id)arg1 andOptions:(id)arg2;

@end

