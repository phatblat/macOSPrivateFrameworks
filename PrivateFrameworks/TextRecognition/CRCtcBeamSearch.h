//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRLanguageResources, NSLocale;

@interface CRCtcBeamSearch : NSObject
{
    struct _LXLexicon *_dynamicLexicon;
    NSLocale *_locale;
    CRLanguageResources *_languageResources;
}

@property(readonly, nonatomic) CRLanguageResources *languageResources; // @synthesize languageResources=_languageResources;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) struct _LXLexicon *dynamicLexicon; // @synthesize dynamicLexicon=_dynamicLexicon;
- (void).cxx_destruct;
- (id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id *)arg4 outputWhitespaceRanges:(id *)arg5;
- (struct _LXLexicon *)newDynamicLexiconForLocale:(id)arg1 error:(id *)arg2;
- (void)loadDynamicLexicon:(id)arg1 forLocale:(id)arg2;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 languageResources:(id)arg2;

@end

