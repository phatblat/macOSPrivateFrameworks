//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPEndNetworkSearchFeedback.h"
#import "_CPFeedbackUUID.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString, _CPStruct;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int responseSize:1;
        unsigned int statusCode:1;
        unsigned int duration:1;
    } _has;
    int _statusCode;
    unsigned long long _timestamp;
    long long _responseSize;
    _CPStruct *_networkTimingData;
    NSString *_uuid;
    NSString *_parsecStatus;
    NSString *_fbq;
    double _duration;
    NSString *_partialClientIp;
}

+ (id)_networkTimingStructFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *partialClientIp; // @synthesize partialClientIp=_partialClientIp;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property(copy, nonatomic) NSString *parsecStatus; // @synthesize parsecStatus=_parsecStatus;
@property(copy, nonatomic) NSString *uuid;
@property(retain, nonatomic) _CPStruct *networkTimingData; // @synthesize networkTimingData=_networkTimingData;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPartialClientIp;
@property(readonly, nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) BOOL hasFbq;
@property(readonly, nonatomic) BOOL hasParsecStatus;
@property(readonly, nonatomic) BOOL hasUuid;
@property(readonly, nonatomic) BOOL hasNetworkTimingData;
@property(readonly, nonatomic) BOOL hasStatusCode;
@property(readonly, nonatomic) BOOL hasResponseSize;
@property(readonly, nonatomic) BOOL hasTimestamp;
- (id)init;
@property(readonly, nonatomic) BOOL requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;
- (id)_formatNetworkTimingData;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

