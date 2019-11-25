//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (WBSFaviconProviderNSStringExtras)
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)safari_localizedStringFromComponents:(id)arg1 usingConjunctionForFinalJoiner:(BOOL)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;
- (id)_safari_variantsOfURLStringInFaviconFormat:(BOOL)arg1;
- (id)safari_stringByFormattingForIconControllerDatabase;
- (id)safari_stringByFormattingForFaviconDatabase;
- (id)safari_urlStringVariantsForIconControllerDatabase;
- (id)safari_domainURLStringPrefixVariantsForFaviconDatabase;
- (id)safari_domainFaviconURLStringVariantsForFaviconDatabase;
- (id)safari_urlStringVariantsForFaviconDatabase;
- (id)stringByDeletingAllPathExtensions;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleTitleIgnoringFullURLString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingParenthesizedDomain;
- (BOOL)safari_looksLikeObscuredPassword;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;
- (id)safari_stringWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(unsigned long long)arg3;
- (id)safari_containedURLs;
@property(readonly, nonatomic) BOOL safari_isPDFMIMEType;
- (id)safari_sha256Hash;
- (id)safari_md5Hash;
- (BOOL)safari_isVisualDuplicateOfURLString:(id)arg1;
- (id)safari_canonicalURLForFrequentlyVisitedSites;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_scriptIfJavaScriptURLString;
- (BOOL)safari_isJavaScriptURLString;
- (BOOL)safari_isPathExtensionAllowedForAnalytics;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (BOOL)safari_hasDirectionalPrefix;
- (id)safari_stringByRemovingDirectionalPrefix;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (id)safari_userVisibleURL;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_bestLanguageTag;
- (id)safari_bestURLForUserTypedString;
- (id)safari_stringByDeletingTrailingSlash;
- (id)safari_stringByDeletingStartingSlash;
- (id)_stringByAbbreviatingTildeInPathForDirectory:(id)arg1;
- (id)safari_stringByAbbreviatingTildeInPathForUserHomeDirectory;
- (id)_stringByExpandingTildeInPathToDirectory:(id)arg1;
- (id)safari_stringByExpandingTildeInPathToUserHomeDirectory;
- (id)safari_fixedStringByExpandingTildeInPathToUserHomeDirectory;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_normalizedParsecInputString;
@end

