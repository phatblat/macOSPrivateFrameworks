//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CVMLMetalContext : NSObject
{
    BOOL _useGPU;
    id <MTLDevice> _metalDevice;
    NSDictionary *_wisdomParams;
}

+ (id)mapMetalDeviceNameToWisdomParams;
@property(readonly) BOOL useGPU; // @synthesize useGPU=_useGPU;
@property(readonly) NSDictionary *wisdomParams; // @synthesize wisdomParams=_wisdomParams;
@property(readonly) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (void).cxx_destruct;
- (void)initWisdomParams;
- (void)setMetalDevice:(id)arg1;
- (id)initWithMetalDevice:(id)arg1;

@end
