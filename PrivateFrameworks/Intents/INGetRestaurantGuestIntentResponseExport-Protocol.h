//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;

@protocol INGetRestaurantGuestIntentResponseExport <NSObject, JSExport>
@property(readonly) long long code;
@property(copy) INRestaurantGuestDisplayPreferences *guestDisplayPreferences;
@property(copy) INRestaurantGuest *guest;
- (id)init;
@end
