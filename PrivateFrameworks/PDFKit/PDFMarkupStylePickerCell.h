//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSActionCell.h"

@class PDFMarkupStylePickerCellPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupStylePickerCell : NSActionCell
{
    PDFMarkupStylePickerCellPrivate *_private;
}

- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)mouseExited:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)mouseEntered:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_handleMouseMovedForEvent:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)_styleAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (void)_drawStyle:(unsigned long long)arg1 withFrame:(struct CGRect)arg2;
- (void)_drawBackgroundForStyleRect:(struct CGRect)arg1;
- (struct CGRect)style:(unsigned long long)arg1 boundsWithFrame:(struct CGRect)arg2;
- (void)setImage:(id)arg1 forStyle:(unsigned long long)arg2;
- (struct CGSize)cellSize;
- (void)_valueChanged:(id)arg1;
- (unsigned long long)selectedMarkupStyle;
- (id)init;

@end
