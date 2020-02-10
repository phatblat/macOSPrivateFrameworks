//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGTextureAtlasManager.h"

@class NSArray, NSIndexSet, NSObject<OS_dispatch_queue>, NSString, PXGColorProgram;

@interface PXGMetalTextureAtlasManager : NSObject <PXGTextureAtlasManager>
{
    id <MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    unsigned int _capacityPerAtlas;
    unsigned long long _pixelFormat;
    NSIndexSet *_skipRenderSpriteIndexes;
    PXGColorProgram *_colorProgram;
    NSArray *_atlasTextures;
    struct CGSize _thumbnailSize;
}

@property(copy) NSArray *atlasTextures; // @synthesize atlasTextures=_atlasTextures;
@property(readonly, nonatomic) PXGColorProgram *colorProgram; // @synthesize colorProgram=_colorProgram;
@property(retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes; // @synthesize skipRenderSpriteIndexes=_skipRenderSpriteIndexes;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void).cxx_destruct;
- (void)_getAtlas:(id *)arg1 localThumbnailIndex:(unsigned int *)arg2 forGlobalThumbnailIndex:(unsigned int)arg3;
- (void)_requestQueue_getNextAvailableAtlas:(id *)arg1 thumbnailOffset:(unsigned int *)arg2;
- (void)pruneUnusedTextures;
- (void)applyChangeDetails:(id)arg1;
- (void)_updateAtlasSpriteIndexSkips;
@property(readonly, copy, nonatomic) NSArray *textures;
- (void)processPendingThumbnailRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned int)arg3 requestQueue:(id)arg4 colorProgram:(id)arg5 device:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
