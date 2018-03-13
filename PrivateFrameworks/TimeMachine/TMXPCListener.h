//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface TMXPCListener : NSObject
{
    NSString *_serviceName;
    BOOL _isLegacyConnection;
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _errorHandler;
    NSString *_messageLoggingKey;
}

@property(copy) NSString *messageLoggingKey; // @synthesize messageLoggingKey=_messageLoggingKey;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly) BOOL isLegacyConnection; // @synthesize isLegacyConnection=_isLegacyConnection;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)sendReply:(id)arg1 forMessage:(id)arg2;
- (void)stopListening;
- (void)startListening;
- (void)_handleXPCMessage:(id)arg1;
- (void)_handleConnectionError:(id)arg1;
- (void)_handleConnection:(id)arg1;
- (id)_newConnectionListenerWithName:(id)arg1 legacyConnection:(BOOL)arg2;
- (void)dealloc;
- (id)_initForServiceNamed:(id)arg1 legacyConnection:(BOOL)arg2;
- (id)initForLegacyServiceNamed:(id)arg1;
- (id)initForServiceNamed:(id)arg1;

@end

