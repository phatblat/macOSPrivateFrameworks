//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBFlightReservation, _INPBLodgingReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBTicketedEventReservation, _INPBTrainReservation;

@protocol _INPBReservationWrapper <NSObject>
@property(readonly, nonatomic) BOOL hasTrainReservation;
@property(retain, nonatomic) _INPBTrainReservation *trainReservation;
@property(readonly, nonatomic) BOOL hasTicketedEventReservation;
@property(retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property(readonly, nonatomic) BOOL hasRestaurantReservation;
@property(retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property(readonly, nonatomic) BOOL hasRentalCarReservation;
@property(retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property(readonly, nonatomic) BOOL hasLodgingReservation;
@property(retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property(readonly, nonatomic) BOOL hasFlightReservation;
@property(retain, nonatomic) _INPBFlightReservation *flightReservation;
@end
