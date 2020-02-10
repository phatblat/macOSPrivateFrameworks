//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoRotationExportJob : NUExportJob
{
}

- (BOOL)render:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsOutputVideoFrame;
- (BOOL)wantsOutputImage;
- (BOOL)wantsOutputGeometry;
- (id)videoRotationExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithVideoRotationExportRequest:(id)arg1;

@end
