//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject
{
    long long _allocateType;
    double _allocateTime;
    NSString *_allocateRequestID;
    NSString *_idsSessionID;
    NSString *_relaySessionID;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    NSData *_softwareData;
    unsigned char _protocolVersion;
    long long _relayServerProviderType;
    long long _participantID;
    NSArray *_allParticipantIDs;
    BOOL _isInitiator;
    long long _linkProtocol;
    struct sockaddr_storage _serverAddress;
    NSString *_groupID;
    NSString *_stableGroupID;
    NSUUID *_defaultDeviceLocalCBUUID;
    NSUUID *_defaultDeviceRemoteCBUUID;
    NSArray *_publishedStreams;
    NSArray *_subscribedStreams;
    unsigned int _generationCounter;
    unsigned char _maxConcurrentStreams;
}

@property(readonly) unsigned char maxConcurrentStreams; // @synthesize maxConcurrentStreams=_maxConcurrentStreams;
@property(readonly) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
@property(readonly) NSArray *subscribedStreams; // @synthesize subscribedStreams=_subscribedStreams;
@property(readonly) NSArray *publishedStreams; // @synthesize publishedStreams=_publishedStreams;
@property(readonly) NSString *stableGroupID; // @synthesize stableGroupID=_stableGroupID;
@property(readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly) NSUUID *defaultDeviceRemoteCBUUID; // @synthesize defaultDeviceRemoteCBUUID=_defaultDeviceRemoteCBUUID;
@property(readonly) NSUUID *defaultDeviceLocalCBUUID; // @synthesize defaultDeviceLocalCBUUID=_defaultDeviceLocalCBUUID;
@property(readonly) long long linkProtocol; // @synthesize linkProtocol=_linkProtocol;
@property(readonly) BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly) NSArray *allParticipantIDs; // @synthesize allParticipantIDs=_allParticipantIDs;
@property(readonly) long long participantID; // @synthesize participantID=_participantID;
@property(readonly) long long relayServerProviderType; // @synthesize relayServerProviderType=_relayServerProviderType;
@property(readonly) unsigned char protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly) NSData *softwareData; // @synthesize softwareData=_softwareData;
@property(readonly) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(readonly) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(readonly) NSString *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly) NSString *idsSessionID; // @synthesize idsSessionID=_idsSessionID;
@property(readonly) NSString *allocateRequestID; // @synthesize allocateRequestID=_allocateRequestID;
@property(readonly) double allocateTime; // @synthesize allocateTime=_allocateTime;
@property(readonly) long long allocateType; // @synthesize allocateType=_allocateType;
- (void).cxx_destruct;
- (long long)parseSessionInfo:(id)arg1;
@property(readonly) const struct sockaddr *serverAddress;

@end

