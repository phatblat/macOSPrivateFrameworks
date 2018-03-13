//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface BiometricKitStatistics : NSObject
{
    BOOL _fingerOn;
    BOOL _enrolling;
    BOOL _badImagePerFingerDown;
    NSDate *_enrollmentStarTime;
    unsigned int _touchesPerEnroll;
    unsigned int _badImagesPerEnroll;
    unsigned int _rejectedImagesPerEnroll;
    unsigned int _primaryClusterAdditions;
    unsigned int _primaryClusterFailedAdditions;
    unsigned int _otherClustersAdditions;
    unsigned int _joinEvents;
    double _area;
    double _primaryClusterArea;
}

+ (id)statistics;
- (void).cxx_destruct;
- (void)enrollProgress:(id)arg1;
- (void)statusMessage:(unsigned int)arg1;
- (void)enrollResult:(id)arg1 componentSet:(CDStruct_87aaca7b *)arg2;
- (void)enroll:(int)arg1;
- (void)initEnrollmentValues;
- (id)init;

@end

