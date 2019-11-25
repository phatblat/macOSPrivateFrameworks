//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSImage;

@interface TLKImage : TLKObject
{
    BOOL _isTemplate;
    BOOL _shouldCropToCircle;
    BOOL _useFastPathShadow;
    NSImage *_uiImage;
    double _cornerRadius;
    struct CGSize _size;
}

@property(nonatomic) BOOL useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL shouldCropToCircle; // @synthesize shouldCropToCircle=_shouldCropToCircle;
@property(nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSImage *uiImage; // @synthesize uiImage=_uiImage;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSImage *uiImageToRender;

@end

