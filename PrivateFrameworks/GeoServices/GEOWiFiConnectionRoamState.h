//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying>
{
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    struct {
        unsigned int has_lateRoamMaxRSSI:1;
        unsigned int has_lateRoamMinRSSI:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasLateRoamMaxRSSI;
@property(nonatomic) int lateRoamMaxRSSI;
@property(nonatomic) BOOL hasLateRoamMinRSSI;
@property(nonatomic) int lateRoamMinRSSI;

@end

