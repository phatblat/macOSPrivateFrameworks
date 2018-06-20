//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding>
{
    float _lambda;
    float _w0;
    float _threshold;
    float _score;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) float w0; // @synthesize w0=_w0;
@property(readonly, nonatomic) float lambda; // @synthesize lambda=_lambda;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4;

@end

