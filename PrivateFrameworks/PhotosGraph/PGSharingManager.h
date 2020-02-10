//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>, PGManager;

@interface PGSharingManager : NSObject
{
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_defaultOptions;
- (void).cxx_destruct;
- (id)_learningStreamUtilsWithGraph:(id)arg1;
- (id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2;
- (BOOL)_canIncludeUnverified;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3;
- (id)suggestionSourcesForSharingStream:(unsigned long long)arg1;
- (id)coreDuetStream;
- (id)learningStream;
- (id)contextualStream;
- (id)presenceStream;
- (id)initWithManager:(id)arg1;

@end
