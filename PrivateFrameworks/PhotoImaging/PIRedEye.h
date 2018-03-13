//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputDestinationImage;
    NSArray *_inputCorrectionInfo;
    NSString *_inputCameraModel;
}

@property(retain, nonatomic) NSString *inputCameraModel; // @synthesize inputCameraModel=_inputCameraModel;
@property(retain, nonatomic) NSArray *inputCorrectionInfo; // @synthesize inputCorrectionInfo=_inputCorrectionInfo;
@property(retain, nonatomic) CIImage *inputDestinationImage; // @synthesize inputDestinationImage=_inputDestinationImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end

