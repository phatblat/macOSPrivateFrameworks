//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAudioPlayer;

@protocol IMAudioPlayerDelegate <NSObject>
- (void)audioPlayerCurrentTimeDidChange:(IMAudioPlayer *)arg1;

@optional
- (void)audioPlayerDidPrepareAudioToPlay:(IMAudioPlayer *)arg1 successfully:(BOOL)arg2;
@end
