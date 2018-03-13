//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCompletionListItem.h"

@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem>
{
    long long _matchLocation;
    NSString *_userInput;
    SFSearchResult *_sfSearchResultValue;
}

+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;
@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
- (void).cxx_destruct;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly, nonatomic, getter=isTopHit) BOOL topHit;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL matchLocationIsInURL;
- (id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end

