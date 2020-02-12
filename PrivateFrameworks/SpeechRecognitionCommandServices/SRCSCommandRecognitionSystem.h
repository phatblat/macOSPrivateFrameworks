//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SRCSCommandRecognitionSystem : NSObject
{
    NSString *_targetType;
    NSMutableArray *_recognizers;
    NSMutableDictionary *_resolvedBuiltInIdentifiers;
    NSString *_localeIdentifier;
}

@property(readonly, retain) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property(readonly, retain) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (void).cxx_destruct;
- (void)_testWithPhrases:(id)arg1;
- (void)_initalizeLanguageModelTree;
- (id)languageModelTreeForBuiltInLMIdentifier:(id)arg1;
- (id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1;
- (id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray *)arg1;
- (id)targetType;
- (void)addRecognizer:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;

@end
