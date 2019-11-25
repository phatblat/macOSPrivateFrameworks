//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableData;

@interface CNVCardLexer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned long long _peekedPoint;
    unsigned long long _cursor;
    BOOL _unicode;
    long long _errorCount;
    NSArray *_activeTokenSets;
}

+ (id)returnDelimiterData;
+ (id)utf16Tokens;
+ (id)singleByteTokens;
- (void).cxx_destruct;
- (BOOL)advancedPastToken:(int)arg1;
- (BOOL)atEOF;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(long long)arg2;
- (long long)advanceToString;
- (long long)advanceToSingleByteString;
- (long long)advanceToUnicodeString;
- (void)advanceToPeekPoint;
- (id)nextBase64Data;
- (id)nextBase64Line:(char *)arg1;
- (id)nextSingleByteBase64Line:(char *)arg1;
- (id)nextUnicodeBase64Line:(char *)arg1;
- (int)tokenAtCursorIgnoringLineFolding;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 maximumValueLength:(unsigned long long)arg4;
- (id)dataWithRange:(struct _NSRange)arg1;
- (id)stringWithRange:(struct _NSRange)arg1 encoding:(unsigned long long)arg2;
- (unsigned short)charAtPosition:(unsigned long long)arg1 withOffset:(long long)arg2;
- (int)tokenAtCursor;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5;
- (BOOL)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5 intoString:(id)arg6;
- (void)unicodeSkipToStopTokens:(int)arg1;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3 maximumValueLength:(unsigned long long)arg4;
- (struct _NSRange)expandRange:(struct _NSRange)arg1 untilNextByteIs:(id)arg2;
- (id)nextQuotedStringValueInEncoding:(unsigned long long)arg1;
- (id)stringFromSubData:(id)arg1 encoding:(unsigned long long)arg2;
- (struct _NSRange)rangeWithLength:(unsigned long long)arg1 lTrim:(unsigned long long)arg2 rTrim:(unsigned long long)arg3;
- (id)trimData:(id)arg1 withPrefixLength:(unsigned long long)arg2 suffixLength:(unsigned long long)arg3;
- (id)stringFromData:(id)arg1 encoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4;
- (id)unicodeStringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5;
- (id)clipAtGraphemeClusters:(id)arg1 maximumValueLength:(unsigned long long)arg2 addEllipsisIfClipped:(BOOL)arg3;
- (id)stringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5;
- (struct _NSRange)emptyRangeStartingAtCursor;
- (void)appendNextEscapedCharacterToData:(id)arg1;
- (void)appendNextQuotedPrintableDataToData:(id)arg1;
- (void)appendDataInRange:(struct _NSRange)arg1 toData:(id)arg2;
- (void)skipToStopTokens:(int)arg1;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (int)nextTokenPeek:(BOOL)arg1 length:(long long)arg2;
- (int)nextTokenPeek:(BOOL)arg1;
- (int)readNextToken;
- (int)peekAtNextToken;
- (int)nextTokenPeekUnicode:(BOOL)arg1 length:(long long)arg2;
- (int)nextTokenPeekSingle:(BOOL)arg1 length:(long long)arg2;
- (id)tokenSetForLength:(long long)arg1;
- (long long)errorCount;
- (unsigned long long)cursor;
- (id)initWithData:(id)arg1;
- (id)os_log;

@end

