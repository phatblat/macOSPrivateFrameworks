//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _INAggregator : NSObject
{
}

+ (void)resetSynapseVocabularyUpdate;
+ (void)logReceivedCount:(unsigned long long)arg1 ofVocabularyStringType:(long long)arg2;
+ (double)roundCount:(unsigned long long)arg1 toSignificantFigure:(unsigned long long)arg2;
+ (id)_distributionKeyForVocabularyStringType:(long long)arg1;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)arg1;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)arg1;

@end

