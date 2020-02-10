//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CompositionDuckingTimes : NSObject
{
    NSMutableArray *m_duckingEvents;
    int m_projectDurationInFrames;
}

+ (id)compositionDuckingTimesWithProject:(id)arg1;
@property int projectDurationInFrames; // @synthesize projectDurationInFrames=m_projectDurationInFrames;
@property(retain, nonatomic) NSMutableArray *duckingEvents; // @synthesize duckingEvents=m_duckingEvents;
- (void)dealloc;
- (id)initWithProject:(id)arg1;
- (void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1;
- (void)makeDuckingDataForEditListWithProject:(id)arg1;
- (BOOL)clipIsAudible:(id)arg1;
- (int)nextDuckChangeTimeFromTime:(int)arg1;
- (BOOL)shouldDuckAtTime:(int)arg1;
- (void)addDuckingFromTime:(int)arg1 toTime:(int)arg2;
- (void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(BOOL)arg2;

@end
