//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding>
{
    struct PVTransformAnimationInfo *_liveTransform;
    NSArray *_animationData;
    CDStruct_e83c9415 _presentationTimeRange;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) CDStruct_e83c9415 presentationTimeRange; // @synthesize presentationTimeRange=_presentationTimeRange;
@property(readonly, nonatomic) NSArray *animationData; // @synthesize animationData=_animationData;
- (void).cxx_destruct;
- (id)description;
- (id)dataFromAnimationInfo:(id)arg1;
- (id)animationInfoFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct PVTransformAnimationInfo)transformInfoAtLocalTime:(CDStruct_1b6d18a9)arg1;
- (struct PVTransformAnimationInfo)transformInfoAtTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)_commonInit:(id)arg1 liveTransform:(struct PVTransformAnimationInfo *)arg2;
- (id)initWithLiveTransform:(struct PVTransformAnimationInfo *)arg1;
- (id)initWithAnimation:(id)arg1;
- (id)initWithAnimation:(id)arg1 simplify:(BOOL)arg2 tolerance:(double)arg3 smoothness:(unsigned int)arg4;

@end
