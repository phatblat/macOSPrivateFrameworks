//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDWiProxLeConnectionResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _clientType;
    NSString *_peerId;
    unsigned int _result;
    NSString *_resultString;
    NSString *_sessionId;
    struct {
        unsigned int timestamp:1;
        unsigned int clientType:1;
        unsigned int result:1;
    } _has;
}

@property(nonatomic) unsigned int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(retain, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
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
@property(nonatomic) BOOL hasClientType;
@property(nonatomic) BOOL hasResult;
@property(readonly, nonatomic) BOOL hasResultString;
@property(readonly, nonatomic) BOOL hasPeerId;
@property(readonly, nonatomic) BOOL hasSessionId;
@property(nonatomic) BOOL hasTimestamp;

@end

