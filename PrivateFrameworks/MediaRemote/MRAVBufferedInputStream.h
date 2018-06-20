//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRunLoop;

@interface MRAVBufferedInputStream : NSInputStream
{
    unsigned long long _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
}

- (void).cxx_destruct;
- (void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)handleStreamDisconnect;
- (void)handleDataReceived:(id)arg1;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)init;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)_init;

@end

