//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABGroup, ABPerson, ABUIController, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface ABMerger : NSObject
{
    ABUIController *_uiController;
    ABPerson *_meCard;
    ABGroup *_group;
    NSMutableArray *_allPeople;
    NSArray *_personProperties;
    NSMutableArray *_deletedPeople;
    NSMutableArray *_addedPeople;
    NSMutableArray *_updatedPeople;
    NSMutableArray *_updatedPeopleProperties;
    NSMutableSet *_updatedPeopleSet;
    NSMutableArray *_addedToGroup;
    NSMutableDictionary *_selfMergedPeople;
    NSMutableDictionary *_mergedIntoGroup;
}

- (id)updatedPeople;
- (id)addedPeople;
- (id)addedToGroup;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (id)duplicatesForPeople:(id)arg1;
- (id)updateCard:(id)arg1 withImportedCard:(id)arg2;
- (void)mergeSimilarMultiValuesForPerson:(id)arg1;
- (BOOL)findSimilarMultiValuesForPerson:(id)arg1;
- (id)emulateUpdateCard:(id)arg1 withImportedCard:(id)arg2 changes:(id)arg3;
- (id)allPersonProperties;
- (id)deletedPeople;
- (void)deletePerson:(id)arg1;
- (void)_addPeople:(id)arg1 usingAddressBook:(id)arg2;
- (void)addPerson:(id)arg1;
- (unsigned long long)_insertionIndexForPerson:(id)arg1;
- (id)allPeople;
- (void)setMeCard:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithUIController:(id)arg1 group:(id)arg2;

@end

