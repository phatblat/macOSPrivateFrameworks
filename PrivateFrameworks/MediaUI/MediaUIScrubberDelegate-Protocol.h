//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MediaUIScrubber;

@protocol MediaUIScrubberDelegate <NSObject>

@optional
- (double)scrubber:(MediaUIScrubber *)arg1 willChangeValue:(double)arg2;
- (void)scrubberDidStopTracking:(MediaUIScrubber *)arg1;
- (void)scrubberWillStartTracking:(MediaUIScrubber *)arg1;
@end

