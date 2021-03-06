//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHBottomUpSubstroke : NSObject
{
    id <CHStrokeIdentifier> _strokeIdentifier;
    double _startTimestamp;
    double _endTimestamp;
    double _curvature;
    long long _originalWritingDirectionIndex;
    struct CGVector _writingOrientation;
    struct CGVector _strokeDeviation;
    struct CGPoint _coalescedCenter;
    vector_2e7754b6 _convexHull;
    struct CGRect _bounds;
}

@property(nonatomic) struct CGPoint coalescedCenter; // @synthesize coalescedCenter=_coalescedCenter;
@property(nonatomic) long long originalWritingDirectionIndex; // @synthesize originalWritingDirectionIndex=_originalWritingDirectionIndex;
@property(nonatomic) struct CGVector strokeDeviation; // @synthesize strokeDeviation=_strokeDeviation;
@property(nonatomic) struct CGVector writingOrientation; // @synthesize writingOrientation=_writingOrientation;
@property(readonly, nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(readonly, nonatomic) vector_2e7754b6 *convexHull; // @synthesize convexHull=_convexHull;
@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(vector_2e7754b6 *)arg5 curvature:(double)arg6;

@end

