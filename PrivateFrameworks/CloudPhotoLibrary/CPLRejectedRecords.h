//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject
{
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (void).cxx_destruct;
- (id)rejectedDescriptions;
- (unsigned long long)count;
- (BOOL)rejectsTheSameRecordsAs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)enumerateRecordsAndReasonsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;

@end

