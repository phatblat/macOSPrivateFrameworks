//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface USApplicationUsageReport : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    double _totalUsageTime;
    double _applicationUsageTime;
    NSDictionary *_webUsageByDomain;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSDictionary *webUsageByDomain; // @synthesize webUsageByDomain=_webUsageByDomain;
@property(readonly) double applicationUsageTime; // @synthesize applicationUsageTime=_applicationUsageTime;
@property(readonly) double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usApplicationReportCommonInitWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;

@end

