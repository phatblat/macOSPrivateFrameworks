//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CVMLMetricLearning : NSObject
{
    struct shared_ptr<DML> mMetricLearningImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addFaceToMetric:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (id)initWithLearnedMetric:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

