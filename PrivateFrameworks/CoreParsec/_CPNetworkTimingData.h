//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPNetworkTimingData.h"

@class NSData, NSString, _CPTCPInfo, _CPTuscanyConnectionInfo;

@interface _CPNetworkTimingData : PBCodable <_CPNetworkTimingData, NSSecureCoding>
{
    BOOL _connectionRace;
    BOOL _connectionReused;
    BOOL _QUICWhitelistedDomain;
    BOOL _TFOSuccess;
    unsigned int _redirectCount;
    unsigned int _redirectCountW3C;
    unsigned int _requestHeaderSize;
    unsigned int _responseBodyBytesDecoded;
    unsigned int _responseBodyBytesReceived;
    unsigned int _responseHeaderSize;
    double _connectStart;
    double _connectEnd;
    NSString *_interfaceIdentifier;
    NSData *_peerAddress;
    _CPTCPInfo *_startTimeCounts;
    _CPTCPInfo *_stopTimeCounts;
    NSString *_connectionUUID;
    double _domainLookupStart;
    double _domainLookupEnd;
    double _fetchStart;
    NSString *_networkProtocolName;
    double _redirectStart;
    double _redirectEnd;
    double _requestStart;
    double _requestEnd;
    double _responseStart;
    double _responseEnd;
    double _timingDataInit;
    double _secureConnectStart;
    _CPTuscanyConnectionInfo *_tuscany;
}

@property(retain, nonatomic) _CPTuscanyConnectionInfo *tuscany; // @synthesize tuscany=_tuscany;
@property(nonatomic) double secureConnectStart; // @synthesize secureConnectStart=_secureConnectStart;
@property(nonatomic) double timingDataInit; // @synthesize timingDataInit=_timingDataInit;
@property(nonatomic) BOOL TFOSuccess; // @synthesize TFOSuccess=_TFOSuccess;
@property(nonatomic) unsigned int responseHeaderSize; // @synthesize responseHeaderSize=_responseHeaderSize;
@property(nonatomic) double responseEnd; // @synthesize responseEnd=_responseEnd;
@property(nonatomic) double responseStart; // @synthesize responseStart=_responseStart;
@property(nonatomic) unsigned int responseBodyBytesReceived; // @synthesize responseBodyBytesReceived=_responseBodyBytesReceived;
@property(nonatomic) unsigned int responseBodyBytesDecoded; // @synthesize responseBodyBytesDecoded=_responseBodyBytesDecoded;
@property(nonatomic) unsigned int requestHeaderSize; // @synthesize requestHeaderSize=_requestHeaderSize;
@property(nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) double redirectEnd; // @synthesize redirectEnd=_redirectEnd;
@property(nonatomic) double redirectStart; // @synthesize redirectStart=_redirectStart;
@property(nonatomic) unsigned int redirectCountW3C; // @synthesize redirectCountW3C=_redirectCountW3C;
@property(nonatomic) unsigned int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) BOOL QUICWhitelistedDomain; // @synthesize QUICWhitelistedDomain=_QUICWhitelistedDomain;
@property(copy, nonatomic) NSString *networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(nonatomic) double fetchStart; // @synthesize fetchStart=_fetchStart;
@property(nonatomic) double domainLookupEnd; // @synthesize domainLookupEnd=_domainLookupEnd;
@property(nonatomic) double domainLookupStart; // @synthesize domainLookupStart=_domainLookupStart;
@property(copy, nonatomic) NSString *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(retain, nonatomic) _CPTCPInfo *stopTimeCounts; // @synthesize stopTimeCounts=_stopTimeCounts;
@property(retain, nonatomic) _CPTCPInfo *startTimeCounts; // @synthesize startTimeCounts=_startTimeCounts;
@property(nonatomic) BOOL connectionReused; // @synthesize connectionReused=_connectionReused;
@property(nonatomic) BOOL connectionRace; // @synthesize connectionRace=_connectionRace;
@property(copy, nonatomic) NSData *peerAddress; // @synthesize peerAddress=_peerAddress;
@property(copy, nonatomic) NSString *interfaceIdentifier; // @synthesize interfaceIdentifier=_interfaceIdentifier;
@property(nonatomic) double connectEnd; // @synthesize connectEnd=_connectEnd;
@property(nonatomic) double connectStart; // @synthesize connectStart=_connectStart;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

