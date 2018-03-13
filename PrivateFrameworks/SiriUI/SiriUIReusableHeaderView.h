//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIContentButton.h>

#import "NSCollectionViewElement.h"
#import "SiriUIReusableView.h"
#import "SiriUISizableHeaderView.h"

@class NSImageView, NSString, SiriUIContentLabel, SiriUIKeyline, SiriUISnippetViewController;

@interface SiriUIReusableHeaderView : SiriUIContentButton <NSCollectionViewElement, SiriUIReusableView, SiriUISizableHeaderView>
{
    NSImageView *_chevronView;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
    long long _keylineType;
    SiriUIContentLabel *_headerLabel;
    SiriUIKeyline *_keyline;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
@property(readonly, nonatomic) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(readonly, nonatomic) SiriUIContentLabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (void)setAttributedTitleText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)desiredHeightForWidth:(double)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

