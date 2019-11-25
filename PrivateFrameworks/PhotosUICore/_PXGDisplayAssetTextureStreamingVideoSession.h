//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableIndexSet;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject
{
    NSMutableIndexSet *_textureRequestIDs;
    id <PXGDisplayAssetPixelBufferSource> _pixelBufferSource;
}

@property(readonly, nonatomic) id <PXGDisplayAssetPixelBufferSource> pixelBufferSource; // @synthesize pixelBufferSource=_pixelBufferSource;
- (void).cxx_destruct;
- (void)removeTextureRequestIDs:(id)arg1;
- (void)removeTextureRequestID:(int)arg1;
- (void)addTextureRequestID:(int)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *textureRequestIDs;
- (id)initWithPixelBufferSource:(id)arg1;

@end

