//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPFetcher.h>

#import "WKNavigationDelegate.h"

@class NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface LPURLFetcher : LPFetcher <WKNavigationDelegate>
{
    CDUnknownBlockType _completionHandler;
    WKWebView *_webView;
    NSURL *_URL;
    Class _responseClass;
}

@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)cancel;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
