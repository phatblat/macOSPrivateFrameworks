//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO
{
    unsigned long long _width;
    float _spacing;
    _UIPointVector *_prevPoints;
}

@property(nonatomic) _UIPointVector *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;

@end

