//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKWebView, _WKLinkIconParameters;

@protocol _WKIconLoadingDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 shouldLoadIconWithParameters:(_WKLinkIconParameters *)arg2 completionHandler:(void (^)(void (^)(NSData *)))arg3;
@end
