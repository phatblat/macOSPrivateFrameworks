//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFFeedbackListener.h"

@class NSString, PARSession;

@interface PRSFeedbackProxy : NSObject <SFFeedbackListener>
{
    PARSession *_listener;
}

@property(retain, nonatomic) PARSession *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)cardViewDidAppear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

