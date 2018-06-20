//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAudioRecorderDelegate.h"
#import "CSVTUIAudioSession.h"

@class CSAudioRecorder, NSObject<OS_dispatch_queue>, NSString;

@interface CSVTUIAudioSessionRemote : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession>
{
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVTUIAudioSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <CSVTUIAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (unsigned long long)audioSource;
- (long long)convertStopReason:(long long)arg1;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (void)updateMeters;
- (void)resetEndPointer;
- (void)setEndpointerDelegate:(id)arg1;
- (void)releaseAudioSession;
- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording;
- (BOOL)prepareRecord;
- (id)_audioRecorder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

