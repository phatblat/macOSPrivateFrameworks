//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDCallHistoryDeviceUnlocked : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _callCount;
    struct {
        unsigned int timestamp:1;
        unsigned int callCount:1;
    } _has;
}

@property(nonatomic) unsigned int callCount; // @synthesize callCount=_callCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCallCount;
@property(nonatomic) BOOL hasTimestamp;

@end

