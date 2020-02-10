//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSCache, NSError, NSSet, NSString;

@interface KHThemeProvider : NSObject
{
    NSString *_title;
    NSString *_themeDescription;
    NSCache *_categoryBelongCache;
    NSCache *_previewImagesByProductCode;
    NSSet *_productCodes;
    NSString *_themeIdentifier;
    NSString *_themePreviewIdentifier;
    NSString *_themeBundleIdentifier;
    NSString *_themePreviewBundleIdentifier;
    id <KHThemeManagerSource> _source;
    id _context;
    NSError *_lastError;
}

+ (id)defaultSortDescriptors;
+ (id)_bulkDownload:(BOOL)arg1 forThemeProviders:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)bulkDownloadAndPrepareThemePreviewsForUse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)bulkDownloadAndPrepareThemesForUse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <KHThemeManagerSource> source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *themePreviewBundleIdentifier; // @synthesize themePreviewBundleIdentifier=_themePreviewBundleIdentifier;
@property(retain, nonatomic) NSString *themeBundleIdentifier; // @synthesize themeBundleIdentifier=_themeBundleIdentifier;
@property(readonly) NSString *themePreviewIdentifier; // @synthesize themePreviewIdentifier=_themePreviewIdentifier;
@property(readonly) NSString *themeIdentifier; // @synthesize themeIdentifier=_themeIdentifier;
- (void).cxx_destruct;
@property(readonly) NSBundle *themePreviewBundle;
@property(readonly) NSBundle *themeBundle;
@property(readonly) NSSet *productCodes;
@property(readonly) long long projectType;
@property(readonly) NSString *themeDescription;
@property(readonly) NSString *title;
- (id)description;
- (id)downloadAndPrepareThemeForUse:(CDUnknownBlockType)arg1;
- (void)updateThemeLocal;
- (void)updateThemePreviewLocal;
@property(readonly) BOOL isThemePreviewValid;
@property(readonly) BOOL isThemeValid;
@property(readonly) BOOL isThemePreviewLocal;
@property(readonly) BOOL isThemeLocal;
- (id)init;
- (id)initWithSource:(id)arg1 themeIdentifier:(id)arg2 themePreviewIdentifier:(id)arg3;
- (id)themeDatabaseURL;
- (id)records;
- (id)catalog;

@end
