//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable <NSCopying>
{
    unsigned long long _messagesLeftToIndex;
    unsigned long long _percentOfMessagesIndexed;
    unsigned long long _timestamp;
    int _emailProvider;
    NSMutableArray *_engagements;
    struct {
        unsigned int messagesLeftToIndex:1;
        unsigned int percentOfMessagesIndexed:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
    } _has;
}

+ (Class)engagementsType;
@property(nonatomic) unsigned long long percentOfMessagesIndexed; // @synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed;
@property(nonatomic) unsigned long long messagesLeftToIndex; // @synthesize messagesLeftToIndex=_messagesLeftToIndex;
@property(retain, nonatomic) NSMutableArray *engagements; // @synthesize engagements=_engagements;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsEmailProvider:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
@property(nonatomic) BOOL hasEmailProvider;
@property(nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
@property(nonatomic) BOOL hasPercentOfMessagesIndexed;
@property(nonatomic) BOOL hasMessagesLeftToIndex;
- (id)engagementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagementsCount;
- (void)addEngagements:(id)arg1;
- (void)clearEngagements;
@property(nonatomic) BOOL hasTimestamp;

@end
