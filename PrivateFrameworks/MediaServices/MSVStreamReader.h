//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSObject<OS_dispatch_queue>, NSString;

@interface MSVStreamReader : NSObject <NSStreamDelegate>
{
    BOOL _closeOnStop;
    BOOL _stopped;
    struct z_stream_s *_zstreamp;
    BOOL _compress;
    CDUnknownBlockType _didReadDataBlock;
    CDUnknownBlockType _didFinishReadingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=shouldCompress) BOOL compress; // @synthesize compress=_compress;
@property(nonatomic) unsigned long long maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
@property(copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishReadingBlock; // @synthesize didFinishReadingBlock=_didFinishReadingBlock;
@property(copy, nonatomic) CDUnknownBlockType didReadDataBlock; // @synthesize didReadDataBlock=_didReadDataBlock;
- (void).cxx_destruct;
- (BOOL)_shouldHandleEvent;
- (id)_compressedDataForData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)readAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)readAllDataWithError:(id *)arg1;
- (void)stop;
- (void)dealloc;
- (void)start;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

