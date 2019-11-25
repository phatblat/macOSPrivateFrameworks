//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary;

@protocol NUAuxiliaryImage <NSObject>
@property(readonly) long long auxiliaryImageType;
- (struct __CVBuffer *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (NSDictionary *)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;

@optional
- (AVSemanticSegmentationMatte *)underlyingAVSemanticSegmentationMatte;
- (AVPortraitEffectsMatte *)underlyingAVPortraitEffectsMatte;
- (AVDepthData *)underlyingAVDepthData;
@end

