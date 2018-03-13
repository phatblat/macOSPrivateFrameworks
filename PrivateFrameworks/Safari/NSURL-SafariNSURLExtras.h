//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (SafariNSURLExtras)
+ (id)safari_spawnedTabParentURL;
+ (id)safari_readingListURL;
+ (id)safari_fileURLForNewTemporaryFileWithFileDescriptor:(int *)arg1;
+ (id)safari_fileURLForNewTemporaryFile;
+ (id)safari_errorPageResourcesURL;
+ (id)safari_aboutBlankURL;
- (BOOL)safari_isCandidateForTopHitDemotion;
- (BOOL)safari_isSubdomainOfDomain:(id)arg1;
- (id)safari_attributedStringWithSimplificationOptions:(unsigned long long)arg1 attributes:(id)arg2 attributesForDeemphasizedText:(id)arg3 attributesForHTTPSProtocol:(id)arg4;
- (struct _NSRange)_safari_rangeOfUserInfoInUserVisibleString;
- (id)safari_fullySimplifiedUserVisibleString;
- (id)safari_simplifiedUserVisibleStringUsingShowFullURLSimplications:(BOOL)arg1;
- (BOOL)safari_URLmatchesPattern:(id)arg1;
- (BOOL)safari_isSpawnedTabParentURL;
- (BOOL)safari_isURLPinnable;
- (BOOL)safari_isOfficialExtensionGalleryURL;
- (BOOL)safari_isInternalExtensionGalleryURL;
- (BOOL)safari_isInstalledPlugInsURL;
- (BOOL)safari_isAcknowledgmentsURL;
- (BOOL)safari_isReadingListURL;
- (id)safari_emailAddresses;
- (id)safari_highLevelDomain;
- (id)safari_fileSystemPath;
- (BOOL)safari_hasPassPathExtension;
- (id)safari_resourceSpecifier;
- (BOOL)safari_isSearchProviderQuery;
- (BOOL)safari_shouldBeReflectedInUnifiedField;
- (BOOL)safari_isDashboardURL;
- (BOOL)safari_isUserPreferredStartPageURL;
- (BOOL)safari_isStartPageURL;
- (BOOL)safari_isFavoritesURL;
- (BOOL)safari_isTopSitesURL;
- (BOOL)safari_isSafariResourceURL;
- (BOOL)safari_isSafariExtensionURL;
- (BOOL)safari_isReaderURL;
- (BOOL)safari_isHistoryURL;
- (BOOL)safari_isBookmarksURL;
- (BOOL)safari_isMailToURL;
- (BOOL)safari_isJavaScriptURL;
- (BOOL)safari_isErrorPageResourcesURL;
- (BOOL)safari_isAboutBlankURL;
- (BOOL)safari_isSecureURL;
- (BOOL)safari_isHTTPURL;
- (BOOL)safari_isHTTPSURL;
- (id)safari_URLByRemovingPathComponents;
- (id)safari_URLByLowercasingScheme;
- (id)safari_URLByRemovingFragment;
- (id)_safari_URLByTruncatingOneCharacterBeforeComponent:(long long)arg1;
- (id)safari_URLByRemovingUserAndPath;
@end

