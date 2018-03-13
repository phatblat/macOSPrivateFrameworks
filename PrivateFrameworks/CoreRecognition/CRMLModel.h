//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLModel, NSArray, NSString;

@interface CRMLModel : NSObject
{
    MLModel *model;
    BOOL _disableCoreML;
    int _classCount;
    const int *_codeMap;
    NSArray *_modelShape;
}

@property BOOL disableCoreML; // @synthesize disableCoreML=_disableCoreML;
@property(retain) NSArray *modelShape; // @synthesize modelShape=_modelShape;
@property(readonly) int classCount; // @synthesize classCount=_classCount;
@property(readonly) const int *codeMap; // @synthesize codeMap=_codeMap;
- (void).cxx_destruct;
- (id)coreMLResultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(BOOL)arg3 tryPatternMatch:(BOOL)arg4;
- (id)resultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(BOOL)arg3 tryPatternMatch:(BOOL)arg4;
- (id)resultsFromImage:(id)arg1;
- (id)decodeActivations:(vector_00ef371e *)arg1;
- (vector_00ef371e)activationsFromImage:(id)arg1;
- (id)predict:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *modelName;

@end

