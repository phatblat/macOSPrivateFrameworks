//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INRestaurant, NSArray, NSDate, NSString;

@protocol INRestaurantReservationBookingExport <NSObject, JSExport>
@property BOOL requiresPhoneNumber;
@property BOOL requiresName;
@property BOOL requiresEmailAddress;
@property BOOL requiresManualRequest;
@property(copy) NSArray *offers;
@property(getter=isBookingAvailable) BOOL bookingAvailable;
@property(copy) NSString *bookingIdentifier;
@property unsigned long long partySize;
@property(copy) NSDate *bookingDate;
@property(copy) NSString *bookingDescription;
@property(copy) INRestaurant *restaurant;
- (id)init;
@end

