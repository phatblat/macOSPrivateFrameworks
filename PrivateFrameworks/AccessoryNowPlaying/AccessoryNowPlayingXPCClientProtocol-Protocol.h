//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol AccessoryNowPlayingXPCClientProtocol <NSObject>
- (void)setPlaybackQueueIndex:(NSNumber *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)setPlaybackElapsedTime:(NSNumber *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)cancelRequestPlaybackQueueListInfo:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)requestPlaybackQueueListInfo:(NSString *)arg1 requestID:(NSString *)arg2 startIndex:(unsigned int)arg3 upToCount:(unsigned int)arg4 infoMask:(unsigned int)arg5;
- (void)triggerPlaybackAttributesUpdateWithReply:(void (^)(BOOL))arg1;
- (void)triggerMediaItemArtworkUpdateWithReply:(void (^)(BOOL))arg1;
- (void)triggerMediaItemAttributesUpdateWithReply:(void (^)(BOOL))arg1;
- (void)updateSubscriberList:(NSArray *)arg1 WithReply:(void (^)(BOOL))arg2;
@end

