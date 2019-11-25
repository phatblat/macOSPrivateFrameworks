//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property(nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property(readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1;
@property(copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property(nonatomic) BOOL allowAnyNetwork;
@property(nonatomic) BOOL cellularFaceTimeEnabled;
- (BOOL)nonBluetoothAllowedForBundleId:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;
- (BOOL)cellularDataEnabledForBundleId:(id)arg1;
- (BOOL)_adequateInternalOrCarrierInstall;
- (void)dealloc;
- (id)init;

@end

