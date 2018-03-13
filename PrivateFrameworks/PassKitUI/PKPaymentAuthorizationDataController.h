//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentAuthorizationItemsViewDataSource.h"

@class NSArray, NSString, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, PKPaymentPassPreferenceController, PKPaymentRemoteDevicePreferenceController, PKPaymentShippingAddressPreferenceController, PKPaymentShippingContactPreferenceController, PKPaymentShippingMethodPreferenceController;

@interface PKPaymentAuthorizationDataController : NSObject <PKPaymentAuthorizationItemsViewDataSource>
{
    PKPaymentAuthorizationDataModel *_dataModel;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    id <PKPaymentAuthorizationDataControllerDelegate> _delegate;
    PKPaymentPassPreferenceController *_paymentPassPreferenceController;
    PKPaymentRemoteDevicePreferenceController *_remoteDevicePreferenceController;
    PKPaymentShippingAddressPreferenceController *_shippingAddressPreferenceController;
    PKPaymentShippingMethodPreferenceController *_shippingMethodPreferenceController;
    PKPaymentShippingContactPreferenceController *_shippingContactPreferenceController;
    NSArray *_allPreferenceControllers;
}

@property(retain, nonatomic) NSArray *allPreferenceControllers; // @synthesize allPreferenceControllers=_allPreferenceControllers;
@property(retain, nonatomic) PKPaymentShippingContactPreferenceController *shippingContactPreferenceController; // @synthesize shippingContactPreferenceController=_shippingContactPreferenceController;
@property(retain, nonatomic) PKPaymentShippingMethodPreferenceController *shippingMethodPreferenceController; // @synthesize shippingMethodPreferenceController=_shippingMethodPreferenceController;
@property(retain, nonatomic) PKPaymentShippingAddressPreferenceController *shippingAddressPreferenceController; // @synthesize shippingAddressPreferenceController=_shippingAddressPreferenceController;
@property(retain, nonatomic) PKPaymentRemoteDevicePreferenceController *remoteDevicePreferenceController; // @synthesize remoteDevicePreferenceController=_remoteDevicePreferenceController;
@property(retain, nonatomic) PKPaymentPassPreferenceController *paymentPassPreferenceController; // @synthesize paymentPassPreferenceController=_paymentPassPreferenceController;
@property(nonatomic) id <PKPaymentAuthorizationDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
@property(retain, nonatomic) PKPaymentAuthorizationDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (BOOL)_updateMeCardContact:(id)arg1 newContact:(id)arg2 keys:(id)arg3;
- (id)_preferenceControllerForItemAtIndex:(unsigned long long)arg1;
- (id)_valuesForPaymentSummaryItems:(id)arg1;
- (id)_valuesForShippingMethods:(id)arg1;
- (id)_valuesForShippingContact:(id)arg1;
- (id)_valuesForShippingAddress:(id)arg1;
- (id)_valuesForRemotePaymentInstrumentDataItem:(id)arg1;
- (id)_valuesForCardDataItem:(id)arg1;
- (id)_badgeViewForDataItem:(id)arg1;
- (id)_valuesForItemAtIndex:(unsigned long long)arg1;
- (id)_labelStringForDataItem:(id)arg1;
- (id)paymentAuthorizationItemsView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInPaymentAuthorizationItemsView:(id)arg1;
- (void)setupShippingContactPreference;
- (void)setupShippingMethodPreference;
- (void)setupShippingAddressPreference;
- (void)setupRemoteDevicePreference;
- (void)setupPaymentPassPreference;
- (void)updatePreferences;
- (void)setupPreferences;
- (id)initWithDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

