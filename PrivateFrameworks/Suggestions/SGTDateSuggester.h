//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class NSArray, NSObject<OS_dispatch_queue>, NSSet;

@interface SGTDateSuggester : SGTSuggester
{
    NSArray *attributeNames;
    NSSet *attributeNamesAsSet;
    BOOL future;
    NSObject<OS_dispatch_queue> *queryQueue;
    long long queryID;
}

+ (id)dateCategory;
- (void).cxx_destruct;
- (id)_suggestionWithDisplayName:(id)arg1 attributeNames:(id)arg2 values:(id)arg3 scope:(long long)arg4 representedObjectAsPlist:(id)arg5;
- (id)_identifier;
- (id)defaultsDateResultsForInput:(id)arg1 attributeNames:(id)arg2;
- (id)nlSearchDateResultsForInput:(id)arg1 parseResult:(id)arg2 attributeNames:(id)arg3;
- (void)_incrementQueryID;
- (unsigned long long)_queryID;
- (void)setInput:(id)arg1 withGroup:(id)arg2;
- (id)_suggestionWithDay:(long long)arg1 month:(long long)arg2 year:(long long)arg3 alreadyFound:(id)arg4 attributeNames:(id)arg5;
- (void)dealloc;
- (id)initWithAttributeNames:(id)arg1 prefersFutureDates:(BOOL)arg2;
- (id)initWithAttributeNames:(id)arg1;

@end

