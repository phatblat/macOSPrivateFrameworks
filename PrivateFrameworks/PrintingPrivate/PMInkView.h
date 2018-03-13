//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface PMInkView : NSView
{
    struct OpaquePMPrinter *_printer;
}

@property struct OpaquePMPrinter *printer; // @synthesize printer=_printer;
- (void)setSuppliesInfo:(id)arg1;
- (id)getWarningToolTip:(id)arg1;
- (id)markerChangeTimeString:(double)arg1;
- (double)addConsumablesDict:(id)arg1 at:(struct CGPoint)arg2 withAttrs:(id)arg3 titleWidth:(double)arg4 warning:(id)arg5;
- (double)addSRGBColor:(id)arg1 at:(struct CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4;
- (double)addColor:(id)arg1 at:(struct CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4;
- (void)addLowInkBadgeAt:(struct CGPoint)arg1 withTooltip:(id)arg2;
- (id)addAirPrintSuppliesButtonAt:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)airprintButtonSelected:(id)arg1;
- (id)addTextViewForString:(id)arg1 at:(struct CGPoint)arg2 withAttrs:(id)arg3 width:(double)arg4;
- (id)addStaticText:(id)arg1 withAttrs:(id)arg2 frame:(struct CGRect)arg3 alignment:(unsigned long long)arg4 axHelp:(id)arg5;

@end

