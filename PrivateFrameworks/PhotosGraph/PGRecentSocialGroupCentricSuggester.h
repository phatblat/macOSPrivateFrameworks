//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import "PGCoordinatableSuggester.h"

@class NSArray, NSEnumerator, NSMutableSet, NSString, PGSuggestionOptions;

@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_allPotentialSuggestions;
    NSMutableSet *_usedPotentialSuggestions;
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;
    NSArray *_socialGroupPotentialSuggestions;
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;
    NSArray *_eligibleAssets;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (void)usePotentialSuggestions:(id)arg1;
- (id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)verifiedPersons;
- (id)potentialSuggestionsWithOptions:(id)arg1;
- (id)nextSocialGroupPotentialSuggestion;
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestion;
- (id)socialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

