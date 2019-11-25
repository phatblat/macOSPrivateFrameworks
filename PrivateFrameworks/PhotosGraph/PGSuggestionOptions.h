//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSIndexSet;

@interface PGSuggestionOptions : NSObject
{
    BOOL _allowNotification;
    BOOL _shouldProcessExistingSuggestions;
    BOOL _discardGeneratedSuggestions;
    BOOL _ignoreCollisionsWithExistingSuggestions;
    BOOL _ignoreCollisionsWithSameBatchSuggestions;
    BOOL _generatesInvalidSuggestions;
    BOOL _computesReasons;
    NSDate *_localToday;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSDate *_universalEndDateForWholeLibrarySuggestions;
    unsigned long long _maximumNumberOfSuggestions;
    NSIndexSet *_suggestionTypeWhitelist;
    NSIndexSet *_suggestionSubtypeWhitelist;
    NSIndexSet *_suggestionTypeBlacklist;
    NSIndexSet *_suggestionSubtypeBlacklist;
}

@property(nonatomic) BOOL computeReasons; // @synthesize computeReasons=_computesReasons;
@property(nonatomic) BOOL generateInvalidSuggestions; // @synthesize generateInvalidSuggestions=_generatesInvalidSuggestions;
@property(retain, nonatomic) NSIndexSet *suggestionSubtypeBlacklist; // @synthesize suggestionSubtypeBlacklist=_suggestionSubtypeBlacklist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeBlacklist; // @synthesize suggestionTypeBlacklist=_suggestionTypeBlacklist;
@property(retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist; // @synthesize suggestionSubtypeWhitelist=_suggestionSubtypeWhitelist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeWhitelist; // @synthesize suggestionTypeWhitelist=_suggestionTypeWhitelist;
@property(nonatomic) BOOL ignoreCollisionsWithSameBatchSuggestions; // @synthesize ignoreCollisionsWithSameBatchSuggestions=_ignoreCollisionsWithSameBatchSuggestions;
@property(nonatomic) BOOL ignoreCollisionsWithExistingSuggestions; // @synthesize ignoreCollisionsWithExistingSuggestions=_ignoreCollisionsWithExistingSuggestions;
@property(nonatomic) BOOL discardGeneratedSuggestions; // @synthesize discardGeneratedSuggestions=_discardGeneratedSuggestions;
@property(nonatomic) BOOL shouldProcessExistingSuggestions; // @synthesize shouldProcessExistingSuggestions=_shouldProcessExistingSuggestions;
@property(nonatomic) BOOL allowNotification; // @synthesize allowNotification=_allowNotification;
@property(nonatomic) unsigned long long maximumNumberOfSuggestions; // @synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions;
@property(retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions; // @synthesize universalEndDateForWholeLibrarySuggestions=_universalEndDateForWholeLibrarySuggestions;
@property(retain, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(retain, nonatomic) NSDate *localToday; // @synthesize localToday=_localToday;
- (void).cxx_destruct;
- (id)init;

@end

