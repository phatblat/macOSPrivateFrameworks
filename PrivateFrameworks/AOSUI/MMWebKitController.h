//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFrameLoadDelegate.h"
#import "WebResourceLoadDelegate.h"
#import "WebUIDelegate.h"

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationController, AKAppleIDServerResourceLoadDelegate, AKAppleIDSession, CDPStateUIController, NSString, NSURLRequest, WebPreferences, WebView;

@interface MMWebKitController : NSObject <WebUIDelegate, WebFrameLoadDelegate, WebResourceLoadDelegate>
{
    WebPreferences *_webPreferences;
    WebView *_webView;
    NSURLRequest *_loadingRequest;
    AKAppleIDSession *_appleIDSession;
    AKAppleIDAuthenticationController *_appleIDController;
    AKAppleIDAuthenticationContext *_authContext;
    CDPStateUIController *cdpStateUIController;
    AKAppleIDServerResourceLoadDelegate *_loadDelegate;
    NSString *_appleID;
    NSString *_altDSID;
    unsigned long long _gsType;
    BOOL _setupResourceDelegate;
    struct {
        unsigned int webViewSetFrame:1;
        unsigned int delegateConfigureForFrame:1;
        unsigned int delegateDidCreateJavaScriptContextFrame:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFailLoading:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateWindow:1;
        unsigned int padding:1;
    } _delegateFlags;
    id <MMWebKitControllerDelegate> _delegate;
}

@property(copy, nonatomic) NSURLRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) unsigned long long gsType; // @synthesize gsType=_gsType;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WebPreferences *webPreferences; // @synthesize webPreferences=_webPreferences;
@property(nonatomic) id <MMWebKitControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)_updateAuthControllerWithResponse:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3;
- (void)setupResourceLoadDelegate;
- (void)dealloc;
- (id)webViewURL;
- (void)reload;
- (void)loadURLRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 withParentURL:(id)arg2;
- (id)initInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

