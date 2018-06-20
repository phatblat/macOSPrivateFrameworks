//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSlider.h"

@class NSArray, NSTickLabelsView;

@interface NSUpActionSlider : NSSlider
{
    id fUpTarget;
    SEL fUpAction;
    NSTickLabelsView *fTickLabelsView;
    NSArray *fTickLabels;
}

- (void).cxx_destruct;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTickLabels:(id)arg1;
- (void)sendUpAction;
- (void)mouseDown:(id)arg1;
- (void)setUpTarget:(id)arg1 action:(SEL)arg2;
- (void)addTickLabelsView:(id)arg1;

@end

