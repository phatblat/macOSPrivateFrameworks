//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import "MTLHeap.h"

@class MTLToolsPointerArray, NSString;

@interface MTLToolsHeap : MTLToolsResource <MTLHeap>
{
    MTLToolsPointerArray *_buffers;
    MTLToolsPointerArray *_textures;
}

@property(readonly, nonatomic) MTLToolsPointerArray *textures; // @synthesize textures=_textures;
@property(readonly, nonatomic) MTLToolsPointerArray *buffers; // @synthesize buffers=_buffers;
@property(readonly) unsigned long long currentAllocatedSize;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
@property(readonly) unsigned long long usedSize;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;
- (void)dealloc;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
