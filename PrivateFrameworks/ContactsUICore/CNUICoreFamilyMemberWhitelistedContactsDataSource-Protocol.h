//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNUICoreFamilyMemberContactItem, NSArray;

@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>
@property(readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property(readonly, nonatomic) NSArray *familyMemberContactItems;
@property(readonly, nonatomic) long long fetchStatus;
@property(nonatomic) __weak id <CNUICoreFamilyMemberContactsObserver> observer;
- (void)finishWhitelistedContactsTasks;
- (CNContact *)contactRepresentingItem:(CNUICoreFamilyMemberContactItem *)arg1;
- (void)updateWhitelistByRemovingContacts:(NSArray *)arg1;
- (void)updateWhitelistByUpdatingContacts:(NSArray *)arg1;
- (void)updateWhitelistByAddingContacts:(NSArray *)arg1;
@end

