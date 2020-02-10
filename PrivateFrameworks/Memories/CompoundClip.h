//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/KenBurnsClip.h>

#import "CompoundClipInformation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CompoundClip : KenBurnsClip <CompoundClipInformation>
{
    double _minimumPhotoDuration;
    double _idealPhotoDuration;
    double _maximumPhotoDuration;
    KenBurnsClip *_kenBurnsClip;
}

@property(retain, nonatomic) KenBurnsClip *kenBurnsClip; // @synthesize kenBurnsClip=_kenBurnsClip;
@property(nonatomic) double maximumPhotoDuration; // @synthesize maximumPhotoDuration=_maximumPhotoDuration;
@property(nonatomic) double idealPhotoDuration; // @synthesize idealPhotoDuration=_idealPhotoDuration;
@property(nonatomic) double minimumPhotoDuration; // @synthesize minimumPhotoDuration=_minimumPhotoDuration;
- (void).cxx_destruct;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 transitionEffectProperties:(id)arg3 betweenClips:(id)arg4;
- (id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 betweenClips:(id)arg3;
- (void)turnOffKenBurnsForClips:(id)arg1;
- (id)containedClips;
- (BOOL)expandsEditList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)takePropertiesFromKenBurnsClip:(id)arg1;
- (id)initWithKenBurnsClip:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
