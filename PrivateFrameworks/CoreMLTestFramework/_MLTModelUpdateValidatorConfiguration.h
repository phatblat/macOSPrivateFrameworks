//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _MLTLogger;

@interface _MLTModelUpdateValidatorConfiguration : NSObject
{
    BOOL _useBatchPrediction;
    NSString *_recipePath;
    _MLTLogger *_logger;
    id <MLBatchProvider> _validationDataProvider;
}

@property(retain) id <MLBatchProvider> validationDataProvider; // @synthesize validationDataProvider=_validationDataProvider;
@property BOOL useBatchPrediction; // @synthesize useBatchPrediction=_useBatchPrediction;
@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property(retain) NSString *recipePath; // @synthesize recipePath=_recipePath;
- (void).cxx_destruct;
- (id)init;

@end

