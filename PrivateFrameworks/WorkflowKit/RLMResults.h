//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "RLMCollection.h"
#import "RLMFastEnumerable.h"
#import "RLMThreadConfined_Private.h"

@class NSString, RLMRealm;

@interface RLMResults : NSObject <RLMThreadConfined_Private, RLMFastEnumerable, RLMCollection, NSFastEnumeration>
{
    struct Results _results;
    RLMRealm *_realm;
    struct RLMClassInfo *_info;
    BOOL _optional;
}

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;
+ (id)emptyDetachedResults;
+ (id)resultsWithObjectInfo:(struct RLMClassInfo *)arg1 results:(struct Results *)arg2;
@property(readonly, nonatomic) RLMRealm *realm; // @synthesize realm=_realm;
@property(nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id objectiveCMetadata;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
@property(readonly, nonatomic, getter=isAttached) BOOL attached;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (id)fastEnumerator;
- (struct TableView)tableView;
@property(readonly, copy) NSString *description;
- (void)deleteObjectsFromRealm;
- (id)averageOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (id)aggregate:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 returnNilForEmpty: /* Error: Ran out of types for this method. */;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)distinctResultsUsingKeyPaths:(id)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (id)objectsWhere:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)objectsWhere:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_aggregateForKeyPath:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 returnNilForEmpty: /* Error: Ran out of types for this method. */;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (unsigned long long)indexOfObjectWhere:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (unsigned long long)indexOfObjectWhere:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) struct RLMClassInfo *objectInfo;
@property(readonly, copy, nonatomic) NSString *objectClassName;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
- (id)subresultsWithResults:(struct Results)arg1;
- (id)initWithObjectInfo:(struct RLMClassInfo *)arg1 results:(struct Results *)arg2;
- (id)initWithResults:(struct Results)arg1;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

