//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> _match;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float weight;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (id)initWithWBSBookmarkAndHistoryCompletionMatch:(id)arg1 userInput:(id)arg2;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_ba1e7e0b *)arg1 userInput:(id)arg2;

@end
