//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface TKTonePickerView : NSView
{
    BOOL _isPerformingBlockAffectingBaselineOffsetFromBottom;
    id <TKTonePickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TKTonePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layout;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)baselineOffsetFromBottom;
- (void)_performBlockAffectingBaselineOffsetFromBottom:(CDUnknownBlockType)arg1;
- (id)_viewForBaselineLayout;
- (id)_viewForSizingTonePickerView;

@end

