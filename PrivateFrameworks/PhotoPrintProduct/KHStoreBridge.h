//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface KHStoreBridge : NSObject
{
    id <KHStoreBridgeDelegate> _delegate;
}

+ (id)defaultBridge;
@property(nonatomic) __weak id <KHStoreBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCheckoutForProject:(id)arg1 cart:(id)arg2 completion:(CDUnknownBlockType)arg3 dismissal:(CDUnknownBlockType)arg4;
- (void)requestCheckoutForProjectBundleController:(id)arg1 completion:(CDUnknownBlockType)arg2 dismissal:(CDUnknownBlockType)arg3;
- (void)addPrintLayout:(id)arg1 toCart:(id)arg2;
- (void)checkAddressBookAuthorization:(CDUnknownBlockType)arg1;
- (void)fillUpCountryPickerMenu:(id)arg1;
- (id)learnMoreURL;
- (void)updateCart:(id)arg1 withProject:(id)arg2;
- (id)createCartWithRecipientsFromCart:(id)arg1;
- (void)loadProducts:(CDUnknownBlockType)arg1;
- (void)loadProductsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNeedsLoadProducts;
@property(copy, nonatomic) NSString *selectedCountryCode;
@property(readonly, nonatomic) NSDictionary *countries;
@property(readonly, nonatomic) BOOL shouldConfirmStoreCountry;
@property(readonly, nonatomic) BOOL shouldDisplayShippingCosts;
@property(readonly, nonatomic) BOOL cartNeedsReset;
@property(readonly, nonatomic) BOOL storeIsAvailable;

@end
