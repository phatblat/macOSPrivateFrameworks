//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class NSButton, NSString, SiriUIKeyline, SiriUISnippetViewController;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView
{
    NSButton *_button;
    SiriUIKeyline *_keyline;
    BOOL _hasKeyline;
    SiriUISnippetViewController *_snippetViewController;
    id <SiriUIActionableFooterViewDelegate> _delegate;
}

+ (double)defaultHeight;
@property(nonatomic) BOOL hasKeyline; // @synthesize hasKeyline=_hasKeyline;
@property(nonatomic) __weak id <SiriUIActionableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)snippetViewController;
- (void).cxx_destruct;
- (struct NSEdgeInsets)edgeInsets;
- (void)_buttonTapped:(id)arg1;
- (void)setSnippetViewController:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

