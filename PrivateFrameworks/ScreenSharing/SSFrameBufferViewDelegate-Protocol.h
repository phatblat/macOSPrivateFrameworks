//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, SSFrameBufferView;

@protocol SSFrameBufferViewDelegate <NSObject>
@property(readonly) unsigned int currentViewRotation;
@property(readonly) BOOL useAVConference;
- (void)ssFrameBufferView:(SSFrameBufferView *)arg1 didDropRemotePaths:(NSArray *)arg2 atLocalDropDestination:(NSURL *)arg3;
@end
