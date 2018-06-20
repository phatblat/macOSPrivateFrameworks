//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, NSURL;

@interface SUCatalogFetch : NSObject
{
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    NSURL *_setCatalogURL;
    NSString *_previousEntityTag;
    BOOL _skipIfUnchanged;
    NSString *_currentEntityTag;
    BOOL _didUseDefaultURL;
    BOOL _didUseAppleDefaultProductionURL;
    NSError *_error;
}

+ (id)preferredCatalogURLsWithExtendedValidationEnforcement:(id *)arg1;
+ (BOOL)_isAppleSeedCatalogURL;
+ (BOOL)isUsingAppleSeedCatalogURL;
+ (id)defaultAppleCatalogURL;
+ (id)appleCatalogURL;
+ (id)catalogURL;
+ (id)priorProductionCatalogURLs;
- (id)error;
- (id)catalogEntityTag;
- (BOOL)isCatalogChanged;
- (BOOL)isAppleSeedCatalogURL;
- (BOOL)isEVProtected;
- (BOOL)isDefaultAppleProductionCatalogURL;
- (BOOL)isDefaultAppleCatalogURL;
- (id)systemConfiguredCatalogURL;
- (id)finalURL;
- (id)catalogDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 previousEntityTag:(id)arg2 skipIfUnchanged:(BOOL)arg3;
- (id)_fetchCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2 setURL:(id *)arg3 isAppleDefault:(char *)arg4 isAppleProductionDefault:(char *)arg5 usingURL:(id)arg6;
- (id)_fetchAppleCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2 setURL:(id *)arg3 isAppleProductionDefault:(char *)arg4;
- (id)_fetchDictionaryFromURL:(id)arg1 returningError:(id *)arg2;

@end
