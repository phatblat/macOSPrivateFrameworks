//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MiroBlueprintEditStyleProtocol.h"
#import "MiroBlueprintMusicInfoProtocol.h"
#import "MiroBlueprintProtocol.h"
#import "MiroBlueprintTitleStyleProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MiroBlueprint : NSObject <MiroBlueprintTitleStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintEditStyleProtocol, NSCopying, NSSecureCoding, MiroBlueprintProtocol>
{
    BOOL _songIsLocked;
    BOOL _titleIsLocked;
    unsigned int _randomizerSeed;
    NSString *_flexMusicID;
    NSString *_titleID;
    NSString *_editStyleID;
    NSArray *_moodIDs;
    NSMutableDictionary *_moodDictionary;
    unsigned long long _iTunesMediaID;
    unsigned long long _iCloudMusicMediaID;
    unsigned long long _iCloudMusicAccountID;
    NSString *_projectFilterID;
    NSString *_songID;
    NSArray *_requestedKeywords;
    NSDictionary *_requestedMusicGenreDistribution;
}

+ (id)blueprintFromSerializedDictionaryRepresentation:(id)arg1;
+ (id)blueprintWithMood:(id)arg1;
+ (id)blueprint;
+ (id)nominalBlueprint;
+ (id)emptyBlueprint;
+ (BOOL)supportsSecureCoding;
+ (id)keysAffectingAutoEdit;
@property(copy, nonatomic) NSDictionary *requestedMusicGenreDistribution; // @synthesize requestedMusicGenreDistribution=_requestedMusicGenreDistribution;
@property(copy, nonatomic) NSArray *requestedKeywords; // @synthesize requestedKeywords=_requestedKeywords;
@property(retain, nonatomic) NSString *songID; // @synthesize songID=_songID;
@property(copy, nonatomic) NSString *projectFilterID; // @synthesize projectFilterID=_projectFilterID;
@property(nonatomic) unsigned int randomizerSeed; // @synthesize randomizerSeed=_randomizerSeed;
@property(nonatomic) unsigned long long iCloudMusicAccountID; // @synthesize iCloudMusicAccountID=_iCloudMusicAccountID;
@property(nonatomic) unsigned long long iCloudMusicMediaID; // @synthesize iCloudMusicMediaID=_iCloudMusicMediaID;
@property(nonatomic) unsigned long long iTunesMediaID; // @synthesize iTunesMediaID=_iTunesMediaID;
@property(nonatomic) BOOL titleIsLocked; // @synthesize titleIsLocked=_titleIsLocked;
@property(nonatomic) BOOL songIsLocked; // @synthesize songIsLocked=_songIsLocked;
@property(retain, nonatomic) NSMutableDictionary *moodDictionary; // @synthesize moodDictionary=_moodDictionary;
@property(retain, nonatomic) NSArray *moodIDs; // @synthesize moodIDs=_moodIDs;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_moodPaceKey;
- (id)_pacingKey;
@property(readonly, nonatomic) id <MiroBlueprintEditStyleProtocol> editStyle; // @dynamic editStyle;
@property(readonly, nonatomic) id <MiroBlueprintTitleStyleProtocol> titleStyle; // @dynamic titleStyle;
@property(readonly, nonatomic) id <MiroBlueprintMusicInfoProtocol> musicInfo; // @dynamic musicInfo;
- (BOOL)durationIsNearVideoIdeal:(double)arg1;
@property(readonly, nonatomic) double halfBarDuration;
@property(readonly, nonatomic) double titleIdealDuration;
@property(readonly, nonatomic) double titleMinDuration;
@property(readonly, nonatomic) double timelapseIdealDuration;
@property(readonly, nonatomic) double timelapseMinDuration;
@property(readonly, nonatomic) double sloMoIdealDuration;
@property(readonly, nonatomic) double sloMoMinDuration;
@property(readonly, nonatomic) double burstIdealDuration;
@property(readonly, nonatomic) double burstMinDuration;
@property(readonly, nonatomic) double irisMaxDuration;
@property(readonly, nonatomic) double irisIdealDuration;
@property(readonly, nonatomic) double irisMinDuration;
- (double)panoMaxDurationWithMultiplier:(double)arg1;
- (double)panoIdealDurationWithMultiplier:(double)arg1;
- (double)panoMinDurationWithMultiplier:(double)arg1;
- (double)_photoMaxDuration;
- (double)_photoIdealDuration;
- (double)_photoMinDuration;
@property(readonly, nonatomic) double photoMaxDuration;
@property(readonly, nonatomic) double photoIdealDuration;
@property(readonly, nonatomic) double photoMinDuration;
- (double)_videoMaxDuration;
- (double)_videoIdealDuration;
- (double)_videoMinDuration;
- (double)moodPacingMultiplier;
@property(readonly, nonatomic) double videoMaxDuration;
@property(readonly, nonatomic) double videoIdealDuration;
@property(readonly, nonatomic) double videoMinDuration;
- (double)maximumDurationForAsset:(id)arg1;
- (double)idealDurationForAsset:(id)arg1;
- (double)minimumDurationForAsset:(id)arg1;
- (struct DurationTriplet)durationsForAsset:(id)arg1;
@property(readonly, nonatomic) unsigned long long toneTreatment;
@property(readonly, nonatomic) BOOL isMoodDictionaryPopulated;
@property(readonly, nonatomic) NSString *flexMusicID; // @synthesize flexMusicID=_flexMusicID;
@property(readonly, nonatomic) id debugSingleTransitionID;
@property(readonly, nonatomic) NSDictionary *titleStyleDictionary;
@property(readonly, nonatomic) NSString *editStyleID; // @synthesize editStyleID=_editStyleID;
@property(readonly, nonatomic) NSString *titleID; // @synthesize titleID=_titleID;
@property(readonly, nonatomic) NSString *moodID;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForSerialization;
- (id)blueprintWithMood:(id)arg1;
- (BOOL)blueprintDiffersFromBlueprint:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL titleRequestsColorAnalysis;
@property(readonly, nonatomic) NSString *titleAndAnimationStyleDescription;
@property(readonly, nonatomic) NSDictionary *parametersDictionary;
@property(readonly, nonatomic) NSString *fontName;
- (id)titleStyleToFontMap;
@property(readonly, nonatomic) NSString *effectID;
@property(readonly, nonatomic) unsigned long long songPace;
@property(readonly, nonatomic) NSArray *allowedCropTreatments;
@property(readonly, nonatomic) double kenBurnsAnyStillPercentage;
@property(readonly, nonatomic) double hardCutPercentage;
@property(readonly, nonatomic) NSString *sequentialNUpEffect;
@property(readonly, nonatomic) BOOL healingTransitionsAllowed;
@property(readonly, nonatomic) BOOL centerOnFrame;
@property(readonly, nonatomic) BOOL sweepingPansAllowed;
@property(readonly, nonatomic) BOOL defaultCameraMotionIsPan;
@property(readonly, nonatomic) BOOL extremeZoomAllowed;
@property(readonly, nonatomic) double maxZoomLevel;
@property(readonly, nonatomic) NSArray *expandedMultiUpTransitionDictionaries;
@property(readonly, nonatomic) NSArray *multiUpTransitionDictionaries;
@property(readonly, nonatomic) NSDictionary *healingEditTransitionDictionary;
@property(readonly, nonatomic) NSArray *multiUpTransitionsAsDictionaries;
@property(readonly, nonatomic) NSArray *transitionsAsDictionaries;
@property(readonly, nonatomic) NSArray *burstStyleNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

