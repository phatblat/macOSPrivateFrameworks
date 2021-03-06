//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface DMFScreenTimePolicyMonitor : NSObject
{
    long long _screenTimePolicy;
    NSUUID *_policyMonitorIdentifier;
}

+ (BOOL)automaticallyNotifiesObserversOfScreenTimePolicy;
@property(readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;
@property(nonatomic) long long screenTimePolicy; // @synthesize screenTimePolicy=_screenTimePolicy;
- (void).cxx_destruct;
- (void)_updateScreenTimeFromPolicies:(id)arg1;
- (BOOL)askPermissionForScreenTimeWithError:(id *)arg1;
- (void)_updateScreenTime;
- (void)dealloc;
- (id)init;

@end

