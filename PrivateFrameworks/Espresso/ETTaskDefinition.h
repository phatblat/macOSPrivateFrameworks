//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ETTaskContext.h"

@class ETModelDefinition, ETOptimizerDefinition, ETTaskState, ETVariablesDefinition, NSArray;

@interface ETTaskDefinition : NSObject <ETTaskContext>
{
    struct unordered_map<std::__1::basic_string<char>, unsigned long, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> inference_layer_index;
    ETVariablesDefinition *varsDef;
    unsigned long long runtimePlatform;
    int precision;
    basic_string_23d93216 training_control_name;
    basic_string_23d93216 training_control_end_name;
    basic_string_23d93216 gradient_control_name;
    basic_string_23d93216 gradient_control_end_name;
    basic_string_23d93216 optimizer_control_name;
    basic_string_23d93216 optimizer_control_end_name;
    ETModelDefinition *_inferenceModel;
    ETOptimizerDefinition *_optimizer;
    unsigned long long _platform;
    ETTaskState *_taskState;
    unsigned long long _batchSize;
    NSArray *_outputNames;
    shared_ptr_d082c67d _inferenceGraphNetPtr;
    shared_ptr_d082c67d _trainingGraphNetPtr;
    vector_ebb6ef3e _non_batches;
    unordered_map_1de83e55 _blobShapes;
}

@property vector_ebb6ef3e non_batches; // @synthesize non_batches=_non_batches;
@property unordered_map_1de83e55 blobShapes; // @synthesize blobShapes=_blobShapes;
@property(retain) NSArray *outputNames; // @synthesize outputNames=_outputNames;
@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property shared_ptr_d082c67d trainingGraphNetPtr; // @synthesize trainingGraphNetPtr=_trainingGraphNetPtr;
@property shared_ptr_d082c67d inferenceGraphNetPtr; // @synthesize inferenceGraphNetPtr=_inferenceGraphNetPtr;
@property(retain, nonatomic) ETTaskState *taskState; // @synthesize taskState=_taskState;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) ETOptimizerDefinition *optimizer; // @synthesize optimizer=_optimizer;
@property(retain, nonatomic) ETModelDefinition *inferenceModel; // @synthesize inferenceModel=_inferenceModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)platformForLayerNamed:(id)arg1 error:(id *)arg2;
- (id)getTensorNamed:(id)arg1;
- (BOOL)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id *)arg3;
- (id)getParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 error:(id *)arg3;
- (unsigned long long)dataTypeForParameterOfType:(unsigned long long)arg1 fromLayerNamed:(id)arg2;
- (BOOL)saveInferenceNetwork:(id)arg1 error:(id *)arg2;
- (BOOL)saveNetwork:(id)arg1 inplace:(BOOL)arg2 error:(id *)arg3;
- (BOOL)doTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id *)arg4;
- (id)doInferenceOnData:(id)arg1 error:(id *)arg2;
- (id)namesVectorToFoundationArray:(vector_ebb6ef3e)arg1;
- (id)initWithModelDefinition:(id)arg1 lossDefinition:(id)arg2 variablesDefinition:(id)arg3 optimizerDefinition:(id)arg4 forPlatform:(unsigned long long)arg5 error:(id *)arg6;
- (id)description;
- (void)shareWeights;
- (void)reloadOnRuntinePlatform:(id *)arg1;

@end

