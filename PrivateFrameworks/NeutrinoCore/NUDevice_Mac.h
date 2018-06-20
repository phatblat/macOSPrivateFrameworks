//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUDevice.h>

@class NUCGLRendererInfo;

@interface NUDevice_Mac : NUDevice
{
    long long _openGLVirtualScreen;
    NUCGLRendererInfo *_openGLRendererInfo;
}

@property(readonly, nonatomic) NUCGLRendererInfo *openGLRendererInfo; // @synthesize openGLRendererInfo=_openGLRendererInfo;
- (void).cxx_destruct;
- (long long)_preferredSampleMode;
- (long long)_computeOpenGLVirtualScreen;
- (long long)_openGLVirtualScreen;
- (id)_newSoftwareRenderer;
- (id)_newOpenGLRendererWithOptions:(id)arg1;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newRendererWithOptions:(id)arg1;
- (id)_newLowPriorityRenderer;
- (id)_newRenderer;
@property(readonly, nonatomic, getter=isDiscrete) BOOL discrete;
@property(readonly, nonatomic, getter=isIntegrated) BOOL integrated;
- (BOOL)hasOpenGLSupport;
- (unsigned long long)family;
- (id)debugDescription;
- (id)initWithName:(id)arg1 model:(id)arg2 openGLRendererInfo:(id)arg3 metalDevice:(id)arg4;

@end

