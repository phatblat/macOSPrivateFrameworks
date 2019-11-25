//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AutoFillFunctionBarProvider;

@protocol AutoFillFunctionBarProviderDelegate <NSObject>

@optional
- (BOOL)isAwaitingBiometricAuthentication;
- (BOOL)isTextFieldFocused;
- (void)functionBarProvider:(AutoFillFunctionBarProvider *)arg1 didSelectCompletionListItem:(struct CompletionListItem *)arg2;
- (void)showFunctionBarForProvider:(AutoFillFunctionBarProvider *)arg1;
- (void)hideFunctionBarForProvider:(AutoFillFunctionBarProvider *)arg1;
@end

