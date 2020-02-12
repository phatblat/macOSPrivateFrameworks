//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLPlistAndChunksSerializableProtocol.h"

@class NSData, NSString;

@interface PMLModelFullyConnectedLayer : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    unsigned long long _inputLen;
    unsigned long long _outputLen;
    int _activationType;
    int _dataType;
    float _dataScale;
    NSData *_weights;
}

+ (void *)_createActivationFilterWithLength:(unsigned long long)arg1 activationType:(int)arg2;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)batchPredictWithDenseMatrix:(id)arg1;
- (id)predictWithDenseVector:(id)arg1;
- (id)predict:(id)arg1;
- (void)_multiplySparseVector:(id)arg1 output:(float *)arg2;
- (void *)_createFullyConnectedLayerFilter;
- (id)weights;
- (unsigned long long)modelCount;
- (id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 dataType:(int)arg3 values:(const float *)arg4;
- (id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 activationType:(int)arg3 dataType:(int)arg4 dataScale:(float)arg5 weights:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

