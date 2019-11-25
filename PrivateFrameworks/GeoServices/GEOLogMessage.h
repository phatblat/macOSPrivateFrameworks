//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct {
        unsigned int has_groupRetryCount:1;
        unsigned int has_logMessageType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)logMsgEventType;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasGroupRetryCount;
@property(nonatomic) unsigned int groupRetryCount;
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
- (int)StringAsLogMessageType:(id)arg1;
- (id)logMessageTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLogMessageType;
@property(nonatomic) int logMessageType;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMsgEventsCount;
- (void)addLogMsgEvent:(id)arg1;
- (void)clearLogMsgEvents;
@property(retain, nonatomic) NSMutableArray *logMsgEvents;

@end

