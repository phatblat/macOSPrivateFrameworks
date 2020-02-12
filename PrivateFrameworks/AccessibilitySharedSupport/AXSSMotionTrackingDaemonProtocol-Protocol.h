//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AXSSMotionTrackingInputConfiguration;

@protocol AXSSMotionTrackingDaemonProtocol
- (void)hideDebugOverlay;
- (void)showDebugOverlay;
- (void)stopTracking;
- (void)startTracking;
- (void)setJoystickModeMovementThreshold:(double)arg1;
- (void)setInputConfiguration:(AXSSMotionTrackingInputConfiguration *)arg1;
- (void)setSensitivity:(double)arg1;
- (void)setMotionTrackingMode:(unsigned long long)arg1;
@end
