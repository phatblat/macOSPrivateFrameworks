//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HearingUtilities/HUIDCRemoteController.h>

#import "AXHARemoteControllerProtocol.h"

@class AXDispatchTimer, NSObject<OS_dispatch_queue>, NSString;

@interface AXHARemoteController : HUIDCRemoteController <AXHARemoteControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_receivedPacketQueue;
    BOOL didValidateHIID;
    AXDispatchTimer *_communicationTimer;
}

@property(retain, nonatomic) AXDispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) BOOL didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendDataChunk;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (BOOL)outputStreamReady;
- (void)didCommunicate;
- (void)validatePairedAid;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

