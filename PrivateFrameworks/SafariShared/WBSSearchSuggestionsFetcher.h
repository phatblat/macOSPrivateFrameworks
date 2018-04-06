//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSOpenSearchURLTemplate;

@interface WBSSearchSuggestionsFetcher : NSObject
{
    unsigned long long _numberOfPendingFetches;
    BOOL _hasConnectionToSearchHelper;
    WBSOpenSearchURLTemplate *_suggestionsURLTemplate;
}

@property(readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate; // @synthesize suggestionsURLTemplate=_suggestionsURLTemplate;
- (void).cxx_destruct;
- (void)_fetchDidFinishWithResponse:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_searchHelperConnection;
- (void)disconnectFromSearchHelperIfNecessary;
- (void)cancelExistingSuggestionsRequest;
- (void)updateSuggestionsRequestWithSearchTerms:(id)arg1 userAgentString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isFetching) BOOL fetching;
- (id)initWithSuggestionsURLTemplate:(id)arg1;

@end
