//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapViewDelegate.h"

@class CLGeocoder, KHFrame, KHMapView, NSString;

@interface KHMapViewController : NSObject <MKMapViewDelegate>
{
    KHFrame *_frameObject;
    KHMapView *_mapView;
    CLGeocoder *_geocoder;
}

@property(retain) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain) KHMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) KHFrame *frameObject; // @synthesize frameObject=_frameObject;
- (void).cxx_destruct;
- (void)updateCoordinates;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(BOOL)arg4 tiltDirection:(long long)arg5;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 userUpdatedToRegion:(CDStruct_26e8d939)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithKHFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
