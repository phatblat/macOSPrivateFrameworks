//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale, NSMutableDictionary;

@interface PSITokenizer : NSObject
{
    void *_tagger;
    struct __CFStringTokenizer *_nameTokenizer;
    BOOL _localeIsGerman;
    BOOL _useCache;
    NSMutableDictionary *_cache;
    NSLocale *_locale;
}

+ (id)fts5StringFromString:(id)arg1 useWildcard:(BOOL)arg2;
+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (id)ftsTokenizerName;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3 error:(id *)arg4;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (void)_tokenizeString:(id)arg1 withContext:(CDStruct_d5c410e0 *)arg2;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;
- (id)normalizeString:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 useCache:(BOOL)arg2;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg1;

@end

