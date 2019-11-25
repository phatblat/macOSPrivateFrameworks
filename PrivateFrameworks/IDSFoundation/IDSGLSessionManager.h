//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface IDSGLSessionManager : NSObject
{
    id <IDSGLSessionManagerDelegate> _delegate;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _recvBlock;
    NSString *_sessionID;
    BOOL _isServer;
    int _zudpFd;
    int _connFd;
    int _streamFd;
    NSMutableArray *_serverDataBufferArray;
}

- (void).cxx_destruct;
- (void)recvZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendZUDPData:(char *)arg1 dataLength:(long long)arg2 linkID:(BOOL)arg3;
- (void)recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_sendServerBufferedData;
- (void)setServerStreamFd:(int)arg1 isServer:(BOOL)arg2;
- (BOOL)startReliableSession:(BOOL)arg1;
- (BOOL)_startReliableClient;
- (BOOL)_startReliableServer;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sendBlock:(CDUnknownBlockType)arg2 recvBlock:(CDUnknownBlockType)arg3 sessionID:(id)arg4;

@end

