//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPTuscanyConnectionInfo.h"

@class NSData, NSDictionary, NSString;

@interface _CPTuscanyConnectionInfo : PBCodable <_CPTuscanyConnectionInfo, NSSecureCoding>
{
    BOOL _isMultipath;
    BOOL _TFOsucceeded;
    BOOL _isTFOProbeSucceeded;
    int _pathType;
    int _fallbackReason;
    int _fallbackReasonCategory;
    int _edgeType;
    unsigned int _multipathSubflowCount;
    unsigned int _multipathConnectedSubflowCount;
    unsigned int _multipathPrimarySubflowInterfaceIndex;
    int _IPType;
    int _interfaceType;
    unsigned int _minimumRTT;
    int _tunnelConnectionError;
    unsigned int _initialBytesLeftOver;
    double _fallbackDelay;
    NSString *_edgeAddress;
    NSDictionary *_multipathSubflowSwitchCounts;
    double _firstTxByteTimeStamp;
    double _firstTxByteDelay;
    double _connectionDelay;
    double _timeIntervalSinceLastUsage;
    double _timeToFirstByte;
    NSDictionary *_tcpInfo;
}

@property(copy, nonatomic) NSDictionary *tcpInfo; // @synthesize tcpInfo=_tcpInfo;
@property(nonatomic) unsigned int initialBytesLeftOver; // @synthesize initialBytesLeftOver=_initialBytesLeftOver;
@property(nonatomic) BOOL isTFOProbeSucceeded; // @synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded;
@property(nonatomic) int tunnelConnectionError; // @synthesize tunnelConnectionError=_tunnelConnectionError;
@property(nonatomic) double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property(nonatomic) double timeIntervalSinceLastUsage; // @synthesize timeIntervalSinceLastUsage=_timeIntervalSinceLastUsage;
@property(nonatomic) unsigned int minimumRTT; // @synthesize minimumRTT=_minimumRTT;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) int IPType; // @synthesize IPType=_IPType;
@property(nonatomic) BOOL TFOsucceeded; // @synthesize TFOsucceeded=_TFOsucceeded;
@property(nonatomic) double connectionDelay; // @synthesize connectionDelay=_connectionDelay;
@property(nonatomic) double firstTxByteDelay; // @synthesize firstTxByteDelay=_firstTxByteDelay;
@property(nonatomic) double firstTxByteTimeStamp; // @synthesize firstTxByteTimeStamp=_firstTxByteTimeStamp;
@property(copy, nonatomic) NSDictionary *multipathSubflowSwitchCounts; // @synthesize multipathSubflowSwitchCounts=_multipathSubflowSwitchCounts;
@property(nonatomic) unsigned int multipathPrimarySubflowInterfaceIndex; // @synthesize multipathPrimarySubflowInterfaceIndex=_multipathPrimarySubflowInterfaceIndex;
@property(nonatomic) unsigned int multipathConnectedSubflowCount; // @synthesize multipathConnectedSubflowCount=_multipathConnectedSubflowCount;
@property(nonatomic) unsigned int multipathSubflowCount; // @synthesize multipathSubflowCount=_multipathSubflowCount;
@property(nonatomic) BOOL isMultipath; // @synthesize isMultipath=_isMultipath;
@property(copy, nonatomic) NSString *edgeAddress; // @synthesize edgeAddress=_edgeAddress;
@property(nonatomic) int edgeType; // @synthesize edgeType=_edgeType;
@property(nonatomic) double fallbackDelay; // @synthesize fallbackDelay=_fallbackDelay;
@property(nonatomic) int fallbackReasonCategory; // @synthesize fallbackReasonCategory=_fallbackReasonCategory;
@property(nonatomic) int fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property(nonatomic) int pathType; // @synthesize pathType=_pathType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTcpInfo:(id)arg1 forKey:(id)arg2;
- (BOOL)getTcpInfo:(id *)arg1 forKey:(id)arg2;
- (void)setMultipathSubflowSwitchCounts:(int)arg1 forKey:(id)arg2;
- (BOOL)getMultipathSubflowSwitchCounts:(int *)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

