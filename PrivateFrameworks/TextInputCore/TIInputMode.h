//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSLocale, NSString;

@interface TIInputMode : NSObject <NSCopying>
{
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
    NSString *_normalizedIdentifier;
}

+ (id)inputModeWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier=_normalizedIdentifier;
@property(readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property(readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property(readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property(readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property(readonly, nonatomic) NSString *replacementForDoubleSpace;
@property(readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property(readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property(readonly, nonatomic) BOOL supportsPrediction;
@property(readonly, nonatomic) Class multilingualInputManagerClass;
@property(readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property(readonly, nonatomic) Class inputManagerClass;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic) NSString *variant;
@property(readonly, nonatomic) NSString *languageWithRegion;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNormalizedIdentifier:(id)arg1;
- (void)dealloc;

@end

