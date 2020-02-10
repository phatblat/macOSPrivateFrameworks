//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class IPARegion, PADevice;

@protocol PATiledImageBacking <NSObject, NSCopying>
- (void)endAccessRegion:(IPARegion *)arg1;
- (void)beginAccessRegion:(IPARegion *)arg1;
- (void)invalidateRegion:(IPARegion *)arg1;
- (void)validateRegion:(IPARegion *)arg1;
- (struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg1;
- (IPARegion *)validRegion;
- (void)contiguousTileForRect:(struct CGRect)arg1 withBlock:(void (^)(id <PAImageTile>))arg2;
- (void)enumerateMutableTilesInRect:(struct CGRect)arg1 withBlock:(void (^)(id <PAMutableImageTile>, char *))arg2;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withBlock:(void (^)(id <PAImageTile>, char *))arg2;
- (id <PAMutableImageTile>)mutableTileAtIndex:(unsigned long long)arg1;
- (id <PAImageTile>)tileAtIndex:(unsigned long long)arg1;
- (void)enumerateTilesIndexesInRect:(struct CGRect)arg1 withBlock:(void (^)(unsigned long long))arg2;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint)arg1;
- (unsigned long long)numberOfTiles;
- (PADevice *)device;
- (int)format;
- (struct CGSize)borderSize;
- (struct CGSize)tileSize;
- (struct CGSize)size;
@end
