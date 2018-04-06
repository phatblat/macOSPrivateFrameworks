//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanGestureRecognizer.h"

#import "AKPenDetectionGestureRecognizerProtocol.h"

@class NSString;

@interface AKPanGestureRecognizer : NSPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>
{
    BOOL _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    struct CGPoint _locationOfFirstTouch;
}

@property(nonatomic) BOOL penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
@property(nonatomic) double currentMaxWeight; // @synthesize currentMaxWeight=_currentMaxWeight;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
