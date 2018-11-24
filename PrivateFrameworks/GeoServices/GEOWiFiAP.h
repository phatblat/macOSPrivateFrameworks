//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying>
{
    unsigned int _channel;
    int _rssi;
    NSString *_uniqueID;
    struct {
        unsigned int channel:1;
        unsigned int rssi:1;
    } _has;
}

@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
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
@property(nonatomic) BOOL hasChannel;
@property(nonatomic) BOOL hasRssi;
@property(readonly, nonatomic) BOOL hasUniqueID;

@end

