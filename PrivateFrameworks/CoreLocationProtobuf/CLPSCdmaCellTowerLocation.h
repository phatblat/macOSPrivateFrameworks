//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPSCdmaCellTowerLocation : PBCodable <NSCopying>
{
    NSString *_appBundleId;
    int _arfcn;
    int _ci;
    int _ecn0;
    int _lac;
    CLPLocation *_location;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    NSString *_operatorName;
    int _psc;
    int _rat;
    int _rscp;
    int _rssi;
    int _serverHash;
    NSString *_serviceProviderName;
    int _transmit;
    BOOL _isLimitedService;
    CDStruct_648273eb _has;
}

+ (Class)neighborType;
@property(retain, nonatomic) NSString *serviceProviderName; // @synthesize serviceProviderName=_serviceProviderName;
@property(nonatomic) BOOL isLimitedService; // @synthesize isLimitedService=_isLimitedService;
@property(retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) int rat; // @synthesize rat=_rat;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) int transmit; // @synthesize transmit=_transmit;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) int psc; // @synthesize psc=_psc;
@property(nonatomic) int arfcn; // @synthesize arfcn=_arfcn;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int ci; // @synthesize ci=_ci;
@property(nonatomic) int lac; // @synthesize lac=_lac;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
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
@property(readonly, nonatomic) BOOL hasServiceProviderName;
@property(nonatomic) BOOL hasIsLimitedService;
@property(readonly, nonatomic) BOOL hasNeighborGroup;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (unsigned long long)neighborsCount;
- (void)addNeighbor:(id)arg1;
- (void)clearNeighbors;
@property(nonatomic) BOOL hasRat;
@property(nonatomic) BOOL hasRscp;
@property(nonatomic) BOOL hasEcn0;
@property(readonly, nonatomic) BOOL hasOperatorName;
@property(nonatomic) BOOL hasTransmit;
@property(nonatomic) BOOL hasServerHash;
@property(readonly, nonatomic) BOOL hasAppBundleId;
@property(nonatomic) BOOL hasPsc;
@property(nonatomic) BOOL hasArfcn;

@end

