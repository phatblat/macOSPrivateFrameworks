//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SRCSOldCommandStringParser : NSObject
{
}

+ (BOOL)isValidBuiltInLMIdentifier:(id)arg1;
+ (id)createLanguageModelFromBuiltInLMIdentifier:(id)arg1 owner:(id)arg2 error:(id *)arg3;
+ (id)createLanguageModelFromText:(id)arg1 identifier:(id)arg2 startingCharIndex:(unsigned long long)arg3 numberOfCharsInterpreted:(unsigned long long *)arg4 processingMode:(unsigned int)arg5 error:(id *)arg6;

@end

