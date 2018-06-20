//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLanguage : NSObject
{
    NSString *_identifier;
    NSString *_localization;
    NSString *_fallbackLocalization;
    unsigned long long _orthoIndex;
    unsigned int _encoding;
    unsigned char _languageCode;
    unsigned char _languageDialect;
    unsigned char _languageMode;
}

+ (id)languageWithIdentifier:(id)arg1;
+ (unsigned int)encodingForOrthographyIndex:(unsigned long long)arg1;
+ (unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1;
+ (void)getCodesForLanguage:(id)arg1 languageCode:(char *)arg2 languageDialect:(char *)arg3 languageMode:(char *)arg4;
+ (id)fallbackLocalizationForLanguage:(id)arg1;
+ (id)localizationForLanguage:(id)arg1;
+ (id)localizationsForLanguage:(id)arg1;
+ (id)dataBundle;
- (BOOL)isKorean;
- (BOOL)isRussian;
- (BOOL)isTurkish;
- (BOOL)isFinnish;
- (BOOL)isPolish;
- (BOOL)isNorwegian;
- (BOOL)isSwedish;
- (BOOL)isDanish;
- (BOOL)isDutch;
- (BOOL)isPortuguese;
- (BOOL)isSpanish;
- (BOOL)isItalian;
- (BOOL)isGerman;
- (BOOL)isFrench;
- (BOOL)isEnglish;
- (unsigned char)accents;
- (unsigned char)twoLetterWords;
- (unsigned char)oneLetterWords;
- (unsigned char)languageMode;
- (unsigned char)languageDialect;
- (unsigned char)languageCode;
- (unsigned long long)orthographyIndex;
- (unsigned int)encoding;
- (id)fallbackLocalization;
- (id)localization;
- (id)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
