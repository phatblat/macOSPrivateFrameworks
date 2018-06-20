//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface EspressoImage2Image : NSObject
{
    void *ctx;
    void *plan;
    CDStruct_2bc666a5 net;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> output_layer_name;
    id <MTLCommandQueue> queue;
    id <MTLDevice> device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    BOOL is_temporal_model;
    unsigned long long dim[5];
    unsigned long long dim_small[5];
    int defaultWidth;
    int defaultHeight;
    float t0;
    int scale_ratio;
    id <MTLTexture> smallOldResultTexture;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> tweaks;
    struct postprocessing_settings_t current_postprocessing_settings;
    struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> noise_k;
    struct shared_ptr<Espresso::generic_load_constant_kernel> noise_load_constant_kernel;
    NSString *currentNetworkPath;
    long long currentResolutionPreset;
    struct shared_ptr<Espresso::blob<float, 1>> precomputed_noise;
    id <MTLTexture> tmpDestinationTexture;
    int _rotation_degrees;
    int _flip_y;
}

+ (void)tuneNetworksWGWindowSize:(id)arg1;
+ (void)tuneNetworks:(id)arg1;
+ (void)gpuSync:(id)arg1 tex:(id)arg2;
+ (int)featureVersion;
+ (id)getStylesKeys;
+ (BOOL)loadStylesConfigAtDefaultsKey:(id)arg1;
+ (BOOL)loadStylesConfigAtPath:(id)arg1;
+ (void)setDefaultOption:(id)arg1 toValue:(id)arg2;
@property(nonatomic) int flip_y; // @synthesize flip_y=_flip_y;
@property(nonatomic) int rotation_degrees; // @synthesize rotation_degrees=_rotation_degrees;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)benchmark;
- (void)aggregateWisdom:(struct wisdom_trainer2 *)arg1;
- (void)_tune;
- (void)tune;
- (id)newOutputTexture;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(CDStruct_4c83c94d)arg3;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4 destinationRect:(CDStruct_4c83c94d)arg5;
- (int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)_reshapeToResolutionPreset:(long long)arg1;
- (int)reshapeToResolutionPreset:(long long)arg1 aspectRatio:(float)arg2;
- (pair_65f741c2)resolutionForPreset:(long long)arg1;
- (int)reshapeToResolutionPreset:(long long)arg1;
- (int)load:(id)arg1 resolutionPreset:(long long)arg2;
- (int)reload;
- (int)load:(id)arg1;
- (void)resetTemporalState;
- (void)_resetTemporalState;
- (int)wasReshaped;
- (void)addNoiseLayer;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)setupWithQueue:(id)arg1;
- (id)styleName;
- (id)getInternalDataForKey:(id)arg1;
- (CDStruct_2bc666a5)getEspressoNetwork;

@end

