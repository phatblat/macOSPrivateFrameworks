//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@interface SiriUIScrollView : NSScrollView
{
    BOOL _scrollEnabled;
}

+ (Class)_verticalScrollerClass;
+ (Class)_horizontalScrollerClass;
@property(getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (double)firstBaselineOffsetFromTop;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
@property struct CGPoint contentOffset;
- (void)scrollWheel:(id)arg1;
- (void)hideScrollBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end

