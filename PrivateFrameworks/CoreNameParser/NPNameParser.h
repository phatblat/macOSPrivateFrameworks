//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPHMMClassifier, NPNameComponentsData;

@interface NPNameParser : NSObject
{
    double _confidenceThreshold;
    NPNameComponentsData *_nameComponentsData;
    NPHMMClassifier *_classifier;
}

@property(retain) NPHMMClassifier *classifier; // @synthesize classifier=_classifier;
- (void).cxx_destruct;
- (struct _CFBurstTrie *)sharedNameFrequencyTrieRef;
- (id)normalizedAffix:(id)arg1;
- (BOOL)isSuffix:(id)arg1;
- (BOOL)isPrefix:(id)arg1;
- (id)normalizeFullname:(id)arg1;
- (id)parseKoreanName:(id)arg1 normalize:(BOOL)arg2;
- (id)parseKoreanName:(id)arg1;
- (id)parseJapaneseName:(id)arg1 normalize:(BOOL)arg2;
- (id)parseJapaneseName:(id)arg1;
- (id)parseChineseName:(id)arg1 normalize:(BOOL)arg2;
- (id)parseChineseName:(id)arg1;
- (id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5;
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(BOOL)arg2 score:(double *)arg3;
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1;
- (id)parseLatinName:(id)arg1 score:(double *)arg2;
- (id)personNameComponentsFromString:(id)arg1;
- (unsigned long long)namingTraditionForName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

