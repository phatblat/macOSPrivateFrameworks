//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSGestureRecognizer.h"

@interface KHPinchGestureRecognizer : NSGestureRecognizer
{
    double _velocity;
}

@property(readonly, nonatomic) double velocity; // @synthesize velocity=_velocity;
- (void)rightMouseDown:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;

@end

