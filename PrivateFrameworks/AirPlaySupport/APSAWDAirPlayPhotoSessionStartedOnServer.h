//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface APSAWDAirPlayPhotoSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_clientModel;
    NSString *_clientVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
        unsigned int transportType:1;
    } _has;
}

@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasClientVersion;
@property(readonly, nonatomic) BOOL hasClientModel;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasSessionUUID;
- (void)dealloc;

@end

