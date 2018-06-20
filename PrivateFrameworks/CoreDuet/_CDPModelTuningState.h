//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface _CDPModelTuningState : NSObject <NSSecureCoding>
{
    int _i;
    int _j;
    float _bestLogLambda;
    float _bestW0;
    float _bestScore;
    float _bestThreshold;
}

+ (BOOL)supportsSecureCoding;
+ (id)initialTuningState;
@property(nonatomic) float bestThreshold; // @synthesize bestThreshold=_bestThreshold;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) float bestW0; // @synthesize bestW0=_bestW0;
@property(nonatomic) float bestLogLambda; // @synthesize bestLogLambda=_bestLogLambda;
@property(nonatomic) int j; // @synthesize j=_j;
@property(nonatomic) int i; // @synthesize i=_i;
@property(readonly, nonatomic) float progress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end

