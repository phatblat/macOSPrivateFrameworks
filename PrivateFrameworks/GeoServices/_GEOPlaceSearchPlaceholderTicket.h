//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

#import "GEOMapServiceSearchFieldPlaceholderTicket.h"

@class GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchPlaceholderTicket : GEOAbstractRequestResponseTicket <GEOMapServiceSearchFieldPlaceholderTicket>
{
}

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

