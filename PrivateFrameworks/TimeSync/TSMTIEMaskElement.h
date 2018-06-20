//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface TSMTIEMaskElement : NSObject <NSCopying>
{
    double _a;
    double _b;
    double _lowerLimit;
    double _upperLimit;
}

@property(readonly, nonatomic) double upperLimit; // @synthesize upperLimit=_upperLimit;
@property(readonly, nonatomic) double lowerLimit; // @synthesize lowerLimit=_lowerLimit;
@property(readonly, nonatomic) double b; // @synthesize b=_b;
@property(readonly, nonatomic) double a; // @synthesize a=_a;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoefficient:(double)arg1 offset:(double)arg2 lowerLimit:(double)arg3 upperLimit:(double)arg4;

@end

