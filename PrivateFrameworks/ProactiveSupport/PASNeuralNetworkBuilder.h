//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData;

@interface PASNeuralNetworkBuilder : NSObject
{
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    BOOL _haveOutputLayer;
    BOOL _done;
}

- (void).cxx_destruct;
- (id)serialize;
- (void)addOutputLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5;
- (void)addHiddenLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5;
- (id)init;
- (id)initWithInputSize:(unsigned long long)arg1;

@end
