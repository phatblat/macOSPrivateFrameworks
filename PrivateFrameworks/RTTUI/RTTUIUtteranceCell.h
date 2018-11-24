//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextViewDelegate.h"

@class NSString, NSTextView, RTTUtterance, TTYStretchImageView;

@interface RTTUIUtteranceCell : NSView <NSTextViewDelegate>
{
    NSTextView *_textView;
    TTYStretchImageView *_bubbleView;
    BOOL _editingUtterance;
    RTTUtterance *_utterance;
    id <RTTUIUtteranceCellDelegate> _delegate;
}

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
@property(nonatomic) id <RTTUIUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditingUtterance) BOOL editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property(retain, nonatomic) RTTUtterance *utterance; // @synthesize utterance=_utterance;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)updateLayout;
- (void)viewDidMoveToSuperview;
- (void)viewDidEndLiveResize;
- (void)textDidChange:(id)arg1;
- (void)adjustTextViewSize;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)preferredSizeForSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

