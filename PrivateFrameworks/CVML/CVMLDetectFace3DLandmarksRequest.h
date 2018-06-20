//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLRequest.h>

@class NSArray, NSError, NSNumber;

@interface CVMLDetectFace3DLandmarksRequest : CVMLRequest
{
    NSError *_initializationError;
    NSArray *_inputFaces;
    NSNumber *_pixelFocalLengthNumber;
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
- (void).cxx_destruct;
- (BOOL)internalProcessWithHandler:(id)arg1 error:(id *)arg2;
- (void)internalDetermineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

