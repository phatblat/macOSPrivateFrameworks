//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MLFoundationTensorDescriptor : NSObject
{
    int _dataType;
    unsigned long long _numberOfDimensions;
    NSArray *_size;
    NSArray *_stride;
    unsigned long long _tensorAllocationSizeInBytes;
    unsigned long long _fanIn;
    unsigned long long _fanOut;
}

+ (id)convolutionBiasTermsDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 dataType:(int)arg4;
+ (id)convolutionWeightsDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 dataType:(int)arg5;
+ (id)descriptorWithSize:(id)arg1 stride:(id)arg2 dataType:(int)arg3;
+ (id)descriptorWithSize:(id)arg1 dataType:(int)arg2;
+ (id)descriptorWithSequenceLength:(unsigned long long)arg1 featureChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 dataType:(int)arg4;
+ (id)descriptorWithSequenceLength:(unsigned long long)arg1 featureChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 strideForWidth:(unsigned long long)arg5 strideForHeight:(unsigned long long)arg6 strideForBatch:(unsigned long long)arg7 dataType:(int)arg8;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 dataType:(int)arg5;
+ (id)descriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
+ (unsigned long long)maxTensorDimensions;
+ (id)new;
@property(nonatomic) unsigned long long fanOut; // @synthesize fanOut=_fanOut;
@property(nonatomic) unsigned long long fanIn; // @synthesize fanIn=_fanIn;
@property(readonly, nonatomic) unsigned long long tensorAllocationSizeInBytes; // @synthesize tensorAllocationSizeInBytes=_tensorAllocationSizeInBytes;
@property(readonly, copy, nonatomic) NSArray *stride; // @synthesize stride=_stride;
@property(readonly, copy, nonatomic) NSArray *size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long numberOfDimensions; // @synthesize numberOfDimensions=_numberOfDimensions;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)tensorDimensionStrideInBytes;
- (id)description;
- (id)initTensorWithSize:(id)arg1 stride:(id)arg2 dataType:(int)arg3;
- (id)initNCHWTensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 strideForWidth:(unsigned long long)arg5 strideForHeight:(unsigned long long)arg6 strideForChannel:(unsigned long long)arg7 strideForBatch:(unsigned long long)arg8 dataType:(int)arg9;
- (id)init;

@end

