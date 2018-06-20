//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DRTopicInterestModeling.h"

@class NSObject<OS_dispatch_queue>, _DKKnowledgeStorage;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    _DKKnowledgeStorage *_storage;
}

+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicInteractionsAfter:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;
+ (id)topicSelectedCategory;
+ (id)topicPresentedCategory;
+ (id)topicActionCategoryType;
+ (id)newsStorageDirectory;
@property(retain) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)purgeEntriesEarlierThanDate:(id)arg1;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (id)initWithStorageDirectory:(id)arg1 localOnly:(BOOL)arg2;
- (id)initWithStorageDirectory:(id)arg1;
- (id)init;

@end

