//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@interface PRSTextView : NSTextView
{
    struct CGSize _exclusionMargin;
    struct CGRect _exclusionRect;
}

@property(nonatomic) struct CGSize exclusionMargin; // @synthesize exclusionMargin=_exclusionMargin;
@property(nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
- (BOOL)isAccessibilityElement;
- (void)layout;
- (id)embeddedImageView;
@property(nonatomic) double lineSpacing;
- (id)initWithFrame:(struct CGRect)arg1;

@end
