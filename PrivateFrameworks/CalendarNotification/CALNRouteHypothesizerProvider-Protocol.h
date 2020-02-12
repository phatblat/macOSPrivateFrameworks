//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPlannedDestination, NSString;

@protocol CALNRouteHypothesizerProvider <NSObject>
- (void)removedRouteHypothesizerForEventExternalURL:(NSString *)arg1;
- (void)createdRouteHypothesizer:(id <CALNRouteHypothesizer>)arg1 forEventExternalURL:(NSString *)arg2;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(GEOPlannedDestination *)arg2 dismissalType:(unsigned long long)arg3;
- (id <CALNRouteHypothesizer>)hypothesizerForPlannedDestination:(GEOPlannedDestination *)arg1;
@end
