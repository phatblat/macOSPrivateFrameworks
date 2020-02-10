//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction;

@interface HMPBActionContainer : PBCodable <NSCopying>
{
    HMPBCharacteristicWriteAction *_characteristicWriteAction;
    HMPBMediaPlaybackAction *_mediaPlaybackAction;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction; // @synthesize mediaPlaybackAction=_mediaPlaybackAction;
@property(retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction; // @synthesize characteristicWriteAction=_characteristicWriteAction;
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
@property(readonly, nonatomic) BOOL hasMediaPlaybackAction;
@property(readonly, nonatomic) BOOL hasCharacteristicWriteAction;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
