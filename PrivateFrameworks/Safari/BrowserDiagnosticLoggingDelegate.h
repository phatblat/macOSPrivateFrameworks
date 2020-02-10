//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_WKDiagnosticLoggingDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BrowserDiagnosticLoggingDelegate : NSObject <_WKDiagnosticLoggingDelegate>
{
}

- (void)_webView:(id)arg1 logDiagnosticMessageWithEnhancedPrivacy:(id)arg2 description:(id)arg3;
- (void)_webView:(id)arg1 logDiagnosticMessageWithValue:(id)arg2 description:(id)arg3 value:(id)arg4;
- (void)_webView:(id)arg1 logDiagnosticMessageWithResult:(id)arg2 description:(id)arg3 result:(long long)arg4;
- (void)_webView:(id)arg1 logDiagnosticMessage:(id)arg2 description:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
