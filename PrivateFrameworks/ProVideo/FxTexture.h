//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/FxImage.h>

#import "NSCopying.h"

@interface FxTexture : FxImage <NSCopying>
{
    struct FxTexturePriv *_texturePriv;
}

- (BOOL)_verifyImage;
- (void)draw;
- (void)getTextureCoords:(double *)arg1 right:(double *)arg2 bottom:(double *)arg3 top:(double *)arg4;
- (void)setAsActiveTexture;
- (void)disable;
- (void)enable;
- (void)bind;
- (unsigned int)target;
- (unsigned int)textureId;
- (void *)createData:(unsigned int)arg1 withType:(unsigned int)arg2;
- (BOOL)isInputImage;
- (void)setIsInputImage:(BOOL)arg1;
- (void)setTarget:(unsigned int)arg1;
- (void)setTextureId:(unsigned int)arg1;
- (void)setData:(void *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1 textureId:(unsigned int)arg2 andTarget:(unsigned int)arg3;
- (id)init;

@end
