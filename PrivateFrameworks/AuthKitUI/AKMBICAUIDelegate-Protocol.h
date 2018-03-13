//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSValue, NSArray, NSString;

@protocol AKMBICAUIDelegate <NSObject>
- (void)validateLocalPasswordWithTitle:(NSString *)arg1 forcingReprompt:(BOOL)arg2 callback:(JSValue *)arg3;
- (void)validateLocalPasswordWithCompletion:(JSValue *)arg1;
- (void)skipSignIn;
- (void)dismiss:(NSString *)arg1;
- (void)showTermsAndConditions:(NSArray *)arg1 callback:(JSValue *)arg2;
- (void)resetCompleted:(NSString *)arg1 password:(NSString *)arg2;
- (void)saveTOS:(NSString *)arg1 localizedName:(NSString *)arg2 content:(NSString *)arg3;
- (void)saveTOS:(NSString *)arg1 content:(NSString *)arg2;
- (void)setAlternateNavButton:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)setRightNavButton:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)setLeftNavButton:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)setPageSubTitle:(NSString *)arg1;
- (void)setNavTitle:(NSString *)arg1;
@end

