//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface SGMEventICSOpportunity : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMEventICSSourceType_)arg2 recipient:(struct SGMEventICSSourceType_)arg3 accountSetup:(struct SGMTypeSafeBool_)arg4;
- (id)init;

@end

