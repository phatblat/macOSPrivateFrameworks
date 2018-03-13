//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CATEndPoint, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CATSocket : NSObject
{
    BOOL mIsInvalid;
    int mState;
    int _nativeSocket;
    id <CATSocketDelegate> _delegate;
    CATEndPoint *_localEndPoint;
    CATEndPoint *_remoteEndPoint;
    NSObject<OS_dispatch_source> *_socketSource;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue; // @synthesize userQueue=_userQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // @synthesize socketQueue=_socketQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(readonly, nonatomic) CATEndPoint *remoteEndPoint; // @synthesize remoteEndPoint=_remoteEndPoint;
@property(readonly, nonatomic) CATEndPoint *localEndPoint; // @synthesize localEndPoint=_localEndPoint;
@property(nonatomic) __weak id <CATSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidConnect;
- (void)delegateDidClose;
- (void)delegateDidReceiveData:(id)arg1;
- (BOOL)delegateShouldAcceptNewSocket:(id)arg1;
- (void)populateRemoteEndPoint;
- (void)populateLocalEndPoint;
- (void)socketDidFailWithError:(id)arg1;
- (void)socketDidCancel;
- (void)socketDidConnect;
- (void)socketDidReceiveData;
- (void)acceptPendingConnection;
- (void)socketDidReceiveListeningEvent;
- (void)socketDidReceiveEvent;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (BOOL)connectToEndPoint:(id)arg1 error:(id *)arg2;
- (BOOL)listenWithEndPoint:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithNativeSocket:(int)arg1;
- (id)init;
@property(nonatomic) int nativeSocket; // @synthesize nativeSocket=_nativeSocket;

@end

