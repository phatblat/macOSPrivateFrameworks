//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2
{
    CALayer *_borderLayer;
    CALayer *_effectsLayer;
}

@property(retain, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)updateSublayersBounds:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

