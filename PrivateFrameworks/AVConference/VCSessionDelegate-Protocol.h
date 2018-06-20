//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, VCSession;

@protocol VCSessionDelegate <NSObject>
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeProminence:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
@end
