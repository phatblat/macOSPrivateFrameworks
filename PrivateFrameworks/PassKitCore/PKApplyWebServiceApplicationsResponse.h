//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse
{
    NSArray *_allFeatureApplications;
    NSString *_lastUpdated;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) NSArray *allFeatureApplications; // @synthesize allFeatureApplications=_allFeatureApplications;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

