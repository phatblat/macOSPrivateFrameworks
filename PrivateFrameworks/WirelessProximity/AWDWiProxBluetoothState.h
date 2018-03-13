//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDWiProxBluetoothState : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _btState;
    struct {
        unsigned int timestamp:1;
        unsigned int btState:1;
    } _has;
}

@property(nonatomic) int btState; // @synthesize btState=_btState;
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
@property(nonatomic) BOOL hasBtState;
@property(nonatomic) BOOL hasTimestamp;

@end

