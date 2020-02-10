//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MiroAutoEditLogger, MiroBlueprint, MiroMemory, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEdit_TrimController : NSObject
{
    BOOL _useNonSpecialDurations;
    BOOL _allowMoreThanMaxVideo;
    int _duration;
    int _lastClipInPoint;
    int _lastClipOutPoint;
    id <MiroAutoEditDelegate> _delegate;
}

+ (id)rangeModelsBySplittingRangeModels:(id)arg1 outsideRange:(id)arg2;
@property(nonatomic) BOOL allowMoreThanMaxVideo; // @synthesize allowMoreThanMaxVideo=_allowMoreThanMaxVideo;
@property(nonatomic) BOOL useNonSpecialDurations; // @synthesize useNonSpecialDurations=_useNonSpecialDurations;
@property(nonatomic) int lastClipOutPoint; // @synthesize lastClipOutPoint=_lastClipOutPoint;
@property(nonatomic) int lastClipInPoint; // @synthesize lastClipInPoint=_lastClipInPoint;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <MiroAutoEditDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calcLastClipInPointAndOutPoint;
- (void)setupSongDuration;
- (void)_saveFreezeBits;
- (int)shrinkAndStretchClips:(id)arg1;
- (void)_fitToDuration;
- (id)_rangesForClipIncorporatingUserTrim:(id)arg1;
- (int)durationOfUserTrimForClip:(id)arg1;
- (void)_clipClip:(id)arg1;
- (int)maximumBlueprintDurationForClip:(id)arg1;
- (int)minimumBlueprintDurationForClip:(id)arg1;
- (void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2;
- (void)layoutProject;
- (BOOL)clipIsTitleCard:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic) MiroAutoEditLogger *logger;
@property(readonly, nonatomic) MiroBlueprint *blueprint;
@property(readonly, nonatomic) MiroMemory *memory;
@property(readonly, nonatomic) Project *project;

@end
