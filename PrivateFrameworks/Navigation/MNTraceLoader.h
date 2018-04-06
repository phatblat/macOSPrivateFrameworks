//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNTrace;

@interface MNTraceLoader : NSObject
{
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (id)_handleUpdateError;
- (BOOL)_executeQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;
- (BOOL)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id *)arg2;
- (BOOL)_loadTraceVersion;
- (BOOL)_loadCommuteDirectionsRequestsTable;
- (BOOL)_loadCommuteDestinationsTable;
- (BOOL)_loadSignificantEventsTable;
- (BOOL)_loadAnnotatedUserEnvironmentTable;
- (BOOL)_loadAnnotatedUserBehaviorTable;
- (BOOL)_loadRouteSelectionsTable;
- (BOOL)_loadVehicleDataTable;
- (BOOL)_loadMotionDataTable;
- (BOOL)_loadCompassHeadingDataTable;
- (BOOL)_loadETAUpdatesTable;
- (BOOL)_loadDirectionsTable;
- (BOOL)_loadLocationsTable;
- (BOOL)_loadInfoTable;
- (id)loadTraceWithPath:(id)arg1 outError:(id *)arg2;

@end
