//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACUIAccountDataclass, NSImage, NSString;

@protocol ACUIAccountDataclassDelegate <NSObject>

@optional
- (NSImage *)iconOverrideForDataclass:(ACUIAccountDataclass *)arg1;
- (BOOL)isGreyModeOnForDataclass:(ACUIAccountDataclass *)arg1;
- (void)didClickOptionsButtonForDataclass:(ACUIAccountDataclass *)arg1;
- (NSString *)optionButtonTitleForDataclass:(ACUIAccountDataclass *)arg1;
- (NSString *)statusStringForDataclass:(ACUIAccountDataclass *)arg1;
- (BOOL)isShowingConfigurationSpinnerForDataclass:(ACUIAccountDataclass *)arg1;
- (unsigned long long)stateOverrideForDataclass:(ACUIAccountDataclass *)arg1;
- (void)didToggleDataclass:(ACUIAccountDataclass *)arg1;
- (BOOL)willToggleDataclass:(ACUIAccountDataclass *)arg1;
@end
