//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChineseEngine/LiveConversionState.h>

#import "IMKCandidateMenuDelegate.h"

@class NSString;

@interface LiveConversionStateShowCandidates : LiveConversionState <IMKCandidateMenuDelegate>
{
}

- (id)getCandidatesFrom:(id)arg1 withOnlyPhraseCandidates:(BOOL)arg2;
- (id)analysisStringsFrom:(void *)arg1 withMaxNumberOfWordsBeforeCursor:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (void)didEnterWithPreviousState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
