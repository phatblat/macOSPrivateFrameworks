//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (SGTExtensions)
- (id)sgt_trimCommasSpacesQuotes;
- (BOOL)containsCJK;
- (BOOL)containsTokenSeparator;
- (id)_spotlight_tokenizer_words;
- (id)_sgt_tokenizedComponents;
- (id)_sgt_sentenceMismatchRanges:(id)arg1;
- (id)_splitVersionFold:(BOOL)arg1;
- (id)_foldedVersion;
- (unsigned long long)_levenshteinScore:(id)arg1;
- (unsigned long long)sentenceLevenshteinScore:(id)arg1;
- (long long)_sgt_integerValue;
- (id)sgt_capitalizedString;
- (BOOL)_sgt_rangeTouchesUntokenizedStringValue:(struct _NSRange)arg1 andIsInTheMiddleOfIt:(char *)arg2;
- (BOOL)_sgt_containsOnlyTokens;
- (struct _NSRange)_sgt_rangeOfUntokenizedStringValueWithSuggestion:(id)arg1 untokenizedRange:(struct _NSRange)arg2;
- (struct _NSRange)_sgt_rangeOfUntokenizedStringValue;
- (BOOL)_sgt_colonSanitizedStringForQueryGenius:(id)arg1 getStringValue:(id *)arg2 getAttributes:(id *)arg3;
- (id)_sgt_untokenizedStringRanges;
- (struct _NSRange)_sgt_untokenizedRangeTouchingSelectedRange:(struct _NSRange)arg1;
- (id)_sgt_untokenizedStringValue;
- (unsigned long long)_sgt_userTypedStringLength;
- (id)_sgt_swappedString;
- (id)_sgt_stringForCoalescing;
- (id)_sgt_stringWithFoldedDiacritic;
@end

