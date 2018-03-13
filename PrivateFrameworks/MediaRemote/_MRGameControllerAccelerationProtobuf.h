//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying>
{
    NSData *_data;
    float _w;
    float _x;
    float _y;
    float _z;
    struct {
        unsigned int w:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;
}

@property(nonatomic) float w; // @synthesize w=_w;
@property(nonatomic) float z; // @synthesize z=_z;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasW;
@property(nonatomic) BOOL hasZ;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;
@property(readonly, nonatomic) BOOL hasData;
- (void)dealloc;

@end

