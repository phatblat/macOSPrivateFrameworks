//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDStream.h>

@interface ASDRingBufferInputStream : ASDStream
{
    struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList>> _bufferList;
    id <ASDManagedRingBuffer> _ringBuffer;
}

@property(retain, nonatomic) id <ASDManagedRingBuffer> ringBuffer; // @synthesize ringBuffer=_ringBuffer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDUnknownBlockType)readInputBlock;
- (void)setPhysicalFormat:(id)arg1;
- (void)stopStream;
- (void)startStream;
- (id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;

@end

