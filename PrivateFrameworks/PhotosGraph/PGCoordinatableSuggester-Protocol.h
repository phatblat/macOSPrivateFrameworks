//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PGSuggester.h"

@class PGSuggestionOptions;

@protocol PGCoordinatableSuggester <PGSuggester>
- (void)reset;
- (id <PGSuggestion>)nextSuggestion;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;
@end

