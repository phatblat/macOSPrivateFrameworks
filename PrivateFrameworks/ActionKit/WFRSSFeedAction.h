//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

#import "MWFeedParserDelegate.h"

@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>
{
    MWFeedParser *_parser;
}

@property(retain, nonatomic) MWFeedParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (void)feedParser:(id)arg1 didFailWithError:(id)arg2;
- (void)feedParserDidFinish:(id)arg1;
- (void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

