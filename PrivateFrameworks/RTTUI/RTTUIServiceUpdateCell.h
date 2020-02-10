//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextView;

@interface RTTUIServiceUpdateCell : NSView
{
    NSTextView *_textView;
    id <RTTUIServiceCellDelegate> _delegate;
}

+ (double)heightForWidth:(double)arg1 withDelegate:(id)arg2;
@property(nonatomic) __weak id <RTTUIServiceCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)updateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidEndLiveResize;
- (void)adjustTextViewSize;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)preferredSizeForSize:(struct CGSize)arg1;
- (id)serviceMessage;

@end
