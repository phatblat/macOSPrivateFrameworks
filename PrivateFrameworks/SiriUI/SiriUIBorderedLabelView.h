//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSFont, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface SiriUIBorderedLabelView : NSView
{
    NSImageView *_borderImageView;
    NSTextField *_ratingLabel;
    NSFont *_font;
    struct NSEdgeInsets _edgeInsets;
}

+ (struct NSEdgeInsets)_defaultEdgeInsets;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (double)baselineOffsetFromTopOfFrame;
- (struct CGSize)_borderSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3;

@end

