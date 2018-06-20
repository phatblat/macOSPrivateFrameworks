//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet;

@interface HMDCloudChangeTree : HMFObject
{
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableArray *_objects;
    NSMapTable *_objectMap;
    NSMapTable *_recordMap;
    NSMapTable *_branchMap;
    NSSet *_validRootUUIDs;
}

+ (BOOL)modelTypeCanBeOrphaned:(id)arg1;
+ (id)shortDescription;
@property(retain, nonatomic) NSSet *validRootUUIDs; // @synthesize validRootUUIDs=_validRootUUIDs;
@property(retain, nonatomic) NSMapTable *branchMap; // @synthesize branchMap=_branchMap;
@property(retain, nonatomic) NSMapTable *recordMap; // @synthesize recordMap=_recordMap;
@property(retain, nonatomic) NSMapTable *objectMap; // @synthesize objectMap=_objectMap;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasValidChanges;
- (id)recordMapWithFilter:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *invalidCloudChanges;
@property(readonly, nonatomic) NSMutableArray *cloudChanges;
@property(readonly, nonatomic) NSArray *orphans;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *objectsWithPotentialChanges;
- (void)findAndMarkOrphanedBranches;
- (void)findAndDeletedChildren;
- (void)updateNode:(id)arg1 withCloudRecord:(id)arg2;
- (void)updateChange:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)updateRecordMapping:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (void)_updateNode:(id)arg1 oldRecordName:(id)arg2;
- (id)_findNodeWithRecordMapping:(id)arg1;
- (id)objectForRecordName:(id)arg1;
- (id)_objectForRecordName:(id)arg1;
- (id)objectForUUID:(id)arg1;
- (id)_objectForUUID:(id)arg1;
- (void)logChangeTreeWithIndent:(id)arg1;
- (id)description;
- (id)shortDescription;
- (id)initWithRootUUIDs:(id)arg1;
- (id)init;

@end

