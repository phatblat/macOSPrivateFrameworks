//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWDServerConnection, NSMutableDictionary;

@interface WBSAnalyticsLogger : NSObject
{
    NSMutableDictionary *_pageLoadStartTimes;
    AWDServerConnection *_awdServer;
}

+ (id)sharedLogger;
@property(readonly, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 error:(id)arg2;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(BOOL)arg1;
- (void)didToggleGloballyUseAutomaticReader:(BOOL)arg1;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(BOOL)arg5;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(BOOL)arg3;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(BOOL)arg4;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(BOOL)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg1 showingPreviouslyCustomizedSet:(BOOL)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg1;
- (void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1;
- (void)safeBrowsingWarningPageShown:(int)arg1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (BOOL)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

