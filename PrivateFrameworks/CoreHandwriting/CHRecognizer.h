//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDrawing, NSCharacterSet, NSLocale, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CHRecognizer : NSObject
{
    BOOL _saveDrawingUntilNextCandidateAccepted;
    int _recognitionType;
    int _recognitionMode;
    unsigned long long _maxRecognitionResultCount;
    NSCharacterSet *_activeCharacterSet;
    struct CHNeuralNetwork *_engine;
    struct CHNeuralNetwork *_freeformEngine;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    struct Network *_radicalClusterFST;
    struct Network *_formatGrammarFST;
    NSLocale *_locale;
    void *_languageModel;
    void *_characterLanguageModel;
    struct __Mecabra *_mecabra;
    void *_staticLexicon;
    void *_dynamicLexicon;
    struct _LXLexicon *_customLexicon;
    struct _CFBurstTrie *_ovsTrie;
    NSURL *_learningDictionaryURL;
    CHDrawing *_savedDrawing;
    NSString *_savedTop1CandidateString;
    CHDrawing *_cachedDrawing;
    struct VariantMap *_transliterationVariantMap;
    void **_icuTransliterator;
    unsigned long long _lastCharacterStrokeCount;
    NSMutableIndexSet *_lastCharacterStrokeIndexes;
    struct CGSize _minimumDrawingSize;
    map_cde2a89c _cachedResults;
}

+ (unsigned long long)_decodeTempDelayedSegmentID:(unsigned long long)arg1;
+ (unsigned long long)_encodeTempDelayedSegmentID:(unsigned long long)arg1;
+ (double)_computeEditPenalizationFromString:(id)arg1 toReferenceString:(id)arg2 withSuffix:(id)arg3 withCaseSensitivity:(BOOL)arg4 withFirstLetterCaseSensitivity:(BOOL)arg5 withDiacriticSensitivity:(BOOL)arg6 withDiacriticsCharSet:(id)arg7 withConsumableStrokesCharSet:(id)arg8 outputSuffix:(id *)arg9 lexiconExtraCharacters:(id *)arg10 firstLetterCaseFlipped:(char *)arg11;
+ (id)wordsForCustomLexicon;
@property(retain, nonatomic) NSMutableIndexSet *lastCharacterStrokeIndexes; // @synthesize lastCharacterStrokeIndexes=_lastCharacterStrokeIndexes;
@property(nonatomic) unsigned long long lastCharacterStrokeCount; // @synthesize lastCharacterStrokeCount=_lastCharacterStrokeCount;
@property(nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property(nonatomic) struct VariantMap *transliterationVariantMap; // @synthesize transliterationVariantMap=_transliterationVariantMap;
@property(nonatomic) map_cde2a89c cachedResults; // @synthesize cachedResults=_cachedResults;
@property(copy, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property(nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // @synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted;
@property(copy, nonatomic) NSString *savedTop1CandidateString; // @synthesize savedTop1CandidateString=_savedTop1CandidateString;
@property(copy, nonatomic) CHDrawing *savedDrawing; // @synthesize savedDrawing=_savedDrawing;
@property(retain, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property(nonatomic) struct _CFBurstTrie *ovsTrie; // @synthesize ovsTrie=_ovsTrie;
@property(nonatomic) struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) void *dynamicLexicon; // @synthesize dynamicLexicon=_dynamicLexicon;
@property(nonatomic) void *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) struct __Mecabra *mecabra; // @synthesize mecabra=_mecabra;
@property(nonatomic) void *characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property(nonatomic) void *languageModel; // @synthesize languageModel=_languageModel;
@property(nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) struct Network *formatGrammarFST; // @synthesize formatGrammarFST=_formatGrammarFST;
@property(nonatomic) struct Network *radicalClusterFST; // @synthesize radicalClusterFST=_radicalClusterFST;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property(nonatomic) struct CHNeuralNetwork *freeformEngine; // @synthesize freeformEngine=_freeformEngine;
@property(nonatomic) struct CHNeuralNetwork *engine; // @synthesize engine=_engine;
@property(nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)getMinimumDrawingSize;
- (void)_rescoreCandidatesWithLanguageModel:(vector_06f11b7b *)arg1 history:(id)arg2;
- (unsigned int)_tokenIDForUNKCharacterString:(id)arg1;
- (void)_applyTransliterationAndSyntheticCandidates:(vector_06f11b7b *)arg1;
- (id)_applySentenceTransliterationCandidates:(unsigned short *)arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (void)_adjustCandidatesForConfusableCharacters:(vector_06f11b7b *)arg1;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)_subStrokeSegmentationPointsForDrawing:(id)arg1;
- (id)_performMultipleCharacterRecognition:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)_extractSubStrokeSegmentsFromSegments:(id)arg1 withDelayedStrokeSegments:(id *)arg2 fromDelayedSegmentIDs:(vector_eb9481f9)arg3;
- (id)recognitionResultsForMultipleCharacterDrawing:(id)arg1 sortedStrokeIndices:(vector_eb9481f9 *)arg2 subStrokeSegments:(id)arg3 delayedSubStrokeSegments:(id)arg4 network:(struct Network *)arg5 boundsAtNode:(vector_ea45b3ba *)arg6 options:(id)arg7 shouldCancel:(CDUnknownBlockType)arg8;
- (void)_filterNonHumanFriendlyCandidates:(id)arg1;
- (void)_adjustResultsForConfusableCharacters:(id)arg1;
- (id)postProcessLatticePaths:(const vector_7a3f6ffc *)arg1 history:(id)arg2 activeHistoryRange:(struct _NSRange)arg3;
- (id)_wordLXLexiconCorrectionForString:(id)arg1 withLexicon:(struct _LXLexicon *)arg2 consumableStrokesSet:(id)arg3 resultWordID:(unsigned int *)arg4;
- (id)_wordLMLexiconCorrectionForString:(id)arg1 withLexicon:(void *)arg2 consumableStrokesSet:(id)arg3 resultWordID:(unsigned int *)arg4;
- (id)postProcessMultiWordsLatticePaths:(const vector_7a3f6ffc *)arg1 withMaximumResults:(unsigned long long)arg2;
- (BOOL)_shouldCapitalizeGivenHistory:(id)arg1;
- (BOOL)_updateResults:(id)arg1 string:(id)arg2 score:(double)arg3 lexicalEntry:(BOOL)arg4 patternEntry:(BOOL)arg5;
- (id)bestNetworkPaths:(struct Network *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 count:(unsigned long long)arg4 staticLexiconCursor:(void *)arg5 customLexiconCursor:(struct _LXCursor *)arg6 patternCursor:(struct PatternGraph *)arg7 history:(id)arg8 activeHistoryRange:(struct _NSRange)arg9 mecabraIDs:(vector_12bd641b *)arg10 numExpectedDelayedStrokes:(unsigned long long)arg11;
- (double)_calculateJointWordProbabilityForString:(id)arg1 withPatterns:(id)arg2;
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 options:(id)arg2;
- (void)_removeOVSResults:(id)arg1 withHistory:(id)arg2;
- (id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2;
- (id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (id)lineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)triangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)starCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (void)endpointsForDrawing:(id)arg1 startLocation:(struct CGPoint *)arg2 endLocation:(struct CGPoint *)arg3;
- (id)characterSetForStrings:(id)arg1;
- (id)supportedStrings;
- (id)supportedCharacterSet;
- (id)sketchCodeForDescription:(id)arg1;
- (id)sketchDescriptionForCode:(int)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)strokeIndexesForLastCharacter;
- (BOOL)isMecabraRareEntry:(id)arg1;
- (vector_de520796)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4;
- (vector_de520796)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3;
- (void)candidateAccepted:(void *)arg1;
- (void)candidatesCleared;
- (void)_buildCustomLexiconFromWords:(id)arg1;
- (void)updateUserDictionaryLexicon:(id)arg1;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)logCandidateIfAppropriate:(void *)arg1;
- (void)releaseLMResources;
- (void)_loadEngineModel;
- (BOOL)_isLocaleSupported:(id)arg1;
- (void)_loadMecabraIfNeeded;
- (void)_prepareStaticLexicon;
- (void)_prepareLanguageModel;
- (void)_prepareCHCharacterLanguageModel;
- (id)_alternativeInterpretationsForString:(id)arg1;
- (id)_transliterationVariantsForString:(id)arg1;
- (id)transliterationVariantsForString:(id)arg1;
- (BOOL)_isOVSString:(id)arg1;
- (BOOL)isOVSString:(id)arg1;
- (id)obfuscateString:(id)arg1;
- (void)_prepareOVSTrie;
- (void)_prepareTransliterationVariantMap;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3 learningDictionaryURL:(id)arg4;
- (id)defaultPunctuationResultsForRecognitionType:(int)arg1 withStrokeCount:(unsigned long long)arg2;

@end

