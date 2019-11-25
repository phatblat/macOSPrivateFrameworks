//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSQueryProtocol.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    BOOL _isCancelled;
    NSArray *_timeLocationTuples;
    double _radius;
    NSDictionary *_parametersByTimeLocationTupleIdentifier;
    id <GEOMapServiceSpatialEventLookupTicket> _ticket;
    NSDictionary *_resolvedPublicEventsForTimeLocationTuples;
    NSDictionary *_invalidationTokens;
    NSObject<OS_dispatch_queue> *_geoQueue;
}

+ (unsigned long long)maximumBatchSize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // @synthesize geoQueue=_geoQueue;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSDictionary *invalidationTokens; // @synthesize invalidationTokens=_invalidationTokens;
@property(retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples; // @synthesize resolvedPublicEventsForTimeLocationTuples=_resolvedPublicEventsForTimeLocationTuples;
@property(readonly, nonatomic) id <GEOMapServiceSpatialEventLookupTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) NSDictionary *parametersByTimeLocationTupleIdentifier; // @synthesize parametersByTimeLocationTupleIdentifier=_parametersByTimeLocationTupleIdentifier;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) NSArray *timeLocationTuples; // @synthesize timeLocationTuples=_timeLocationTuples;
- (void).cxx_destruct;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1;
- (id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2;
- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

