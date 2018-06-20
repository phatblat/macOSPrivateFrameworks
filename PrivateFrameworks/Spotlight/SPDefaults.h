//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface SPDefaults : NSObject
{
    long long _useCount;
    BOOL _showedFTE;
    BOOL _showedLearnMore;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    BOOL _spotEnabled;
    BOOL _highlightShownWithSpot;
    BOOL _parsecEnabled;
    BOOL _webSearchEnabled;
    BOOL _spotlightSuggestionsDisabled;
    BOOL _demoEnabled;
    BOOL _clearOnClose;
    BOOL _didShowFTE;
    BOOL _customAppPreview;
    BOOL _customFolderPreview;
    BOOL _reloadPrefs;
    long long _parsecMaxResults;
    long long _parsecMaxBingResults;
    NSArray *_parsecBlessedResults;
    NSString *_spotlightExtraQueryClause;
    NSString *_spotlightExtraQueryFlags;
    long long _maxResultsPerGroup;
}

+ (void)initialize;
+ (BOOL)isParsecEnabled;
+ (BOOL)isDeveloper;
+ (id)standardAppDefaults;
@property(getter=shouldReloadPrefs) BOOL reloadPrefs; // @synthesize reloadPrefs=_reloadPrefs;
@property(readonly) BOOL customFolderPreview; // @synthesize customFolderPreview=_customFolderPreview;
@property(readonly) BOOL customAppPreview; // @synthesize customAppPreview=_customAppPreview;
@property(readonly) long long maxResultsPerGroup; // @synthesize maxResultsPerGroup=_maxResultsPerGroup;
@property(readonly) NSString *spotlightExtraQueryFlags; // @synthesize spotlightExtraQueryFlags=_spotlightExtraQueryFlags;
@property(readonly) NSString *spotlightExtraQueryClause; // @synthesize spotlightExtraQueryClause=_spotlightExtraQueryClause;
@property(readonly) NSArray *parsecBlessedResults; // @synthesize parsecBlessedResults=_parsecBlessedResults;
@property(readonly) long long parsecMaxBingResults; // @synthesize parsecMaxBingResults=_parsecMaxBingResults;
@property(readonly) long long parsecMaxResults; // @synthesize parsecMaxResults=_parsecMaxResults;
@property BOOL didShowFTE; // @synthesize didShowFTE=_didShowFTE;
@property BOOL clearOnClose; // @synthesize clearOnClose=_clearOnClose;
@property(getter=isDemoEnabled) BOOL demoEnabled; // @synthesize demoEnabled=_demoEnabled;
@property(getter=areSpotlightSuggestionsDisabled) BOOL spotlightSuggestionsDisabled; // @synthesize spotlightSuggestionsDisabled=_spotlightSuggestionsDisabled;
@property(getter=isWebSearchEnabled) BOOL webSearchEnabled; // @synthesize webSearchEnabled=_webSearchEnabled;
@property(getter=isParsecEnabled) BOOL parsecEnabled; // @synthesize parsecEnabled=_parsecEnabled;
@property(getter=isHighlightShownWithSpot) BOOL highlightShownWithSpot; // @synthesize highlightShownWithSpot=_highlightShownWithSpot;
@property(getter=isSpotEnabled) BOOL spotEnabled; // @synthesize spotEnabled=_spotEnabled;
- (void).cxx_destruct;
@property BOOL showedFTE;
- (void)used;
- (void)_used;
- (long long)useCount;
@property(readonly) BOOL firstUse;
@property(readonly, getter=isWebSearchAllowed) BOOL webSearchAllowed;
@property(readonly, getter=isParsecAllowed) BOOL parsecAllowed;
@property(readonly) BOOL groupResults;
- (id)init;
- (void)reloadDefaults;
- (void)prefsNotificationReceived:(id)arg1;
@property BOOL showedLearnMore;
- (void)reloadPrefs;

@end

