//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class NSColor, NSView;

@interface PXSampleGadgetView : UXView
{
    NSColor *_color;
    id <PXSampleGadgetViewDelegate> _delegate;
    NSView *_colorView;
}

@property(retain, nonatomic) NSView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) __weak id <PXSampleGadgetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
