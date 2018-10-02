//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HDRBackwardDisplayManagementLetterBox : NSObject
{
    unsigned long long _frameIndex;
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _defaultLibrary;
    unsigned int _displayType;
    unsigned int _colorPrimaries;
    float _displayBrightness;
    id <MTLComputePipelineState> _kernel;
    id <MTLBuffer> _config;
    id <MTLTexture> _inputTexture;
    id <MTLTexture> _outputTexture;
    unsigned long long _width;
    unsigned long long _height;
    id <MTLTexture> _metadataTexture[2];
}

- (void).cxx_destruct;
- (void)createMetadataTexture;
- (void)setupTexturesFromInputSurface:(struct __IOSurface *)arg1 outputSurface:(struct __IOSurface *)arg2;
- (long long)encodeToCommandBuffer:(id)arg1 inputSurface:(struct __IOSurface *)arg2 outputSurface:(struct __IOSurface *)arg3;
- (id)createComputePipeLineWithName:(id)arg1;
- (void)createKernels;
- (void)createConfigBuffer;
- (unsigned int)getDisplayType:(id)arg1;
- (void)setupConfigFromDictionary:(id)arg1;
- (void)setupMetal;
- (id)initWithDevice:(id)arg1 letterBoxProperties:(id)arg2;

@end

