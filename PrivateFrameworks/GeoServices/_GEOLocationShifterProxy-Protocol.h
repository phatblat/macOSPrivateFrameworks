//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEOLatLng;

@protocol _GEOLocationShifterProxy <NSObject>
- (void)shiftLatLng:(GEOLatLng *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, BOOL, NSError *))arg3;
- (unsigned int)locationShiftFunctionVersion;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isLocationShiftEnabled;
@end

