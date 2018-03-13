//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TURemoteVideoClient.h"

@class CALayer, NSString;

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient>
{
    long long _videoContextSlotIdentifier;
    CALayer *_videoLayer;
}

@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
- (void).cxx_destruct;
- (void)cleanUpSubLayerForLayer:(id)arg1;
- (id)nameForSubLayer;
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

