//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLogMsgEventStaleResource : PBCodable <NSCopying>
{
    NSMutableArray *_staleResources;
}

+ (Class)staleResourceType;
@property(retain, nonatomic) NSMutableArray *staleResources; // @synthesize staleResources=_staleResources;
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
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)staleResourcesCount;
- (void)addStaleResource:(id)arg1;
- (void)clearStaleResources;

@end

