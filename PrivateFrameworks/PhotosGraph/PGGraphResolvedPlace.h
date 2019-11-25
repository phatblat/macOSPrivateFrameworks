//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGGraphIngestPlace.h"

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace>
{
    NSString *_placeInterestType;
    double _confidence;
}

@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *placeInterestType; // @synthesize placeInterestType=_placeInterestType;
- (void).cxx_destruct;
- (id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

