//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOTransitPath : PBCodable <NSCopying>
{
    NSMutableArray *_legs;
}

+ (Class)legType;
@property(retain, nonatomic) NSMutableArray *legs; // @synthesize legs=_legs;
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
- (id)legAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (void)addLeg:(id)arg1;
- (void)clearLegs;

@end

