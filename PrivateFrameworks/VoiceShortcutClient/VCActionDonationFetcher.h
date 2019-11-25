//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCActionDonationFetcher : NSObject
{
}

+ (id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
+ (BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1;
+ (id)isEligibleForPredictionPredicate;
+ (id)donationWithUUID:(id)arg1;
+ (id)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
+ (id)keyPathForStream:(id)arg1;
+ (BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1;
+ (id)approvedSiriKitIntents;
+ (id)donationFromEvent:(id)arg1 filteringForTopLevel:(BOOL)arg2;
+ (id)donationFromEvent:(id)arg1;
+ (id)streams;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

