//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Suggestions/SGTQueryGenius.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SGTFileQueryGenius : SGTQueryGenius
{
    NSDictionary *_imagesForTags;
}

+ (void)updateSuggestionForLegacyLabels:(id)arg1;
+ (id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2;
+ (id)_attributeToScope;
+ (id)downloadedFromCategory;
+ (id)sentByCategory;
+ (id)kindCategory;
+ (id)tagCategory;
+ (id)applicationsCategory;
+ (id)filenameCategory;
+ (id)filenameTypingScopeCategory;
+ (id)displayNameForScope:(long long)arg1;
+ (void)initialize;
@property(copy) NSDictionary *imagesForTags; // @synthesize imagesForTags=_imagesForTags;
- (void).cxx_destruct;
- (id)imageForSuggestion:(id)arg1;
- (void)suggesterBecomesIdle:(id)arg1;
- (id)suggestionForString:(id)arg1;
- (id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3;
- (id)suggester:(id)arg1 filterSuggestion:(id)arg2 fromItem:(id)arg3 forInput:(id)arg4;
- (id)suggester:(id)arg1 additionalSuggestionsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartProcessingResultsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartSearchingSuggestionsForInput:(id)arg2;
- (id)displayNameForScope:(long long)arg1;
- (long long)scopeForAttributeName:(id)arg1;
- (id)allAttributeNamesForSuggestion:(id)arg1;
- (id)identifier;
- (id)init;

@end

