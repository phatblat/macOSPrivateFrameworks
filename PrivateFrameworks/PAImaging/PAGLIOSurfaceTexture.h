//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAGLTextureRect.h>

@class NUIOSurface;

@interface PAGLIOSurfaceTexture : PAGLTextureRect
{
    NUIOSurface *_surface;
}

@property(retain) NUIOSurface *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (unsigned int)createWithContext:(id)arg1;
- (id)initWithSurface:(id)arg1 device:(id)arg2;

@end
