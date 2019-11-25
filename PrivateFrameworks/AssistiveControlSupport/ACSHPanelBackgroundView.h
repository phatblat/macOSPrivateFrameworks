//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@class NSColor;

@interface ACSHPanelBackgroundView : ACSHView
{
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    struct CGImage *__cachedImage;
}

@property(nonatomic) struct CGImage *_cachedImage; // @synthesize _cachedImage=__cachedImage;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
@property(readonly, nonatomic) struct CGImage *_image;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

