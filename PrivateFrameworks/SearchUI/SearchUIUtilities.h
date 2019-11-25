//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SearchUIUtilities : NSObject
{
}

+ (id)bundleIdentifierForApp:(unsigned long long)arg1;
+ (void)openApplicationWithBundleIdentifier:(id)arg1;
+ (id)imageForBlockedApp;
+ (BOOL)resultBlockedForScreenTime:(id)arg1;
+ (BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1;
+ (BOOL)resultIsSiriAction:(id)arg1;
+ (BOOL)appIsValidForBundleIdentifier:(id)arg1;
+ (id)pointerKeyMapTable;
+ (id)stringForSFRichTextArray:(id)arg1;
+ (id)stringForSFRichText:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (void)playNegativeHaptic;
+ (void)requestDeviceUnlock:(CDUnknownBlockType)arg1;
+ (void)requestDeviceUnlockWithSuccessHandler:(CDUnknownBlockType)arg1;
+ (BOOL)deviceIsAuthenticated;
+ (id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
+ (BOOL)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2;
+ (void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
+ (void)performOpenTask:(CDUnknownBlockType)arg1;
+ (id)openOptions;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)openPunchout:(id)arg1;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (BOOL)isPortraitForWindow:(id)arg1;
+ (BOOL)deviceSupportsRotation;
+ (BOOL)isWideScreen;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (id)hyphenatableStringForString:(id)arg1;
+ (BOOL)isLargeIpad;
+ (double)standardTableCellContentInset;
+ (double)onePixelForCurrentScreenResolution;
+ (BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg1;
+ (id)uiColorForSFColor:(id)arg1;
+ (struct CGSize)maxThumbnailSize;
+ (void)initialize;

@end

