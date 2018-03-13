//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface ExternalURLNavigationHandler : NSObject
{
    unsigned long long _requestGroup;
    BOOL _shouldSuppressAutomaticExternalSchemeNavigations;
    NSDate *_recentExternalSchemeNavigationWindowStart;
    unsigned long long _recentExternalSchemeNavigations;
}

+ (BOOL)_applicationAtURLIsSignedByApple:(id)arg1;
- (void).cxx_destruct;
- (void)reset;
- (void)_enqueueOrPresentDialogWithConfiguration:(id)arg1 externalURL:(id)arg2 applicationURL:(id)arg3 tabDialogPresenter:(id)arg4;
- (long long)_URLTypeForURL:(id)arg1;
- (id)_originStringFromSourceFrame:(id)arg1 externalURLType:(long long)arg2;
- (void)_determineIfPageIsTryingToSpamUserWithExternalSchemeNavigations;
- (long long)handleNavigationToExternalURL:(id)arg1 withTabDialogPresenter:(id)arg2 sourceFrame:(id)arg3 userInitiatedAction:(id)arg4;

@end

