//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface _RDLMSMatch : NSObject
{
    NSArray *_searchStringTokens;
    NSArray *_tokenMatches;
    NSDictionary *_equalTestDict;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)fillCategoryDataArray:(id)arg1;
- (id)description;
- (id)initWithSearchTokens:(id)arg1 matchTuples:(id)arg2;
- (id)_equalityObject:(id)arg1;
- (id)_equalityKey:(id)arg1;

@end

