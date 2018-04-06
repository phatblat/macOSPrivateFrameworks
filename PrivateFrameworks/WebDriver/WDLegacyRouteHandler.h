//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDHTTPRouteHandler.h"

@class NSMutableDictionary, NSNumberFormatter, NSString, WDHTTPDriverInterface;

@interface WDLegacyRouteHandler : NSObject <WDHTTPRouteHandler>
{
    WDHTTPDriverInterface *_driver;
    BOOL _didAddHandlersForUnsupportedMethods;
    NSMutableDictionary *_supportedMethodsByPath;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (void)_handleDeleteSessionCookieName:(id)arg1 response:(id)arg2;
- (void)_handleDeleteSessionCookie:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionCookie:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionCookie:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionKeys:(id)arg1 response:(id)arg2;
- (id)_keyInteractionsFromSequence:(id)arg1 inSession:(id)arg2;
- (void)_handlePostSessionButtonup:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionButtondown:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionDoubleclick:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionClick:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionMoveto:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionScreenshot:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionAcceptAlert:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionDismissAlert:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionAlertText:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionAlertText:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementLocationInView:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementLocation:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementSize:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementDisplayed:(id)arg1 response:(id)arg2;
- (void)_checkIsElementDisplayed:(struct NSString *)arg1 inSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleGetSessionElementCSSProperty:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementAttribute:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementEquals:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementSelected:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementEnabled:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementText:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementName:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionElementActive:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElementClick:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElementClear:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElementSubmit:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElementValue:(id)arg1 response:(id)arg2;
- (void)_ensureElementIsScrolledIntoViewAndDisplayed:(struct NSString *)arg1 inSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handlePostSessionElementElements:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElementElement:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElements:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionElement:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionTitle:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionSource:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionExecuteAsync:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionExecute:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionFrameParent:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionFrame:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionRefresh:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionBack:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionForward:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionURL:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionURL:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionWindowMaximize:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionWindowPosition:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionWindowPosition:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionWindowSize:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionWindowSize:(id)arg1 response:(id)arg2;
- (void)_handleDeleteSessionWindow:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionWindow:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionWindowHandles:(id)arg1 response:(id)arg2;
- (void)_handleGetSessionWindowHandle:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionTimeoutsImplicitWait:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionTimeoutsAsyncScript:(id)arg1 response:(id)arg2;
- (void)_handlePostSessionTimeouts:(id)arg1 response:(id)arg2;
- (void)_handleDeleteSession:(id)arg1 response:(id)arg2;
- (void)_handleGetSession:(id)arg1 response:(id)arg2;
- (void)_handlePostSession:(id)arg1 response:(id)arg2;
- (id)_capabilitiesForSession:(id)arg1;
- (BOOL)_translateRequestedCapabilityKey:(id)arg1 withValue:(id)arg2 intoOptions:(id)arg3;
- (id)_translateInternalElementHandlesForPayload:(id)arg1 withSession:(id)arg2;
- (id)_translateExternalElementHandlesFromPayload:(id)arg1 withSession:(id)arg2;
- (id)_translatePayload:(id)arg1 withSession:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)_isElementHandleIdentifier:(id)arg1;
- (BOOL)_findSession:(id *)arg1 fromRequest:(id)arg2 orPopulateResponse:(id)arg3;
- (BOOL)_ensureErrorIsEmpty:(id)arg1 forRequest:(id)arg2 orPopulateResponse:(id)arg3 session:(id)arg4;
- (BOOL)_ensureRequest:(id)arg1 hasURLParameter:(id)arg2 ofClass:(Class)arg3 orPopulateResponse:(id)arg4;
- (BOOL)_ensurePayload:(id)arg1 fromRequest:(id)arg2 hasOptionalParameter:(id)arg3 ofClass:(Class)arg4 orPopulateResponse:(id)arg5;
- (BOOL)_ensurePayload:(id)arg1 fromRequest:(id)arg2 hasRequiredParameter:(id)arg3 ofClass:(Class)arg4 orPopulateResponse:(id)arg5;
- (BOOL)_parsePayload:(id *)arg1 fromRequest:(id)arg2 orPopulateResponse:(id)arg3;
- (void)_handleRequestThatUsesOptionsMethod:(id)arg1 response:(id)arg2;
- (void)_handleRequestForUnsupportedMethod:(id)arg1 response:(id)arg2;
- (void)_handleRequestForUnknownCommand:(id)arg1 response:(id)arg2;
- (void)_handleRequestForUnimplementedCommand:(id)arg1 response:(id)arg2;
- (void)_addUnimplementedCommandWithMethod:(long long)arg1 path:(id)arg2;
- (void)_addHandlersForOptionsMethod;
- (void)_addHandlersForUnknownCommands;
- (void)_addHandlersForUnsupportedMethods;
- (void)_addHandlerForUnsupportedMethod:(long long)arg1 withPath:(id)arg2;
- (void)_markSupportedCommandMethod:(long long)arg1 path:(id)arg2;
- (void)_addHandlerForCommandWithMethod:(long long)arg1 path:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)_addHandlerForCommandWithMethod:(long long)arg1 path:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
@property(readonly, copy, nonatomic) NSString *version;
- (void)setupDefaultRoutes;
- (id)initWithDriver:(id)arg1;

@end
