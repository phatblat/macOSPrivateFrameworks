//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, _MRDeviceInfoMessageProtobuf;

@interface _MROriginProtobuf : PBCodable <NSCopying>
{
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    struct {
        unsigned int identifier:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated; // @synthesize deviceInfoDeprecated=_deviceInfoDeprecated;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
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
@property(readonly, nonatomic) BOOL hasDeviceInfoDeprecated;
@property(nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDisplayName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

