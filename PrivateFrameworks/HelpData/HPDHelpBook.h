//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface HPDHelpBook : NSObject <NSCoding, NSSecureCoding>
{
    NSURL *_iconURL;
    NSURL *_remoteURL;
    NSArray *_indexPaths;
    NSString *_kbProductString;
    NSString *_kbURLString;
    NSString *_bookID;
    NSString *_path;
    NSString *_title;
    NSString *_accessPagePath;
    NSString *_exactMatchPath;
    NSString *_suggestionsPath;
    NSString *_topiclistTemplatePath;
    NSString *_topiclistCSSPath;
    NSString *_pathToLoadFrom;
    NSString *_localization;
    NSString *_bookVersion;
    NSString *_appBundleID;
    NSString *_appBundleVersion;
    NSString *_productName;
    NSString *_lastSuccessfullySetPath;
    NSString *_lastSuccessfullySetLocale;
    BOOL _usesExternalViewer;
    NSDictionary *_remoteBookInfo;
    unsigned long long _stringEncoding;
    unsigned int _type;
    unsigned short _alreadyCheckedMask;
}

+ (id)unversionedbookIDFromBookID:(id)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)_findIndicesInDirectoryWithURL:(id)arg1;
+ (id)_xmlDocumentForFileAtPath:(id)arg1;
+ (id)_URLFromBundleAtPath:(id)arg1 toPartialPath:(id)arg2 forLocalization:(id)arg3;
+ (id)_fullURLFromBasePath:(id)arg1 toPartialPath:(id)arg2;
+ (id)_determinePotentialAccessPages:(id)arg1 forDirectory:(id)arg2;
+ (id)_findAccessPageInDirectoryAtPath:(id)arg1;
+ (id)_parseMetasForXMLDocument:(id)arg1;
+ (BOOL)_appleTitleExistsInDoc:(id)arg1;
+ (unsigned long long)_encodingOfXMLDocument:(id)arg1;
+ (unsigned int)_determineTypeFromBundle:(id)arg1;
+ (id)type4BookWithID:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(readonly) BOOL usesExternalViewer; // @synthesize usesExternalViewer=_usesExternalViewer;
@property(copy) NSDictionary *remoteBookInfo; // @synthesize remoteBookInfo=_remoteBookInfo;
@property(retain) NSString *topiclistCSSPath; // @synthesize topiclistCSSPath=_topiclistCSSPath;
@property(retain) NSString *topiclistTemplatePath; // @synthesize topiclistTemplatePath=_topiclistTemplatePath;
@property(retain) NSString *accessPagePath; // @synthesize accessPagePath=_accessPagePath;
@property(retain) NSString *kbProductString; // @synthesize kbProductString=_kbProductString;
@property(retain) NSString *kbURLString; // @synthesize kbURLString=_kbURLString;
@property(retain) NSString *bookID; // @synthesize bookID=_bookID;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *productName; // @synthesize productName=_productName;
@property(readonly) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly) NSString *appBundleVersion; // @synthesize appBundleVersion=_appBundleVersion;
@property(readonly) NSString *bookVersion; // @synthesize bookVersion=_bookVersion;
@property(readonly) NSString *localization; // @synthesize localization=_localization;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(retain) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_populateFromKnownGoodDictionary:(id)arg1;
@property(readonly, copy) NSDictionary *bookshelfDictionary;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (long long)titleCompare:(id)arg1;
- (BOOL)isEqualToHelpBook:(id)arg1;
- (void)_verifyBundleDictionary:(id)arg1 containsAbsolutePathForKey:(id)arg2;
- (BOOL)_verifyString:(id)arg1 existsInDictionary:(id)arg2;
- (id)_dictionaryFromBundle:(id)arg1 withLocalization:(id)arg2;
- (id)_dictionaryFromAccessPage:(id)arg1 forBookType:(unsigned int)arg2;
- (BOOL)setPreferredLocalization:(id)arg1;
- (id)_pathToParentBundle;
- (id)_dictionaryForPath:(id)arg1 withLocalization:(id)arg2;
- (id)_determineAccessPagePathForBookType:(unsigned int)arg1;
- (id)_determineSuggestionsPlistPath;
- (void)_populateAppIDAndVersionFromAppBundle:(id)arg1;
- (id)_determineExactMatchPlistPath;
- (id)_determineDefaultIconURL;
- (id)pathToResourceAtRelativePath:(id)arg1;
- (BOOL)validateAppPathAndVersion;
- (id)bookIDFromAppHelp:(id)arg1;
@property(readonly) NSString *unversionedBookID;
@property(readonly) __weak NSString *resourcesRootPath;
@property(retain) NSString *pathToLoadFrom;
- (BOOL)_setPath:(id)arg1 withLocalization:(id)arg2;
- (BOOL)_configureType4BookFromDDMConfigDictionary:(id)arg1;
@property(retain) NSURL *iconURL;
@property(retain) NSString *suggestionsPath;
@property(retain) NSString *exactMatchPath;
- (void)_validateRemoteBookInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 andCacheDictionary:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

