//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying>
{
    int _conjunction;
    PLQuery *_first;
    PLQuery *_second;
    NSMutableArray *_singleQueries;
    struct {
        unsigned int conjunction:1;
    } _has;
}

+ (Class)singleQueriesType;
@property(retain, nonatomic) NSMutableArray *singleQueries; // @synthesize singleQueries=_singleQueries;
@property(retain, nonatomic) PLQuery *second; // @synthesize second=_second;
@property(retain, nonatomic) PLQuery *first; // @synthesize first=_first;
@property(nonatomic) int conjunction; // @synthesize conjunction=_conjunction;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)singleQueriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)singleQueriesCount;
- (void)addSingleQueries:(id)arg1;
- (void)clearSingleQueries;
@property(readonly, nonatomic) BOOL hasSecond;
@property(readonly, nonatomic) BOOL hasFirst;
@property(nonatomic) BOOL hasConjunction;
- (id)logDescription;

@end

