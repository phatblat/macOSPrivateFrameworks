//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PATiledImageBacking.h"

@class IPARegion, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PADevice;

@interface PANUTiledImageBacking : NSObject <PATiledImageBacking>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_textureCache;
    PADevice *_device;
    IPARegion *_validRegion;
    struct CGSize _borderSize;
    struct CGSize _tileSize;
    int _format;
    id <NUPurgeableSurfaceImage> _image;
}

@property(readonly) id <NUPurgeableSurfaceImage> image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)validateRegion:(id)arg1;
- (id)validRegion;
- (struct CGSize)tileSize;
- (id)tileAtIndex:(unsigned long long)arg1;
- (struct CGSize)size;
- (unsigned long long)numberOfTiles;
- (struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg1;
- (id)mutableTileAtIndex:(unsigned long long)arg1;
- (void)invalidateRegion:(id)arg1;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint)arg1;
- (int)format;
- (void)enumerateTilesIndexesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CDStruct_c3523bfd)flippedPixelRect:(struct CGRect)arg1;
- (void)_cacheTexture:(id)arg1 forIndex:(long long)arg2;
- (id)textureTile:(id)arg1 tileInfo:(id)arg2 context:(id)arg3;
- (void)enumerateMutableTilesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)device;
- (void)contiguousTileForRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)borderSize;
- (void)_endAccessRegion:(id)arg1;
- (void)_beginAccessRegion:(id)arg1;
- (void)endAccessRegion:(id)arg1;
- (void)beginAccessRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)_convertFormat:(id)arg1;
- (id)initWithSurfaceImage:(id)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
