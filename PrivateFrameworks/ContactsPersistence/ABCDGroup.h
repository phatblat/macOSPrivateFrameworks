//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsPersistence/ABCDRecord.h>

@class NSSet, NSString;

@interface ABCDGroup : ABCDRecord
{
    id _readWriteSharingACL;
    id _readSharingACL;
}

+ (id)contactMembershipPredicateWithUniqueId:(id)arg1;
+ (id)_table;
+ (id)abEntityName;
- (id)membersIncludingMembersOfSubgroups:(BOOL)arg1;
- (id)affectedStoresInMembershipPredicate;
- (id)contactMembershipRecursivePredicate;
- (void)removeMembers:(id)arg1;
- (void)addMembers:(id)arg1;
- (id)contactMembershipPredicate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
- (id)valueForKeyPath:(id)arg1;
- (id)stringForIndexing;
- (id)displayName;
- (id)sortingLastName;
- (id)sortingFirstName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(struct _NSRange *)arg2;

// Remaining properties
@property(readonly, nonatomic) NSSet *contacts; // @dynamic contacts;
@property(retain, nonatomic) NSString *nameNormalized; // @dynamic nameNormalized;
@property(retain, nonatomic) NSString *primitiveName; // @dynamic primitiveName;

@end

