//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSDictionaryCoding.h"

@class NSArray, NSDictionary, NSString;

@interface FlexSegment : NSObject <NSCopying, NSDictionaryCoding>
{
    BOOL _sliceable;
    NSString *_name;
    long long _priority;
    long long _bars;
    long long _beatsPerBar;
    long long _samplesPerBar;
    NSArray *_customBarMarkers;
    long long _sampleRate;
    long long _sampleCount;
    NSDictionary *_transitions;
    NSDictionary *_markers;
    unsigned long long _type;
    unsigned long long _errors;
    NSDictionary *_metadataValues;
    NSString *_namePrefix;
    NSString *_nameStem;
    NSString *_nameIndex;
    NSString *_nameSuffix;
}

+ (long long)crossfadeLengthInSamplesForFromSeg:(id)arg1 toSeg:(id)arg2 fadeOutTimeInMsec:(long long)arg3 fadeInTimeInMsec:(long long)arg4 validFadeOutSamples:(long long *)arg5 validFadeInSamples:(long long *)arg6;
+ (long long)samplesForTimeInMsec:(long long)arg1 atSampleRate:(long long)arg2;
+ (id)segmentWithName:(id)arg1 inSegments:(id)arg2;
+ (id)segmentsWithType:(unsigned long long)arg1 nameIndex:(id)arg2 nameSuffix:(id)arg3 inSegments:(id)arg4;
+ (id)segmentsWithType:(unsigned long long)arg1 inSegments:(id)arg2;
+ (BOOL)canTransitionFromSegment:(id)arg1 toSegment:(id)arg2 fromBarIndex:(long long)arg3 checkIfPrevented:(BOOL)arg4;
+ (id)longLabelForSegmentType:(unsigned long long)arg1;
+ (id)shortLabelForSegmentType:(unsigned long long)arg1;
+ (id)readInfoFromAudioFileAtPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly, copy, nonatomic) NSString *nameIndex; // @synthesize nameIndex=_nameIndex;
@property(readonly, copy, nonatomic) NSString *nameStem; // @synthesize nameStem=_nameStem;
@property(readonly, copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(readonly, nonatomic) NSDictionary *metadataValues; // @synthesize metadataValues=_metadataValues;
@property(nonatomic) unsigned long long errors; // @synthesize errors=_errors;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *markers; // @synthesize markers=_markers;
@property(retain, nonatomic) NSDictionary *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) BOOL sliceable; // @synthesize sliceable=_sliceable;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSArray *customBarMarkers; // @synthesize customBarMarkers=_customBarMarkers;
@property(nonatomic) long long samplesPerBar; // @synthesize samplesPerBar=_samplesPerBar;
@property(nonatomic) long long beatsPerBar; // @synthesize beatsPerBar=_beatsPerBar;
@property(nonatomic) long long bars; // @synthesize bars=_bars;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)metadataValueForKey:(id)arg1;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (BOOL)relinkAllTransitions;
- (BOOL)isPriorityValid;
- (void)removeTransitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (void)addOrReplaceTransition:(id)arg1 toSegmentNamed:(id)arg2 fromBarIndex:(long long)arg3;
- (id)transitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (void)setLinkedPerBarTransitions:(BOOL)arg1 toSegmentNamed:(id)arg2;
- (BOOL)linkedPerBarTransitionsToSegmentNamed:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)barDurationForBarIndex:(long long)arg1;
- (long long)barEndPositionForBarIndex:(long long)arg1;
- (long long)barStartPositionForBarIndex:(long long)arg1;
- (void)_decodeTypeInfoFromSegmentName;
- (id)description;
- (id)encodeAsDictionary;
- (id)initWithFileAtPath:(id)arg1;
- (id)initAsCrossFade:(id)arg1 sampleRate:(long long)arg2 sampleCount:(long long)arg3 beatsPerBar:(long long)arg4;
- (id)initWithDictionary:(id)arg1;

@end
