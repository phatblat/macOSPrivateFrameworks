//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MutableMediaStateTracker;

@protocol MutableMediaStateTrackerDelegate <NSObject>

@optional
- (void)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 focusMutableMediaSource:(id <MutableMediaSource>)arg2;
- (void)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 toggleMediaCaptureInSource:(id <MutableMediaSource>)arg2;
- (BOOL)canUpdateOverallAudioStateForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (void)updateCaptureIconsForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
@end
