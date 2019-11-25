//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject
{
    NSDictionary *_info;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)finalUpdate;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)declineInvitation;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (BOOL)_isCallUpgradeTo:(id)arg1;
@property(nonatomic, getter=isRelayed) BOOL relayed;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) unsigned int endedReason;
@property(nonatomic, setter=setMute:) BOOL isMute;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isCaller;
@property(readonly, nonatomic) BOOL isActive;
- (BOOL)_isProxy;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle;
@property(readonly, nonatomic) NSArray *remoteParticipants;
@property(readonly, nonatomic) NSDate *dateEnded;
@property(readonly, nonatomic) NSDate *dateConnected;
@property(readonly, nonatomic) NSNumber *dataDownloaded;
@property(readonly, nonatomic) NSNumber *dataUploaded;
@property(readonly, nonatomic) BOOL hasReceivedFirstFrame;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
@property(nonatomic) BOOL isSendingVideo;
@property(nonatomic) BOOL isSendingAudio;
@property(readonly, nonatomic) BOOL isStateFinal;
@property(readonly, nonatomic) unsigned int state;
@property(readonly, nonatomic) NSString *conferenceID;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, nonatomic) NSString *GUID;
- (id)account;
- (id)description;

@end

