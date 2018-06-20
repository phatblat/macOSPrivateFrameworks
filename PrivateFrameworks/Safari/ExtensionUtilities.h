//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ExtensionUtilities : NSObject
{
}

+ (BOOL)extractExtensionArchiveAtURL:(id)arg1 toDestinationURL:(id)arg2;
+ (id)appendSubpathToURL:(id)arg1 pathString:(id)arg2 isDirectory:(BOOL)arg3;
+ (void)showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)arg1 extensionIdentifier:(id)arg2;
+ (id)accessLevelStringForAccessLevel:(int)arg1;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)arg1 allowedDomains:(Vector_851fab59)arg2 hasInjectedContent:(BOOL)arg3;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)arg1 allowedDomains:(Vector_851fab59)arg2 allowedDomainsForHeaderInjection:(Vector_851fab59)arg3 hasInjectedContent:(BOOL)arg4;
+ (id)userVisibleWebsiteAccessForContentBlocker;

@end

