//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TabDialogConfiguration.h"

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AlertDialogConfiguration : NSObject <NSCopying, TabDialogConfiguration>
{
    BOOL shouldHideTabContent;
    BOOL _hasPromptField;
    long long _dialogType;
    NSString *_title;
    NSString *_message;
    NSArray *_buttonLabels;
    NSString *_originStringForAccessibility;
    NSString *_promptFieldDefaultResponse;
    NSNumber *_customWidth;
}

+ (id)storageQuotaIncreasePromptConfigurationWithURL:(id)arg1 originDisplayName:(id)arg2 newQuota:(unsigned long long)arg3;
+ (id)plugInPromptConfigurationWithTitle:(id)arg1 message:(id)arg2 confirmButtonLabel:(id)arg3;
+ (id)openApplicationPromptConfigurationWithApplicationName:(id)arg1 originStringForAccessibility:(id)arg2;
+ (id)passDownloadBlockedPromptConfiguration;
+ (id)printSheetBlockedPromptConfiguration;
+ (id)mailPromptConfigurationWithOriginStringForAccessibility:(id)arg1;
+ (id)telephonyPromptConfigurationWithOriginStringForAccessibility:(id)arg1;
+ (id)_truncatedMessageForJavaScriptDialogWithMessage:(id)arg1;
+ (id)javaScriptPromptDialogConfigurationWithMessage:(id)arg1 defaultResponse:(id)arg2 originStringForAccessibility:(id)arg3;
+ (id)javaScriptConfirmDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2;
+ (id)javaScriptAlertDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2;
@property(readonly, nonatomic) NSNumber *customWidth; // @synthesize customWidth=_customWidth;
@property(readonly, copy, nonatomic) NSString *promptFieldDefaultResponse; // @synthesize promptFieldDefaultResponse=_promptFieldDefaultResponse;
@property(readonly, nonatomic) BOOL hasPromptField; // @synthesize hasPromptField=_hasPromptField;
@property(readonly, copy, nonatomic) NSString *originStringForAccessibility; // @synthesize originStringForAccessibility=_originStringForAccessibility;
@property(readonly, nonatomic) NSArray *buttonLabels; // @synthesize buttonLabels=_buttonLabels;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL shouldHideTabContent; // @synthesize shouldHideTabContent;
@property(readonly, nonatomic) long long dialogType; // @synthesize dialogType=_dialogType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTitle:(id)arg1 message:(id)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(BOOL)arg5 promptFieldDefaultResponse:(id)arg6 customWidth:(id)arg7 dialogType:(long long)arg8;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(BOOL)arg5 promptFieldDefaultResponse:(id)arg6 customWidth:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

