//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSIndexSet, PXGChangeDetails;

@protocol PXGTextureAtlasManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *textures;
@property(retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property(readonly, nonatomic) unsigned long long pixelFormat;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (void)pruneUnusedTextures;
- (void)applyChangeDetails:(PXGChangeDetails *)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)processPendingThumbnailRequestIDsWithHandler:(unsigned int (^)(int, unsigned int, unsigned int))arg1;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(NSData *)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4;
@end

