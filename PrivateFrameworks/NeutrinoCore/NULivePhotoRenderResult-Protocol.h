//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURenderResult.h"

@class AVAsset, AVVideoComposition, NUImageGeometry;

@protocol NULivePhotoRenderResult <NURenderResult>
@property(readonly) NUImageGeometry *videoGeometry;
@property(readonly) CDStruct_1b6d18a9 photoTime;
@property(readonly) struct CGImage *photo;
@property(readonly) AVVideoComposition *videoComposition;
@property(readonly) AVAsset *video;
@end

