//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGSuggestionsServiceContactsProtocol.h"
#import "SGSuggestionsServiceEventsProtocol.h"
#import "SGSuggestionsServiceFidesProtocol.h"
#import "SGSuggestionsServiceInternalProtocol.h"
#import "SGSuggestionsServiceMailProtocol.h"

@class NSString, SGDaemonConnection, _PASLock;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol>
{
    SGDaemonConnection *_daemonConnection;
    id <SGDSuggestManagerAllProtocol> _managerForTesting;
    BOOL _keepDirty;
    NSString *_machServiceName;
    BOOL _queuesRequestsIfBusy;
    _PASLock *_cacheLock;
}

+ (id)wantedSearchableItemsFromItems:(id)arg1;
+ (id)filteredSearchableItemsFromItems:(id)arg1;
+ (BOOL)isHarvestingSupported;
+ (void)prepareForQuery;
+ (id)serviceForMessages;
+ (id)serviceForFides;
+ (id)serviceForInternal;
+ (id)serviceForEvents;
+ (id)serviceForContacts;
+ (id)serviceForMail;
+ (void)initialize;
- (void).cxx_destruct;
- (void)suggestionsFromMockData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)sleepWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)sleep:(id *)arg1;
- (void)daemonExitWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)daemonExit:(id *)arg1;
- (void)keepDirty:(BOOL)arg1;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)deleteCloudKitZoneWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)sendRTCLogs:(id *)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)removeAllStoredPseudoContacts:(id *)arg1;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)drainQueueCompletely:(id *)arg1;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)keysForSchemas:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)spotlightObserver;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id *)arg3;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)messagesToRefreshWithError:(id *)arg1;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (BOOL)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSearchableItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)addSearchableItems:(id)arg1 error:(id *)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 error:(id *)arg3;
- (void)rejectContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)rejectRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectRecord:(id)arg1 error:(id *)arg2;
- (void)rejectContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectContact:(id)arg1 error:(id *)arg2;
- (void)rejectEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)confirmRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmRecord:(id)arg1 error:(id *)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmContact:(id)arg1 error:(id *)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectEvent:(id)arg1 error:(id *)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmEvent:(id)arg1 error:(id *)arg2;
- (void)originFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)originFromRecordId:(id)arg1 error:(id *)arg2;
- (void)eventFromUniqueId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromUniqueId:(id)arg1 error:(id *)arg2;
- (void)eventFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromRecordID:(id)arg1 error:(id *)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)emailAddressIsSignificant:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordIds:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordId:(id)arg1 error:(id *)arg2;
- (void)contactFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactFromRecordID:(id)arg1 error:(id *)arg2;
- (id)contactFromRecordID:(id)arg1;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesOrLookupIdByEmailAddress:(id)arg1 error:(id *)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id *)arg4;
- (void)refreshCacheSnapshot;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id *)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allEventsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(CDUnknownBlockType)arg2;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)deregisterEventsChangeObserverWithToken:(id)arg1;
- (id)registerEventsChangeObserver:(CDUnknownBlockType)arg1;
- (BOOL)deregisterContactsChangeObserverWithToken:(id)arg1;
- (id)registerContactsChangeObserver:(CDUnknownBlockType)arg1;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allContactsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id *)arg2;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)prepareForRealtimeExtraction:(id *)arg1;
- (void)setQueuesRequestsIfBusy:(BOOL)arg1;
- (BOOL)queuesRequestsIfBusy;
- (BOOL)isEnabledWithError:(id *)arg1;
- (void)setManagerForTesting:(id)arg1;
- (id)_remoteSuggestionManager;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;

@end

