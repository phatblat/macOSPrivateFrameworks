//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol GEODirectionsError <NSObject>
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (BOOL)hasError:(long long)arg1;
@end

