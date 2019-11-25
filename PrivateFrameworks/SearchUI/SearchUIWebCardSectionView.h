//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "NUIContainerViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"

@class NSString, NUIContainerBoxView, WKWebView;

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    double _contentHeight;
    WKWebView *_webView;
}

@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NUIContainerBoxView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

