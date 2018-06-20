//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRunLoop;

@interface MRAVBufferedOutputStream : NSOutputStream
{
    unsigned long long _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
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
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (id)initToMemory;
- (void)_init;

@end

