//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVConferenceXPCClient, NSObject<OS_dispatch_queue>;

@interface AVCEffects : NSObject
{
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    int _mode;
}

@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)encodeProcessedVideoFrame:(id)arg1;
- (void)avcVideoFrameDidRelease:(id)arg1;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

