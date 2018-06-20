//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, VCPCNNData, VCPCNNMetalContext;

@interface VCPCNNBlock : NSObject
{
    NSMutableArray *_inputSize;
    NSMutableArray *_outputSize;
    VCPCNNData *_input;
    VCPCNNData *_output;
    VCPCNNMetalContext *_context;
    BOOL _generateOutput;
    BOOL _executedOnGPU;
}

@property BOOL generateOutput; // @synthesize generateOutput=_generateOutput;
@property(readonly) VCPCNNMetalContext *context; // @synthesize context=_context;
@property(retain) VCPCNNData *output; // @synthesize output=_output;
@property __weak VCPCNNData *input; // @synthesize input=_input;
@property(retain) NSMutableArray *outputSize; // @synthesize outputSize=_outputSize;
@property __weak NSMutableArray *inputSize; // @synthesize inputSize=_inputSize;
- (void).cxx_destruct;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;

@end

