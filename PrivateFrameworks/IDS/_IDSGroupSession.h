//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSBaseSocketPairConnectionDelegate.h"
#import "IDSDaemonListenerProtocol.h"

@class CUTWeakReference, IDSBaseSocketPairConnection, NSArray, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    NSString *_fromID;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    unsigned long long _connectionCountHint;
    BOOL _needsToWaitForPreConnectionData;
    BOOL _disallowCellularInterface;
    BOOL _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    BOOL _preferCellularForCallSetup;
    NSString *_clientUUID;
    BOOL _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
    BOOL _useConfServer;
    NSString *_stableGroupID;
    NSString *_groupID;
    NSDictionary *_participantInfo;
    struct cfs_client_s *_cfs_client;
    int _cfs_requestID;
    BOOL _cfsJoinReply;
    BOOL _didJoinCallback;
    BOOL _cfsLeaveReply;
    BOOL _didLeaveCallback;
    NSArray *_existingParticipants;
    NSError *_joinLeaveError;
    NSNumber *_qrReason;
    NSNumber *_previousError;
}

@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(BOOL)arg3;
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)groupSessionDidTerminate:(id)arg1;
- (void)requestActiveParticipants;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (void)setPreferences:(id)arg1;
- (void)leaveGroupSession;
- (void)joinWithOptions:(id)arg1;
- (void)joinGroupSession;
- (void)setParticipantInfo:(id)arg1;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3;
- (void)_cleanupSocketPairConnections;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

