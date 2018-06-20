//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNGuidanceEventManager, NSArray;

__attribute__((visibility("hidden")))
@interface MNAnnouncementPlan : NSObject
{
    NSArray *_plannedEvents;
    MNGuidanceEventManager *_manager;
    NSArray *_events;
    double _distance;
    double _speed;
}

+ (double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) __weak MNGuidanceEventManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSArray *plannedEvents; // @synthesize plannedEvents=_plannedEvents;
- (void).cxx_destruct;
- (void)sortEvents;
- (id)nextConflict;
- (id)description;
- (id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;

@end

