//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MUPoolObject.h>

@class MRCroppingSprite, MRImage;

@interface MRReflectionsRenderable : MUPoolObject
{
    MRImage *_slide;
    MRCroppingSprite *_sprite;
    float _modelViewMatrix[16];
    struct CGPoint position;
    struct CGSize size;
    BOOL isShadow;
    MRReflectionsRenderable *next;
    BOOL needsFlipped;
    BOOL isBreak;
}

+ (CDStruct_7b508128 *)poolInfo;
- (void)dealloc;
- (void)purge;
- (id)initWithSlide:(id)arg1 sprite:(id)arg2 modelViewMatrix:(const float *)arg3 position:(struct CGPoint)arg4 size:(struct CGSize)arg5 flipped:(BOOL)arg6 isShadow:(BOOL)arg7 isBreak:(BOOL)arg8;

@end

