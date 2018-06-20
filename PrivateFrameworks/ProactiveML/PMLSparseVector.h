//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PMLSparseVector : NSObject
{
    unsigned long long _length;
    unsigned long long _numberOfNonZeroValues;
    long long *_sparseIndices;
    float *_sparseValues;
}

+ (id)sparseVectorFromNumbers:(id)arg1 indices:(id)arg2 length:(unsigned long long)arg3;
+ (id)sparseVectorFromNumbers:(id)arg1;
+ (id)sparseVectorEmptyWithLength:(unsigned long long)arg1;
+ (id)sparseVectorFromDense:(id)arg1;
+ (id)sparseVectorFromDense:(const float *)arg1 length:(unsigned long long)arg2;
@property(nonatomic) float *sparseValues; // @synthesize sparseValues=_sparseValues;
@property(nonatomic) long long *sparseIndices; // @synthesize sparseIndices=_sparseIndices;
@property(nonatomic) unsigned long long numberOfNonZeroValues; // @synthesize numberOfNonZeroValues=_numberOfNonZeroValues;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)vectorWithConstantColumn;
- (float)valueAtIndex:(unsigned long long)arg1;
- (void)processNonZeroValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (float)maxAbsValue;
- (float)l2norm;
- (float)maxValue;
- (float)minValue;
- (id)quantizedValuesAsUInt8DataWithMin:(float)arg1 max:(float)arg2;
- (id)indicesAsUInt16Data;
- (id)valuesData;
- (id)indicesData;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indices:(long long *)arg3 values:(float *)arg4;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indicesData:(id)arg3 valuesData:(id)arg4;
- (id)init;

@end

