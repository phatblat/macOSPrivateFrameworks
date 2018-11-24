//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCSessionParticipantControlProtocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, VCXPCClientShared;

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol>
{
    unsigned long long _idsParticipantID;
    NSString *_participantID;
    NSData *_participantData;
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    VCXPCClientShared *_connection;
    NSData *_frequencyLevels;
    long long _videoToken;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    NSMutableDictionary *_participantConfig;
    BOOL _audioMuted;
    BOOL _audioEnabled;
    BOOL _audioPaused;
    BOOL _videoEnabled;
    BOOL _videoPaused;
    float _volume;
    float _audioPosition;
    BOOL _configurationInProgress;
    BOOL _hasPendingChanges;
}

@property(nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) BOOL configurationInProgress; // @synthesize configurationInProgress=_configurationInProgress;
@property(nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isVideoPaused) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioPaused) BOOL audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isAudioMuted) BOOL audioMuted; // @synthesize audioMuted=_audioMuted;
@property(readonly, nonatomic) NSData *frequencyLevels; // @synthesize frequencyLevels=_frequencyLevels;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // @synthesize delegateNotificationQueue=_delegateNotificationQueue;
@property(nonatomic) long long videoToken; // @synthesize videoToken=_videoToken;
@property(readonly, nonatomic) NSData *negotiationData; // @synthesize negotiationData=_participantData;
@property(readonly, nonatomic) unsigned long long participantID; // @synthesize participantID=_idsParticipantID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_participantID;
@property(nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
- (void)setupConfig;
- (void)setupNotificationQueue:(id)arg1;
- (void)deregisterFromNotifications;
- (void)registerBlocksForNotifications;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (id)initWithParticipantID:(unsigned long long)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
@property(readonly, nonatomic) NSDictionary *config;
@property(retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property(nonatomic) id <AVCSessionParticipantDelegate> delegate;
- (void)setStateVideoEnabled:(BOOL)arg1;
- (void)setStateAudioEnabled:(BOOL)arg1;
- (void)setStateVideoPaused:(BOOL)arg1;
- (void)setStateAudioPaused:(BOOL)arg1;
- (BOOL)isConnectedToSession;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

