//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BURandomWriteChannel.h"
#import "BUReadChannel.h"
#import "BUStreamWriteChannel.h"

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSString;

@interface BUFileIOChannel : NSObject <BUReadChannel, BUStreamWriteChannel, BURandomWriteChannel>
{
    BOOL _closed;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
}

@property(retain, nonatomic) NSObject<OS_dispatch_io> *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)truncateToLength:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)writeData:(id)arg1 offset:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(CDUnknownBlockType)arg4;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id *)arg5 cleanupHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
