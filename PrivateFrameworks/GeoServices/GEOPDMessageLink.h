//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOTimezone, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDMessageLink : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    int _responseTime;
    GEOTimezone *_timezone;
    struct {
        unsigned int responseTime:1;
    } _has;
}

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSMutableArray *hoursOfOperations; // @synthesize hoursOfOperations=_hoursOfOperations;
@property(retain, nonatomic) NSString *messageUrl; // @synthesize messageUrl=_messageUrl;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimezone;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursOfOperationsCount;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
- (int)StringAsResponseTime:(id)arg1;
- (id)responseTimeAsString:(int)arg1;
@property(nonatomic) BOOL hasResponseTime;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(readonly, nonatomic) BOOL hasMessageUrl;
@property(readonly, nonatomic) BOOL hasMessageId;

@end

