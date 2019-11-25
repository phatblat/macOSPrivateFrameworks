//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKNavigationAction, WKWebViewConfiguration, WKWindowFeatures;

__attribute__((visibility("hidden")))
@interface BrowserViewControllerWindowConfiguration : NSObject
{
    WKWebViewConfiguration *_webViewConfiguration;
    WKNavigationAction *_navigationAction;
    WKWindowFeatures *_windowFeatures;
}

@property(readonly, nonatomic) WKWindowFeatures *windowFeatures; // @synthesize windowFeatures=_windowFeatures;
@property(readonly, nonatomic) WKNavigationAction *navigationAction; // @synthesize navigationAction=_navigationAction;
@property(readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
- (void).cxx_destruct;
- (id)initWithWebViewConfiguration:(id)arg1 navigationAction:(id)arg2 windowFeatures:(id)arg3;

@end

