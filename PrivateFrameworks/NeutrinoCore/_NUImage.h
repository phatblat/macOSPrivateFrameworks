//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUImage.h"
#import "NUImageCopying.h"
#import "NUMutableImage.h"
#import "NUMutablePurgeableImage.h"
#import "NUPurgeableImage.h"

@class NSObject<OS_dispatch_queue>, NSPointerArray, NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@interface _NUImage : NSObject <NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NUImageLayout *_layout;
    NUPixelFormat *_format;
    NUColorSpace *_colorSpace;
    NURegion *_validRegion;
    NSPointerArray *_tiles;
    id <NUStorageFactory> _tileFactory;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _accessCount;
}

@property(copy) NURegion *validRegion; // @synthesize validRegion=_validRegion;
@property(readonly) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly) NUImageLayout *layout; // @synthesize layout=_layout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (id)mutablePurgeableImageCopy;
- (id)purgeableImageCopy;
- (id)mutableImageCopy;
- (id)immutableImageCopy;
- (id)_nonPurgeableCopy;
- (id)_purgeableCopy;
- (void)endAccessRegion:(id)arg1;
- (void)endAccess;
- (BOOL)beginAccessRegion:(id)arg1;
- (BOOL)beginAccess;
- (void)writeRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_createOrCopyTile:(id)arg1 tileInfo:(id)arg2 writeRegion:(id)arg3;
- (void)readRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)tileAtIndex:(unsigned long long)arg1;
- (id)_tileAtIndex:(unsigned long long)arg1;
@property(readonly) CDStruct_912cb5d2 size;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3 tileFactory:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
