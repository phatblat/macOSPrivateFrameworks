//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INRideOptionExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_availablePartySizeOptions;
    NSArray *_fareLineItems;
    NSString *_name;
    NSDate *_estimatedPickupDate;
    INPriceRange *_priceRange;
    NSNumber *_usesMeteredFare;
    NSString *_disclaimerMessage;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_specialPricing;
    INImage *_specialPricingBadgeImage;
    NSUserActivity *_userActivityForBookingInApplication;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSUserActivity *userActivityForBookingInApplication; // @synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication;
@property(copy) INImage *specialPricingBadgeImage; // @synthesize specialPricingBadgeImage=_specialPricingBadgeImage;
@property(copy) NSString *specialPricing; // @synthesize specialPricing=_specialPricing;
@property(copy) NSString *availablePartySizeOptionsSelectionPrompt; // @synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt;
@property(copy) NSString *disclaimerMessage; // @synthesize disclaimerMessage=_disclaimerMessage;
@property(copy) NSNumber *usesMeteredFare; // @synthesize usesMeteredFare=_usesMeteredFare;
@property(copy) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property(copy) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy) NSArray *fareLineItems; // @synthesize fareLineItems=_fareLineItems;
@property(copy) NSArray *availablePartySizeOptions; // @synthesize availablePartySizeOptions=_availablePartySizeOptions;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;
@property(copy, nonatomic) NSString *identifier;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

