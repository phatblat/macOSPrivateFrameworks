//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FlexMLSegment : NSObject
{
    NSArray *_gainFunction;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _trackTime;
    CDStruct_1b6d18a9 _summaryTime;
}

@property(readonly, nonatomic) NSArray *gainFunction; // @synthesize gainFunction=_gainFunction;
@property(readonly, nonatomic) CDStruct_1b6d18a9 summaryTime; // @synthesize summaryTime=_summaryTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 trackTime; // @synthesize trackTime=_trackTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1 trackTime:(CDStruct_1b6d18a9)arg2 summaryTime:(CDStruct_1b6d18a9)arg3 gainFunction:(id)arg4;

@end
