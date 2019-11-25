//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParser : NSObject
{
    NSMutableArray *_formatCategories;
    OITSULocale *_locale;
    BOOL _isJapaneseLocale;
    struct __CFDateFormatter *_specialCaseFormatter;
}

- (void).cxx_destruct;
- (id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short *)arg2;
- (void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3;
- (id)newDateFromString:(id)arg1 successfulFormatString:(id *)arg2;
- (id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id *)arg3 tryAggressiveFormats:(BOOL)arg4;
- (id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id *)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(id)arg1;
- (void)dealloc;
- (id)formatStringsDictionary;
- (id)initWithLocale:(id)arg1;

@end

