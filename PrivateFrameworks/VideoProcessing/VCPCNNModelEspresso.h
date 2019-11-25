//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, VCPCNNEspressoContext;

@interface VCPCNNModelEspresso : NSObject
{
    struct {
        void *plan;
        int network_index;
    } _net;
    void *_plan;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    NSArray *_outputNames;
    VCPCNNEspressoContext *_context;
    NSString *_resConfig;
    vector_7cb31c67 _inputBlobs;
    vector_7cb31c67 _outputBlobs;
    CDStruct_0a65202a _inputBlob;
    CDStruct_0a65202a _outputBlob;
}

@property(readonly, nonatomic) NSString *resConfig; // @synthesize resConfig=_resConfig;
@property(nonatomic) CDStruct_0a65202a outputBlob; // @synthesize outputBlob=_outputBlob;
@property(nonatomic) CDStruct_0a65202a inputBlob; // @synthesize inputBlob=_inputBlob;
@property(nonatomic) vector_7cb31c67 outputBlobs; // @synthesize outputBlobs=_outputBlobs;
@property(nonatomic) vector_7cb31c67 inputBlobs; // @synthesize inputBlobs=_inputBlobs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getPlanPhase;
- (void *)getEspressoContext;
- (int)softmax;
- (void)normalization:(float *)arg1;
- (int)espressoForwardInputs:(vector_f351fd4e)arg1;
- (int)espressoForward:(float *)arg1;
- (int)prepareModelInputs:(vector_f351fd4e)arg1;
- (int)prepareModelInput:(float *)arg1;
- (int)prepareModelWithConfig:(id)arg1;
- (id)initWithParameters:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3;

@end

