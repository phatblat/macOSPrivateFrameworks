//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSValue, NSArray, NSString;

@protocol MBUIDelegate <NSObject>
- (void)mbRunAppleIDOptOut:(JSValue *)arg1;
- (void)mbWebkitViewSetAlternateNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetAlternateNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetWindowMessage:(NSString *)arg1;
- (void)mbWebkitViewSetWindowTitle:(NSString *)arg1;

@optional
- (void)mbValidateLocalPasswordWithTitle:(NSString *)arg1 forcingReprompt:(BOOL)arg2 callback:(JSValue *)arg3;
- (void)mbValidateLocalPasswordWithCompletion:(JSValue *)arg1;
- (void)mbWebkitViewTermsAndConditions:(NSArray *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)mbWebkitViewSaveFile:(NSString *)arg1 withLocalizedDisplayName:(NSString *)arg2 content:(NSString *)arg3;
- (void)mbWebkitViewSaveFile:(NSString *)arg1 content:(NSString *)arg2;
@end

