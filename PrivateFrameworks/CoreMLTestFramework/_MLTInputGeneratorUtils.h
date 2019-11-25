//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface _MLTInputGeneratorUtils : NSObject
{
    BOOL _usesNdArrayInterpretation;
    int _currentCase;
    unsigned int _seedForRandomInput;
    struct __CVBuffer *_buffer;
    NSDictionary *_inputDescriptions;
    NSDictionary *_outputDescriptions;
    NSDictionary *_sequences;
}

@property BOOL usesNdArrayInterpretation; // @synthesize usesNdArrayInterpretation=_usesNdArrayInterpretation;
@property unsigned int seedForRandomInput; // @synthesize seedForRandomInput=_seedForRandomInput;
@property(retain) NSDictionary *sequences; // @synthesize sequences=_sequences;
@property(retain) NSDictionary *outputDescriptions; // @synthesize outputDescriptions=_outputDescriptions;
@property(retain) NSDictionary *inputDescriptions; // @synthesize inputDescriptions=_inputDescriptions;
@property int currentCase; // @synthesize currentCase=_currentCase;
@property(nonatomic) struct __CVBuffer *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)generateRandomMultiArrayFeatureWithMultiArrayConstraint:(id)arg1 error:(id *)arg2;
- (id)generateRandomDouble;
- (id)generateRandomUniformBetween:(double)arg1 and:(double)arg2;
- (id)generateRandomGaussianDoubleWithScale:(double)arg1 bias:(double)arg2;
- (id)generateRandomCVPixelBufferFeatureWithImageConstraint:(id)arg1 error:(id *)arg2;
- (BOOL)hasCorrespondingRecurrentInput:(id)arg1;
- (BOOL)hasCorrespondingRecurrentOutput:(id)arg1;
- (id)generateRandomInputs:(id *)arg1;
- (id)initInputGeneratorUtilWithModel:(id)arg1 currentCase:(int)arg2 seed:(unsigned int)arg3;

@end

