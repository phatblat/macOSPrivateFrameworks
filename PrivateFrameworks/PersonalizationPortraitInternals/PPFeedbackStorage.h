//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PPLocalContactStore, PPLocalEventStore, PPLocalLocationStore, PPLocalNamedEntityStore, PPLocalQuickTypeBroker, PPLocalTopicStore, PPSQLDatabase;

@interface PPFeedbackStorage : NSObject
{
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
}

+ (id)storeTypeDescription:(unsigned char)arg1;
+ (void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1;
- (void).cxx_destruct;
- (BOOL)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)processPendingFeedbackWithStoreType:(unsigned char)arg1 error:(id *)arg2;
- (void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6;
- (id)filteredLocationsFromPendingFeedbackItems:(id)arg1 maxCount:(unsigned long long)arg2 scoringDate:(id)arg3;
- (void)processFilteredPendingFeedbackWithItems:(id)arg1 timestamp:(double)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 store:(id)arg6;
- (id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7;
- (id)init;
- (id)eventStore;
- (id)contactStore;
- (id)quickTypeBroker;
- (id)locationStore;
- (id)topicStore;
- (id)namedEntityStore;

@end

