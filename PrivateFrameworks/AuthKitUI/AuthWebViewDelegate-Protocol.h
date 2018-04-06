//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSValue, NSDictionary, NSError, NSString;

@protocol AuthWebViewDelegate <NSObject>

@optional
- (id)clientInfo;
- (void)skipAndContinueSignIn;
- (void)loadFailed:(NSString *)arg1 withError:(NSError *)arg2;
- (BOOL)shouldHideCancelButton;
- (void)icaSetButtonBar:(NSDictionary *)arg1 webViewName:(NSString *)arg2;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(NSString *)arg3 callback:(JSValue *)arg4;
- (void)endWebView:(NSDictionary *)arg1;
@end
