//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFAccessResourcePerWorkflowState.h"

@class NSMapTable, NSSet, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState>
{
    NSSet *_entries;
    NSMapTable *_entriesMapTable;
}

+ (BOOL)supportsSecureCoding;
+ (Class)entryTypeClass;
@property(retain, nonatomic) NSMapTable *entriesMapTable; // @synthesize entriesMapTable=_entriesMapTable;
@property(readonly, nonatomic) NSSet *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasUndeterminedEntries;
@property(readonly, nonatomic) BOOL hasDeniedEntries;
- (id)stateBySettingAllEntriesAsAuthorized:(BOOL)arg1;
- (id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)arg1;
- (id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1;
- (id)stateByPerformingUnionWithState:(id)arg1;
- (id)init;
- (id)initWithEntries:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

