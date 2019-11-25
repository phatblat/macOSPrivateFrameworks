//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PXSearchActiveSearch : NSObject
{
    NSString *_searchText;
    NSArray *_searchTokens;
    NSArray *_representedObjects;
    NSString *_priorityAssetUUID;
}

@property(retain, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(retain, nonatomic) NSArray *representedObjects; // @synthesize representedObjects=_representedObjects;
@property(retain, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchTermsString;
- (void)_generateRelatedSearchObjects;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long searchTermCount;
@property(readonly, nonatomic) unsigned long long searchTokenCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL hasSearchTokens;
@property(readonly, nonatomic) BOOL hasSearchText;
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2;

@end

