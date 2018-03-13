//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, TICharacterSetDescription, TIKeyEventMap, TIKeyboardBehaviors, TIKeyboardCandidate;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding>
{
    TIKeyboardBehaviors *_keyboardBehaviors;
    union {
        long long integerValue;
        struct {
            unsigned int canHandleKeyHitTest:1;
            unsigned int ignoresDeadKeys:1;
            unsigned int shouldExtendPriorWord:1;
            unsigned int suppliesCompletions:1;
            unsigned int supportsNumberKeySelection:1;
            unsigned int supportsSetPhraseBoundary:1;
            unsigned int suppressCompletionsForFieldEditor:1;
            unsigned int usesAutoDeleteWord:1;
            unsigned int usesCandidateSelection:1;
            unsigned int commitsAcceptedCandidate:1;
            unsigned int nextInputWouldStartSentence:1;
            unsigned int inputStringIsExemptFromChecker:1;
            unsigned int suppressPlaceholderCandidate:1;
            unsigned int usesAutocorrectionLists:1;
            unsigned int autoquoteType:2;
        } fields;
    } _mask;
    BOOL _shouldAddModifierSymbolsToWordCharacters;
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    NSString *_wordSeparator;
    unsigned long long _inputCount;
    unsigned long long _inputIndex;
    NSString *_inputString;
    TIKeyEventMap *_keyEventMap;
    NSString *_replacementForDoubleSpace;
    NSString *_shadowTyping;
    unsigned long long _initialCandidateBatchCount;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_shortcutCompletions;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    NSString *_searchStringForMarkedText;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;
@property(copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace; // @synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace;
@property(copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection; // @synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection;
@property(copy, nonatomic) TICharacterSetDescription *inputsToReject; // @synthesize inputsToReject=_inputsToReject;
@property(copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate; // @synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate;
@property(copy, nonatomic) TICharacterSetDescription *shortcutCompletions; // @synthesize shortcutCompletions=_shortcutCompletions;
@property(copy, nonatomic) TICharacterSetDescription *wordCharacters; // @synthesize wordCharacters=_wordCharacters;
@property(nonatomic) unsigned long long initialCandidateBatchCount; // @synthesize initialCandidateBatchCount=_initialCandidateBatchCount;
@property(nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters; // @synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters;
@property(copy, nonatomic) NSString *shadowTyping; // @synthesize shadowTyping=_shadowTyping;
@property(copy, nonatomic) NSString *replacementForDoubleSpace; // @synthesize replacementForDoubleSpace=_replacementForDoubleSpace;
@property(retain, nonatomic) TIKeyEventMap *keyEventMap; // @synthesize keyEventMap=_keyEventMap;
@property(retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors; // @synthesize keyboardBehaviors=_keyboardBehaviors;
@property(copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(nonatomic) unsigned long long inputIndex; // @synthesize inputIndex=_inputIndex;
@property(nonatomic) unsigned long long inputCount; // @synthesize inputCount=_inputCount;
@property(copy, nonatomic) NSString *wordSeparator; // @synthesize wordSeparator=_wordSeparator;
@property(retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString; // @synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString;
- (BOOL)stringEndsWord:(id)arg1;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (BOOL)acceptInputString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) unsigned long long autoquoteType;
@property(nonatomic) BOOL suppressPlaceholderCandidate;
@property(nonatomic) BOOL usesAutocorrectionLists;
@property(nonatomic) BOOL usesCandidateSelection;
@property(nonatomic) BOOL usesAutoDeleteWord;
@property(nonatomic) BOOL suppressCompletionsForFieldEditor;
@property(nonatomic) BOOL supportsSetPhraseBoundary;
@property(nonatomic) BOOL supportsNumberKeySelection;
@property(nonatomic) BOOL suppliesCompletions;
@property(nonatomic) BOOL shouldExtendPriorWord;
@property(nonatomic) BOOL nextInputWouldStartSentence;
@property(nonatomic) BOOL inputStringIsExemptFromChecker;
@property(nonatomic) BOOL ignoresDeadKeys;
@property(nonatomic) BOOL commitsAcceptedCandidate;
@property(nonatomic) BOOL canHandleKeyHitTest;

@end

