//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSURL, PDFAKDocumentAdaptor, PDFForm, PDFOutline, PDFRenderingProperties, PDFSelection;

__attribute__((visibility("hidden")))
@interface PDFDocumentPrivate : NSObject
{
    struct CGPDFDocument *document;
    NSURL *documentURL;
    NSMutableArray *pages;
    NSMutableDictionary *pageIndices;
    NSMutableDictionary *pageDictionaryIndices;
    _Bool subclassOverridesPageAtIndex;
    id delegate;
    _Bool respondsToDidUnlock;
    _Bool respondsToDidFindMatch;
    _Bool respondsToDidBeginDocumentFind;
    _Bool respondsToDidEndDocumentFind;
    _Bool respondsToDidBeginPageFind;
    _Bool respondsToDidEndPageFind;
    _Bool respondsToDidMatchString;
    _Bool respondsToPrintJobTitle;
    _Bool respondsToClassForPage;
    _Bool respondsToClassForAnnotationType;
    _Bool respondsToClassForAnnotationClass;
    unsigned long long pageCount;
    int majorVersion;
    int minorVersion;
    _Bool isEncrypted;
    _Bool isUnlocked;
    int accessPermissions;
    _Bool allowsPrinting;
    _Bool allowsCopying;
    _Bool allowsDocumentChanges;
    _Bool allowsDocumentAssembly;
    _Bool allowsContentAccessibility;
    _Bool allowsCommenting;
    _Bool allowsFormFieldEntry;
    long long permission;
    NSString *ownerPassword;
    NSString *userPassword;
    NSDictionary *attributes;
    PDFOutline *outline;
    NSObject<OS_dispatch_queue> *textExtractionQueue;
    _Bool finding;
    int findModel;
    NSArray *findStrings;
    PDFSelection *findInstance;
    unsigned long long findOptions;
    long long findPageIndex;
    long long findCharIndex;
    long long lastFindPageIndex;
    long long lastFindCharIndex;
    NSMutableArray *findResults;
    PDFForm *formData;
    BOOL formDataLoaded;
    NSArray *documentCatalogMetadata;
    NSString *xmpNameSpace;
    NSString *xmpPrefix;
    NSString *xmpRootPath;
    id <PDFDocumentPageChangeDelegate> pageChangeDelegate;
    _Bool documentChanged;
    _Bool documentHasBurnInAnnotations;
    _Bool pagesChanged;
    NSIndexSet *initialBookmarkedPageIndices;
    NSMutableIndexSet *bookmarkedPages;
    PDFAKDocumentAdaptor *akDocumentAdaptor;
    id <PDFAKControllerDelegateProtocol> pdfAKControllerDelegateForDeferredSetup;
    PDFRenderingProperties *renderingProperties;
    _Bool useTaggedPDF;
    _Bool limitedSearch;
    NSObject<OS_dispatch_queue> *asyncSearchQueue;
    struct os_unfair_lock_s asyncSearchLock;
    id <PDFDocumentAsyncFindDelegate> asyncSearchDelegate;
    NSMutableArray *asyncSearchResults;
}

- (void).cxx_destruct;

@end
