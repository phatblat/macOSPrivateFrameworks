//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMStore;

@interface REMListsDataView : NSObject
{
    REMStore *_store;
}

+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3;
+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedExternalIdentifiers:(id)arg4;
+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedListIDs:(id)arg4;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)fetchDefaultListWithError:(id *)arg1;
- (id)fetchEligibleDefaultListsWithError:(id *)arg1;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchListWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchListsInGroup:(id)arg1 error:(id *)arg2;
- (id)fetchListsInAccount:(id)arg1 error:(id *)arg2;
- (id)initWithStore:(id)arg1;
- (id)fetchListsWithExternalIdentifiers:(id)arg1 inAccount:(id)arg2 error:(id *)arg3;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id *)arg3;
- (id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchListsIncludingMarkedForDeleteWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id *)arg2;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id *)arg3;

@end

