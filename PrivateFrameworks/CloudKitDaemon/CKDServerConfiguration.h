//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKPropertyCoding.h"

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

@property(retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // @synthesize allowedAppVersionsCache=_allowedAppVersionsCache;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (void).cxx_destruct;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)iCloudHostnames;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1;
- (BOOL)allowExpiredDNSBehavior:(id)arg1;
- (double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)flowControlBudgetForContainer:(id)arg1;
- (id)transcodeServerPublicKeyURLsForContainer:(id)arg1;
- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;
- (BOOL)isExpired;
@property(readonly, copy) NSString *description;
- (id)initWithValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

