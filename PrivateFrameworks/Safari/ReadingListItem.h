//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FetchableItem.h"

@class FaviconRequestsController, NSArray, NSDate, NSImage, NSMutableDictionary, NSString, NSURL, WebBookmarkLeaf;

__attribute__((visibility("hidden")))
@interface ReadingListItem : NSObject <FetchableItem>
{
    WebBookmarkLeaf *_bookmark;
    BOOL _hasDefaultSiteIcon;
    BOOL _isReaderAvailable;
    BOOL _isFetchInProgress;
    NSMutableDictionary *_pageURLStringToPageNumberMap;
    FaviconRequestsController *_requestsController;
    NSImage *_icon;
    NSImage *_lastRetrievedFallbackIcon;
}

+ (unsigned long long)firstPageNumber;
+ (id)keyPathsForValuesAffectingUnread;
+ (id)keyPathsForValuesAffectingHasDefaultSiteIcon;
+ (id)keyPathsForValuesAffectingIcon;
@property(retain, nonatomic) NSImage *lastRetrievedFallbackIcon; // @synthesize lastRetrievedFallbackIcon=_lastRetrievedFallbackIcon;
@property(nonatomic) BOOL hasDefaultSiteIcon; // @synthesize hasDefaultSiteIcon=_hasDefaultSiteIcon;
@property(readonly, nonatomic) WebBookmarkLeaf *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) BOOL isReaderAvailable; // @synthesize isReaderAvailable=_isReaderAvailable;
@property(nonatomic) BOOL isFetchInProgress; // @synthesize isFetchInProgress=_isFetchInProgress;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeNonSyncAttributeValueForKey:(id)arg1;
- (void)_setExtraNonSyncAttributeValue:(id)arg1 forKey:(id)arg2 shouldSuppressChangeNotification:(BOOL)arg3;
- (void)setExtraNonSyncAttributeValue:(id)arg1 forKey:(id)arg2;
- (void)setExtraAttributeValue:(id)arg1 forKey:(id)arg2;
- (id)extraNonSyncAttributeValueForKey:(id)arg1;
- (id)extraAttributeValueForKey:(id)arg1;
- (void)resetImageURLIconFetchAndOfflineArchiveRequestState;
- (id)urlStringFromPageNumber:(unsigned long long)arg1;
- (unsigned long long)pageNumberFromURLString:(id)arg1;
- (void)addURLStringForAdditionalPage:(id)arg1;
- (void)clearURLStringsForAdditionalPages;
- (void)removeDateLastViewed;
- (void)didFailFetchingItemWithResult:(int)arg1;
- (void)updateWithFetchedInfo:(id)arg1;
@property(nonatomic, getter=isUnread) BOOL unread;
@property(retain, nonatomic) NSURL *leadingImageURL;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL didAttemptToFetchIconFromImageURL;
@property(nonatomic) BOOL didUserExplicitlyRequestOfflineArchive;
@property(nonatomic) BOOL addedLocally;
@property(readonly, nonatomic) BOOL needsInfoUpdated;
@property(readonly, nonatomic) NSArray *urlStringsForAdditionalPages;
@property(readonly, nonatomic) BOOL hasErrorDuringFetch;
@property(readonly, nonatomic) unsigned long long numberOfFailedLoadsWithUnknownOrNonRecoverableError;
@property(nonatomic) int fetchResult;
@property(nonatomic) BOOL isArchiveOnDisk;
@property(copy, nonatomic) NSDate *dateAdded;
@property(copy, nonatomic) NSDate *dateLastFetched;
@property(copy, nonatomic) NSDate *dateLastViewed;
- (void)removeLocalPreviewText;
@property(copy, nonatomic) NSString *localPreviewText;
- (void)removeLocalTitle;
@property(copy, nonatomic) NSString *localTitle;
@property(copy, nonatomic) NSString *siteName;
@property(copy, nonatomic) NSString *previewText;
@property(readonly, nonatomic) NSString *domainString;
@property(copy, nonatomic, setter=setURLString:) NSString *urlString;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *UUID;
- (id)initAsNewItemWithBookmark:(id)arg1;
- (id)initAsExistingItemWithBookmark:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

