//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSDeviceOfferBagContract.h"

@class AMSBag, AMSBagValue, NSString;

@interface MMCommerceBagContract : NSObject <AMSDeviceOfferBagContract>
{
    AMSBag *_bag;
}

@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
@property(readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property(readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
