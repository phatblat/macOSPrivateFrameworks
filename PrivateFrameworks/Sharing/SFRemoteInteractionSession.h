//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SFXPCInterface.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, SDRemoteInteractionAgent, SFDevice, SFSession;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
    CDUnknownBlockType _remoteTextEventHandler;
    CDUnknownBlockType _textSessionDidBegin;
    CDUnknownBlockType _textSessionDidEnd;
    CDUnknownBlockType _textSessionDidChange;
    SDRemoteInteractionAgent *_agent;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SDRemoteInteractionAgent *agent; // @synthesize agent=_agent;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidChange; // @synthesize textSessionDidChange=_textSessionDidChange;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidEnd; // @synthesize textSessionDidEnd=_textSessionDidEnd;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidBegin; // @synthesize textSessionDidBegin=_textSessionDidBegin;
@property(copy, nonatomic) CDUnknownBlockType remoteTextEventHandler; // @synthesize remoteTextEventHandler=_remoteTextEventHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
- (void)remoteInteractionSessionRemoteTextEvent:(id)arg1;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_sessionHandleEvent:(id)arg1;
- (void)_sessionSendPayload:(struct NSDictionary *)arg1;
- (void)_sessionStart;
- (void)sendPayload:(struct NSDictionary *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

