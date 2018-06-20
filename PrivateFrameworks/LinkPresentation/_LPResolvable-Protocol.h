//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, WKWebView;

@protocol _LPResolvable <NSObject>
- (NSString *)accessibilityText;
- (long long)maximumBytes;
- (BOOL)isValidMIMEType:(NSString *)arg1;
- (NSURL *)URL;
- (id <_LPResolver>)tryToResolveWithWebViewForProcessSharing:(WKWebView *)arg1 completionHandler:(void (^)(id, id <_LPResolvable>))arg2;
@end

