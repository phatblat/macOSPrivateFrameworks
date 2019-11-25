//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAudioStreamProvidingDelegate.h"
#import "CSXPCClientDelegate.h"

@class CSAudioStream, CSXPCClient, NSObject<OS_dispatch_queue>, NSString;

@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate>
{
    id <CSCommandControlListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSAudioStreamProviding> _audioStreamProvider;
    CSAudioStream *_audioStream;
    CSXPCClient *_xpcClient;
}

@property(retain, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider; // @synthesize audioStreamProvider=_audioStreamProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSCommandControlListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

