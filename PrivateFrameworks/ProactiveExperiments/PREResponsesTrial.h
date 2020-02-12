//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PREResponsesTrialProtocol.h"

@class NSString;

@interface PREResponsesTrial : NSObject <PREResponsesTrialProtocol>
{
    NSString *_inferenceModelName;
    NSString *_inferenceModelFilePath;
    NSString *_inferenceModelConfigPath;
    NSString *_experimentId;
    NSString *_treatmentId;
}

@property(readonly) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(readonly) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(readonly) NSString *inferenceModelConfigPath; // @synthesize inferenceModelConfigPath=_inferenceModelConfigPath;
@property(readonly) NSString *inferenceModelFilePath; // @synthesize inferenceModelFilePath=_inferenceModelFilePath;
@property(readonly) NSString *inferenceModelName; // @synthesize inferenceModelName=_inferenceModelName;
- (void).cxx_destruct;

@end

