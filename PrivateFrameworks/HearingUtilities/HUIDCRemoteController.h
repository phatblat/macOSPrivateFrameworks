//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"
#import "NSStreamDelegate.h"

@class HUIDCMessage, HUIDCPacket, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;

@interface HUIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    HUIDCPacket *_currentPacket;
    id <HUIDCRemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_inputBuffer;
    HUIDCMessage *_currentMessageInFlight;
    NSMutableData *_outputBuffer;
}

@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) HUIDCMessage *currentMessageInFlight; // @synthesize currentMessageInFlight=_currentMessageInFlight;
@property(retain, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSMutableArray *outputDataQueue; // @synthesize outputDataQueue=_outputDataQueue;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <HUIDCRemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (BOOL)sendObject:(id)arg1;
- (void)openConnectionIfNecessary;
- (void)resetConnection;
- (void)sendDataChunk;
- (BOOL)outputStreamReady;
- (void)enqueueData:(id)arg1;
- (void)clearMessageQueue;
- (void)receivedData:(id)arg1;
- (void)messageWasAcked:(id)arg1;
- (void)finishedSending:(id)arg1;
- (void)didCommunicate;
- (id)nextMessageInQueue;
- (BOOL)isSlave;
- (id)name;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (void)setupStream:(id)arg1;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

