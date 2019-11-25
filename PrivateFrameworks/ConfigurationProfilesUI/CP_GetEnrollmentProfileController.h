//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"
#import "_WKDiagnosticLoggingDelegate.h"
#import "_WKDownloadDelegate.h"

@class NSArray, NSBox, NSButton, NSData, NSError, NSProgressIndicator, NSString, NSTextField, NSURL, NSView, WKWebView;

__attribute__((visibility("hidden")))
@interface CP_GetEnrollmentProfileController : NSWindowController <WKNavigationDelegate, _WKDownloadDelegate, WKUIDelegate, _WKDiagnosticLoggingDelegate>
{
    _Bool _detectedProfileDownload;
    NSView *_webViewContainer;
    NSBox *_webViewBox;
    NSTextField *_promptLabel;
    NSButton *_cancelButton;
    NSTextField *_statusLabel;
    WKWebView *_webView;
    NSProgressIndicator *_webViewSpinner;
    NSURL *_initialURL;
    NSString *_orgName;
    NSArray *_anchorCerts;
    NSError *_authError;
    unsigned long long _numPagesLoaded;
    NSData *_downloadedProfileData;
    NSString *_downloadDestination;
    NSError *_exitError;
}

+ (id)controller;
@property(retain) NSError *exitError; // @synthesize exitError=_exitError;
@property(retain) NSString *downloadDestination; // @synthesize downloadDestination=_downloadDestination;
@property(retain) NSData *downloadedProfileData; // @synthesize downloadedProfileData=_downloadedProfileData;
@property _Bool detectedProfileDownload; // @synthesize detectedProfileDownload=_detectedProfileDownload;
@property unsigned long long numPagesLoaded; // @synthesize numPagesLoaded=_numPagesLoaded;
@property(retain) NSError *authError; // @synthesize authError=_authError;
@property(retain) NSArray *anchorCerts; // @synthesize anchorCerts=_anchorCerts;
@property(retain) NSString *orgName; // @synthesize orgName=_orgName;
@property(retain) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(retain) NSProgressIndicator *webViewSpinner; // @synthesize webViewSpinner=_webViewSpinner;
@property(retain) WKWebView *webView; // @synthesize webView=_webView;
@property NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property NSBox *webViewBox; // @synthesize webViewBox=_webViewBox;
@property NSView *webViewContainer; // @synthesize webViewContainer=_webViewContainer;
- (void).cxx_destruct;
- (void)_download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_downloadProcessDidCrash:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_download:(id)arg1 didCreateDestination:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_downloadDidStart:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;
- (void)_webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 userInfo:(id)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)handleAuthenticationFrom:(id)arg1 challenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buttonClicked:(id)arg1;
- (void)clearStatus;
- (void)setStatusToError:(id)arg1;
- (void)setStatusToErrorText:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)windowDidLoad;
- (void)addSpinnerToWebView;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

