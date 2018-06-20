//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DolbyVisionDisplayManagement : NSObject
{
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _defaultLibrary;
    id <MTLComputePipelineState> _displayManagementKernel;
    id <MTLBuffer> _config;
    id <MTLTexture> _inputYTexture;
    id <MTLTexture> _inputUVTexture;
    id <MTLTexture> _outputTexture;
}

- (void).cxx_destruct;
- (void)setupTexturesWithInput:(struct __IOSurface *)arg1 Output:(struct __IOSurface *)arg2;
- (void)encodeToCommandBuffer:(id)arg1 Input:(struct __IOSurface *)arg2 Output:(struct __IOSurface *)arg3 MetaData:(CDStruct_6fbc3b41 *)arg4 tcControl:(struct ToneCurve_Control *)arg5 hdrControl:(CDStruct_bea360c6 *)arg6;
- (void)setupMetal;
- (id)initWithDevice:(id)arg1;

@end

