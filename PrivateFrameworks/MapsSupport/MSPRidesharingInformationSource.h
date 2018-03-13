//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPRouteInformationSource.h"

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource>
{
    GEOComposedWaypoint *_startWaypoint;
    GEOComposedWaypoint *_endWaypoint;
}

@property(readonly, nonatomic, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(readonly, nonatomic, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
- (void).cxx_destruct;
- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;
- (id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

