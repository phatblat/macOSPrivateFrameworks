//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapItemVenueInfo.h"

@class GEOMapItemParentVenue, NSArray, NSString;

@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo>
{
    id <GEOVenueIdentifier> _venueIdentifier;
    int _venueFeatureType;
    NSArray *_filters;
    GEOMapItemParentVenue *_parent;
    id <GEOMapItemVenueContents> _contents;
}

@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier; // @synthesize venueIdentifier=_venueIdentifier;
@property(readonly, nonatomic) int venueFeatureType; // @synthesize venueFeatureType=_venueFeatureType;
@property(readonly, nonatomic) GEOMapItemParentVenue *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id <GEOMapItemVenueContents> contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (id)_filtersFromVenueInfo:(id)arg1;
- (id)initWithVenueInfo:(id)arg1;
- (id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

