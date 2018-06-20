//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@interface ISForcePressLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter
{
    struct {
        char respondsToHintWithProgress;
        char respondsToStartPlayback;
        char respondsToStopPlayback;
    } _delegateFlags;
    BOOL _didReachMaxForce;
    BOOL _touchActive;
    BOOL __aboveTimeoutThreshold;
    BOOL __forceAboveThresholdLongEnough;
    BOOL __hasCrossedHintThreshold;
    double _forceProgress;
    long long __currentTimeoutRequestId;
}

@property(nonatomic, setter=_setHasCrossedHintThreshold:) BOOL _hasCrossedHintThreshold; // @synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold;
@property(nonatomic, setter=_setCurrentTimeoutRequestId:) long long _currentTimeoutRequestId; // @synthesize _currentTimeoutRequestId=__currentTimeoutRequestId;
@property(nonatomic, setter=_setForceAboveThresholdLongEnough:) BOOL _forceAboveThresholdLongEnough; // @synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough;
@property(nonatomic, setter=_setAboveTimeoutThreshold:) BOOL _aboveTimeoutThreshold; // @synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold;
@property(nonatomic, getter=isTouchActive) BOOL touchActive; // @synthesize touchActive=_touchActive;
@property(nonatomic) double forceProgress; // @synthesize forceProgress=_forceProgress;
- (void)setState:(long long)arg1;
- (void)didPerformChanges;

@end

