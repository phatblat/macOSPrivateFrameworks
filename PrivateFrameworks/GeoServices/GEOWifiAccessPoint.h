//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOWifiAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    CDStruct_e664d718 _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) BOOL hasAge;
@property(nonatomic) unsigned int age;
@property(nonatomic) BOOL hasScanTimestamp;
@property(nonatomic) unsigned long long scanTimestamp;
@property(nonatomic) BOOL hasChannel;
@property(nonatomic) int channel;
@property(nonatomic) BOOL hasRssi;
@property(nonatomic) int rssi;
@property(retain, nonatomic) NSString *macId;
@property(readonly, nonatomic) BOOL hasMacId;

@end

