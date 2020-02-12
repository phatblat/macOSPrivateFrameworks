//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDStream.h>

@class ASDAudioDevice, NSArray, NSObject<OS_dispatch_queue>;

@interface ASDSRCStream : ASDStream
{
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper>> _streamHelper;
    NSObject<OS_dispatch_queue> *_srcQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isRunning;
    long long _maximumFramesPerIOCycle;
    long long _ioReferenceCount;
    NSArray *_underlyingStreams;
}

@property(copy, nonatomic) NSArray *underlyingStreams; // @synthesize underlyingStreams=_underlyingStreams;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDUnknownBlockType)writeMixBlock;
- (CDUnknownBlockType)readInputBlock;
- (void)_updateLatency;
@property(readonly, nonatomic) long long maximumFramesPerIOCycle;
- (void)_updateMaximumFramesPerIOCycle;
- (void)updateLatency;
- (void)_deallocateStreamingResources;
- (BOOL)_allocateStreamingResources;
- (BOOL)changePhysicalFormat:(id)arg1;
- (void)stopStream;
- (void)startStream;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;

@end

