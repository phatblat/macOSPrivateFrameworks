//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiConnection.h>

@class LiClientLibrary, PFSerialQueue<PFQOSPriorityEnqueuing>;

@interface LiClientConnection : LiConnection
{
    LiClientLibrary *_library;
    PFSerialQueue<PFQOSPriorityEnqueuing> *_sendPriorityQueue;
}

@property(readonly, nonatomic) PFSerialQueue<PFQOSPriorityEnqueuing> *sendPriorityQueue; // @synthesize sendPriorityQueue=_sendPriorityQueue;
@property(nonatomic) __weak LiClientLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 forLibrary:(id)arg2;
- (id)decodeXPCObject:(id)arg1 withTransportDecoder:(id)arg2 sequence:(long long)arg3 messageType:(unsigned char)arg4;
- (void)cancelOutstandingRequests;
- (void)disconnect;
- (id)initForLibrary:(id)arg1 closeHandler:(CDUnknownBlockType)arg2;

@end

