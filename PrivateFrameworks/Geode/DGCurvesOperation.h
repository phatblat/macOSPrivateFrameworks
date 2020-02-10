//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

#import "DGAutoCalculable.h"

@class NSArray, NSData, NSNumber, NSString;

@interface DGCurvesOperation : DGOperation <DGAutoCalculable>
{
    NSData *_inputRGBData;
    NSData *_inputRedData;
    NSData *_inputGreenData;
    NSData *_inputBlueData;
    NSNumber *_inputGrayChoice;
    NSArray *_rgbCurvePoints;
    NSArray *_redCurvePoints;
    NSArray *_blueCurvePoints;
    NSArray *_greenCurvePoints;
    float _rgbValues[512];
    float _redValues[512];
    float _greenValues[512];
    float _blueValues[512];
    double _gamma;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)autoValuesForBlackPoint:(double)arg1 whitePoint:(double)arg2;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)_defaultCurveArray;
+ (id)attributes;
+ (id)_stringsTableName;
@property(nonatomic) double gamma; // @synthesize gamma=_gamma;
- (void).cxx_destruct;
- (void)_applyAutoSettings:(id)arg1;
- (float *)tableValues:(int)arg1;
- (float *)blueValues;
- (float *)greenValues;
- (float *)redValues;
- (float *)rgbValues;
- (BOOL)reverseCurveRGB:(float *)arg1 withCurveTable:(float *)arg2 reconstructedInput:(float *)arg3;
- (BOOL)reverseCurve_:(float)arg1 withCurveTable:(float *)arg2 reconstructedInput:(float *)arg3;
@property(retain, nonatomic) NSNumber *inputGrayChoice; // @synthesize inputGrayChoice=_inputGrayChoice;
@property(copy, nonatomic) NSArray *blueCurvePoints;
@property(copy, nonatomic) NSArray *greenCurvePoints;
@property(copy, nonatomic) NSArray *redCurvePoints;
@property(copy, nonatomic) NSArray *RGBCurvePoints;
- (id)_parseArray:(id)arg1;
- (void)calculateCurveTable:(int)arg1 gamma:(double)arg2;
- (void)calculateCurveTable:(int)arg1 tableSize:(long long)arg2 table:(float *)arg3 gamma:(double)arg4;
- (id)selectedPointAtIndex:(int)arg1 index:(long long)arg2;
- (id)firstSelectedPoint:(int)arg1;
- (id)controlPointAtIndex:(long long)arg1 type:(int)arg2;
- (unsigned long long)countHiddenPoints:(int)arg1;
- (unsigned long long)countSelectedPoints:(int)arg1;
- (void)deleteHiddenCurvePoints:(int)arg1;
- (id)_findNextShownPoint:(unsigned long long)arg1 type:(int)arg2;
- (id)_findPreviousShownPoint:(unsigned long long)arg1 type:(int)arg2;
- (void)_adjustCurvePoints:(id)arg1 ofType:(int)arg2 minDistance:(double)arg3;
- (void)removeUserControlPoints:(int)arg1;
- (void)offsetSelectedControlPoints:(CDStruct_ad6741ac)arg1 type:(int)arg2 minDistance:(double)arg3;
- (id)moveControlPointTo:(id)arg1 newLocation:(CDStruct_ad6741ac)arg2 type:(int)arg3 minDistance:(double)arg4;
- (void)moveControlPointTo:(id)arg1 newLocation:(CDStruct_ad6741ac)arg2 type:(int)arg3;
- (id)shownCurvePointsAtIndex:(long long)arg1 type:(int)arg2;
- (unsigned long long)shownCurvePointsCount:(int)arg1;
- (void)deleteControlPoint:(id)arg1 type:(int)arg2;
- (void)deleteSelectedPoints:(int)arg1;
- (void)deselectControlPoints:(int)arg1;
- (void)setControlPointSelected:(BOOL)arg1 atIndex:(long long)arg2 type:(int)arg3;
- (id)closestControlPointTo:(CDStruct_ad6741ac)arg1 type:(int)arg2;
- (long long)closestCurveIndexTo:(CDStruct_ad6741ac)arg1 type:(int)arg2;
- (long long)whiteControlPointIndex:(int)arg1;
- (id)whiteControlPoint:(int)arg1;
- (id)lastControlPoint:(int)arg1;
- (id)firstControlPoint:(int)arg1;
- (void)insertCurvePoint:(CDStruct_ad6741ac)arg1 select:(BOOL)arg2 type:(int)arg3;
- (void)_insertCurvePoint:(CDStruct_ad6741ac)arg1 select:(BOOL)arg2 type:(int)arg3;
- (id)_inputKeyForCurveType:(int)arg1;
- (void)rebuildCurvePoints:(int)arg1;
- (id)curvePoints:(int)arg1;
- (void)resetCurve:(int)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)defaultValueForInputKey:(id)arg1;
- (BOOL)requiresLegacyRender;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (BOOL)isMigratable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
