//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGTextureProviderDelegate.h"

@class PXGPPTStringsLayout, PXGStringTextureProvider;

@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate>
{
    PXGStringTextureProvider *_stringTextureProvider;
    PXGPPTStringsLayout *_stringsLayout;
    CDUnknownBlockType _textureProviderDidProvideCGImageHandler;
}

@property(copy, nonatomic) CDUnknownBlockType textureProviderDidProvideCGImageHandler; // @synthesize textureProviderDidProvideCGImageHandler=_textureProviderDidProvideCGImageHandler;
@property(retain, nonatomic) PXGPPTStringsLayout *stringsLayout; // @synthesize stringsLayout=_stringsLayout;
@property(retain, nonatomic) PXGStringTextureProvider *stringTextureProvider; // @synthesize stringTextureProvider=_stringTextureProvider;
- (void).cxx_destruct;
- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 orientationTransform:(struct CGAffineTransform)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 forRequestID:(int)arg4;
- (void)runRenderTextTestWithOptions:(id)arg1 latencyMeter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end

