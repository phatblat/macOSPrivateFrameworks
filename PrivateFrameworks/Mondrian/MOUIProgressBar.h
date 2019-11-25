//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, NSColor;

@interface MOUIProgressBar : NSView
{
    float _progress;
    NSColor *_color;
    NSColor *_borderColor;
    NSColor *_backgroundColor;
    CALayer *_progressBarLayer;
}

@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

