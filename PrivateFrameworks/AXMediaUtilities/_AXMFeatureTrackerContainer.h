//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXMFeatureTracker, AXMTimer;

@interface _AXMFeatureTrackerContainer : NSObject
{
    AXMFeatureTracker *_tracker;
    AXMTimer *_activeTimer;
}

@property(retain, nonatomic) AXMTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
@property(retain, nonatomic) AXMFeatureTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (id)initWithFeature:(id)arg1 queue:(id)arg2;

@end
