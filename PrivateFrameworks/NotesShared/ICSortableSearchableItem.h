//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject
{
    BOOL _isPrefixMatch;
    CSSearchableItem *_searchableItem;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    unsigned long long _modificationDateBucket;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    unsigned long long _searchResultType;
}

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1;
@property(nonatomic) unsigned long long searchResultType; // @synthesize searchResultType=_searchResultType;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) unsigned long long modificationDateBucket; // @synthesize modificationDateBucket=_modificationDateBucket;
@property(nonatomic) BOOL isPrefixMatch; // @synthesize isPrefixMatch=_isPrefixMatch;
@property(nonatomic) unsigned long long relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
- (void).cxx_destruct;
- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 modificationDateBucket:(unsigned long long)arg4 searchResultType:(unsigned long long)arg5 isPrefixMatch:(BOOL)arg6;

@end

