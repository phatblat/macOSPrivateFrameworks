//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitTargetControllerCommand : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _certified;
    int _command;
    int _transportType;
    AWDHomeKitVendorInformation *_vendorDetails;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int command:1;
        unsigned int transportType:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
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
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) BOOL hasVendorDetails;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) BOOL hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;
@property(nonatomic) BOOL hasTimestamp;

@end

