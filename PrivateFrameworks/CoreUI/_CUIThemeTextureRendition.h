//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIStructuredThemeStore, NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureRendition : CUIThemeRendition
{
    CUIStructuredThemeStore *_sourceProvider;
    long long _textureInterpretation;
    BOOL _textureSourceImageOpaque;
    TXRTextureInfo *_textureInfo;
    NSMutableArray *_textureMipLevels;
}

- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4;
- (id)provideTextureInfo;
- (id)_texturedImageWithKey:(id)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)mipLevels;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

