//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsML/SGQuickResponsesModel.h>

@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel
{
}

+ (id)newTransformerInstanceForConfig:(id)arg1 seed:(unsigned long long)arg2 useSeed:(BOOL)arg3;
+ (id)featurizerWithMethods:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(struct _NSRange)arg3 tokenNGramRange:(struct _NSRange)arg4;
+ (id)newTransformerInstanceForLanguage:(id)arg1 withDictionary:(id)arg2 withSeed:(unsigned long long)arg3 forMode:(unsigned long long)arg4;
+ (id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;

@end

