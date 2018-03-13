//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManager.h>

@class NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSString, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager
{
    BOOL _hasCommittedPartialCandidate;
    BOOL _hasBackspacedIntoInputString;
    int _lastCommittedCandidateType;
    NSMutableArray *_touchDataArray;
    NSArray *_clearedGeometryDataArray;
    NSArray *_clearedTouchDataArray;
    NSString *_currentClientIdentifier;
    NSString *_currentRecipientIdentifier;
    TIWordSearch *_wordSearch;
    TIWordSearchCandidateResultSet *_wordSearchCandidateResultSet;
    NSMutableArray *_geometryDataArray;
    NSMutableDictionary *_touchDownEvents;
    NSMutableDictionary *_touchUpEvents;
}

+ (Class)wordSearchClass;
+ (id)initializedClients;
+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (id)dummyTouchData;
+ (id)dummyGeometryData;
@property(readonly, nonatomic) NSMutableDictionary *touchUpEvents; // @synthesize touchUpEvents=_touchUpEvents;
@property(readonly, nonatomic) NSMutableDictionary *touchDownEvents; // @synthesize touchDownEvents=_touchDownEvents;
@property(readonly, nonatomic) NSMutableArray *geometryDataArray; // @synthesize geometryDataArray=_geometryDataArray;
@property(retain, nonatomic) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet; // @synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet;
@property(readonly, nonatomic) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
@property(nonatomic) int lastCommittedCandidateType; // @synthesize lastCommittedCandidateType=_lastCommittedCandidateType;
@property(nonatomic) BOOL hasBackspacedIntoInputString; // @synthesize hasBackspacedIntoInputString=_hasBackspacedIntoInputString;
@property(nonatomic) BOOL hasCommittedPartialCandidate; // @synthesize hasCommittedPartialCandidate=_hasCommittedPartialCandidate;
@property(copy, nonatomic) NSString *currentRecipientIdentifier; // @synthesize currentRecipientIdentifier=_currentRecipientIdentifier;
@property(copy, nonatomic) NSString *currentClientIdentifier; // @synthesize currentClientIdentifier=_currentClientIdentifier;
@property(retain, nonatomic) NSArray *clearedTouchDataArray; // @synthesize clearedTouchDataArray=_clearedTouchDataArray;
@property(retain, nonatomic) NSArray *clearedGeometryDataArray; // @synthesize clearedGeometryDataArray=_clearedGeometryDataArray;
- (void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2;
- (void)addProactiveTriggers:(id)arg1;
- (void *)mecabraCandidateRefFromCandidate:(id)arg1;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (void)updateDocumentContext;
- (id)handleKeyboardInput:(id)arg1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(BOOL)arg2;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (int)mecabraTextContentTypeFromTITextContentType:(id)arg1;
- (void)setLanguageModelAdaptationContext;
@property(readonly, nonatomic) BOOL supportsPerRecipientLearning;
- (BOOL)updateLanguageModelForKeyboardState;
- (BOOL)shouldUpdateLanguageModel;
- (id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2;
- (void)handlePerformBackgroundMaintenanceNotification;
- (id)inputsToReject;
- (id)wordSeparator;
- (void)resume;
- (void)suspend;
- (void)insertDummyTouchDataAtIndex:(unsigned long long)arg1;
- (void)insertDummyGeometryDataAtIndex:(unsigned long long)arg1;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)logCommittedCandidate:(id)arg1 partial:(BOOL)arg2;
- (void)logAllCandidates;
- (void)logDocumentContext;
- (void)logInputString;
- (void)saveTouchDataForEvent:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)touchDataForPathIndex:(long long)arg1;
- (long long)keyHitTest:(id)arg1;
- (BOOL)needsTouchEvents;
- (void)clearInput;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)savePartialGeometryData;
- (void)padGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSCharacterSet *validCharacterSetForAutocorrection;
- (struct _NSRange)analysisStringRange;
- (id)geometryModelData;
@property(readonly, nonatomic) NSMutableArray *touchDataArray; // @synthesize touchDataArray=_touchDataArray;
@property(readonly, nonatomic) struct __Mecabra *mecabra;
- (unsigned long long)autoquoteType;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

