//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PACropModel;

@interface PACropModelEditor : NSObject
{
    PACropModel *_model;
}

- (void).cxx_destruct;
- (void)makeCropRectIntegral;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCurrentAspectRatioFreeForm;
- (void)updateAspectRatio:(CDStruct_5e758c1a)arg1 targetArea:(double)arg2 startRect:(struct CGRect)arg3;
- (void)zoomIntoCrop:(double)arg1 startRect:(struct CGRect)arg2;
- (void)moveCropBy:(struct CGVector)arg1 startRect:(struct CGRect)arg2;
- (void)rotateCropBy:(double)arg1 targetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (void)updateModel:(id)arg1;
- (id)initWith:(id)arg1;

@end
