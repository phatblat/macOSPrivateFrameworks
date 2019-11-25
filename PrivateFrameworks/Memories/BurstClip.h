//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/CompoundClip.h>

#import "CompoundClipInformation.h"
#import "KonaClipMiroAutoEditAdditions.h"
#import "NSCopying.h"

@class BurstClipStyle, NSArray, NSColor, NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface BurstClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation>
{
    unsigned long long _allowedBurstStyles;
    unsigned long long _burstStyle;
    NSColor *_threeUpStyleGapColor;
    NSColor *_threeUpStylePopBackgroundColor;
    double _minimumVideoDuration;
    double _idealVideoDuration;
    NSArray *_containedClips;
    NSArray *_allSourceClips;
    BurstClipStyle *_burstClipStyle;
}

@property(retain, nonatomic) BurstClipStyle *burstClipStyle; // @synthesize burstClipStyle=_burstClipStyle;
@property(retain, nonatomic) NSArray *allSourceClips; // @synthesize allSourceClips=_allSourceClips;
@property(retain, nonatomic) NSArray *containedClips; // @synthesize containedClips=_containedClips;
@property(nonatomic) double idealVideoDuration; // @synthesize idealVideoDuration=_idealVideoDuration;
@property(nonatomic) double minimumVideoDuration; // @synthesize minimumVideoDuration=_minimumVideoDuration;
@property(retain, nonatomic) NSColor *threeUpStylePopBackgroundColor; // @synthesize threeUpStylePopBackgroundColor=_threeUpStylePopBackgroundColor;
@property(retain, nonatomic) NSColor *threeUpStyleGapColor; // @synthesize threeUpStyleGapColor=_threeUpStyleGapColor;
@property(nonatomic) unsigned long long burstStyle; // @synthesize burstStyle=_burstStyle;
@property(nonatomic) unsigned long long allowedBurstStyles; // @synthesize allowedBurstStyles=_allowedBurstStyles;
- (void).cxx_destruct;
- (id)pickedKBClips;
- (id)representingClip;
- (id)indicesWithBurstSelectionType:(unsigned long long)arg1;
- (id)userPickedIndices;
- (id)autoPickedIndices;
- (id)pickedIndices;
- (id)lastInterestingClip;
- (unsigned long long)lastInterestingIndex;
- (id)bestClipsForClipCount:(unsigned long long)arg1;
- (double)aspectRatio;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (id)plistRepresentationFromProject:(id)arg1;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) PHAsset *keyAsset;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAltAspect:(double)arg1;
- (void)setDuration:(int)arg1;
- (void)setIdealPhotoDuration:(double)arg1;
- (void)setMinimumPhotoDuration:(double)arg1;
@property(readonly, nonatomic) double maximumDuration;
@property(readonly, nonatomic) double idealDuration;
@property(readonly, nonatomic) double minimumDuration;
- (unsigned long long)supportedBurstStyles;
- (id)supportedBurstStylesArray;
- (id)descriptionOfBurstStyle;
@property(readonly, copy) NSString *description;
- (void)fetchIfNeeded;
- (BOOL)isBurst;
- (id)initWithKenBurnsClip:(id)arg1 sourceClips:(id)arg2;
- (id)init;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (BOOL)isPhoto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

