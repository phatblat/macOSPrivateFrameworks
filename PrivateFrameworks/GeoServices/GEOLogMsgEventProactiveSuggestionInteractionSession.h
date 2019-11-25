//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>
{
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    struct {
        unsigned int has_duration:1;
        unsigned int has_interactedItemIndex:1;
        unsigned int has_listType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)proactiveItemType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasInteractedItemIndex;
@property(nonatomic) int interactedItemIndex;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) int duration;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
@property(retain, nonatomic) NSMutableArray *proactiveItems;
- (int)StringAsListType:(id)arg1;
- (id)listTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasListType;
@property(nonatomic) int listType;

@end

