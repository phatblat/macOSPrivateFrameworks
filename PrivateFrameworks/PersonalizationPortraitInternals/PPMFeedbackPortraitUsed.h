//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface PPMFeedbackPortraitUsed : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 variantId:(id)arg3 domain:(struct PPMPortraitDomain_)arg4 elementsSpec:(struct PPMTypeSafeBool_)arg5 numEffectivesLog2:(unsigned long long)arg6;
- (id)init;

@end

