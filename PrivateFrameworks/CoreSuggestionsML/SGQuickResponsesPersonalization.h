//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGQuickResponsesStore, _PASRng;

@interface SGQuickResponsesPersonalization : NSObject
{
    SGQuickResponsesStore *_store;
    _PASRng *_rng;
}

+ (id)augmentRecords:(id)arg1 selectedPseudocounts:(id)arg2 config:(id)arg3;
+ (id)deduplicatedReplyTextsForReplyPositions:(id)arg1 semanticClass:(unsigned long long)arg2 responseCount:(unsigned long long)arg3 config:(id)arg4;
- (void).cxx_destruct;
- (void)registerWrittenResponse:(id)arg1 config:(id)arg2;
- (void)registerSelectedResponse:(id)arg1 config:(id)arg2;
- (void)registerDisplayedResponses:(id)arg1 config:(id)arg2;
- (id)sortedReplyPositionsForSemanticClass:(unsigned long long)arg1 config:(id)arg2;
- (id)replyTextsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)initWithStore:(id)arg1 withRng:(id)arg2;
- (id)init;

@end

