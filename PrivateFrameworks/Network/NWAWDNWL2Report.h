//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface NWAWDNWL2Report : PBCodable <NSCopying>
{
    int _cellularLqm;
    int _cellularPowerCostDownload;
    int _cellularPowerCostUpload;
    int _cellularRadioTechnology;
    int _wifiLqm;
    int _wifiRadioTechnology;
    int _wifiRssi;
    BOOL _cellularKnownGood;
    BOOL _wifiKnownGood;
    struct {
        unsigned int cellularLqm:1;
        unsigned int cellularPowerCostDownload:1;
        unsigned int cellularPowerCostUpload:1;
        unsigned int cellularRadioTechnology:1;
        unsigned int wifiLqm:1;
        unsigned int wifiRadioTechnology:1;
        unsigned int wifiRssi:1;
        unsigned int cellularKnownGood:1;
        unsigned int wifiKnownGood:1;
    } _has;
}

@property(nonatomic) BOOL wifiKnownGood; // @synthesize wifiKnownGood=_wifiKnownGood;
@property(nonatomic) int wifiRssi; // @synthesize wifiRssi=_wifiRssi;
@property(nonatomic) int wifiLqm; // @synthesize wifiLqm=_wifiLqm;
@property(nonatomic) BOOL cellularKnownGood; // @synthesize cellularKnownGood=_cellularKnownGood;
@property(nonatomic) int cellularLqm; // @synthesize cellularLqm=_cellularLqm;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsWifiRadioTechnology:(id)arg1;
- (id)wifiRadioTechnologyAsString:(int)arg1;
@property(nonatomic) BOOL hasWifiRadioTechnology;
@property(nonatomic) int wifiRadioTechnology; // @synthesize wifiRadioTechnology=_wifiRadioTechnology;
@property(nonatomic) BOOL hasWifiKnownGood;
@property(nonatomic) BOOL hasWifiRssi;
@property(nonatomic) BOOL hasWifiLqm;
- (int)StringAsCellularRadioTechnology:(id)arg1;
- (id)cellularRadioTechnologyAsString:(int)arg1;
@property(nonatomic) BOOL hasCellularRadioTechnology;
@property(nonatomic) int cellularRadioTechnology; // @synthesize cellularRadioTechnology=_cellularRadioTechnology;
@property(nonatomic) BOOL hasCellularKnownGood;
- (int)StringAsCellularPowerCostUpload:(id)arg1;
- (id)cellularPowerCostUploadAsString:(int)arg1;
@property(nonatomic) BOOL hasCellularPowerCostUpload;
@property(nonatomic) int cellularPowerCostUpload; // @synthesize cellularPowerCostUpload=_cellularPowerCostUpload;
- (int)StringAsCellularPowerCostDownload:(id)arg1;
- (id)cellularPowerCostDownloadAsString:(int)arg1;
@property(nonatomic) BOOL hasCellularPowerCostDownload;
@property(nonatomic) int cellularPowerCostDownload; // @synthesize cellularPowerCostDownload=_cellularPowerCostDownload;
@property(nonatomic) BOOL hasCellularLqm;

@end

