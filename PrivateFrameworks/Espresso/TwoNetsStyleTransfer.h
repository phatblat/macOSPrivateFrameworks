//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TwoNetsStyleTransfer : NSObject
{
    void *ctx;
    void *plan;
    CDStruct_2bc666a5 net;
    basic_string_23d93216 output_layer_name;
    unsigned long long dim_data0[5];
    unsigned long long dim_data0__small[5];
    unsigned long long dim_data2[5];
    unsigned long long dim_data2__small[5];
    struct __IOSurface *result;
    struct postprocessing_settings_t current_postprocessing_settings;
    NSString *currentNetworkPath;
}

+ (BOOL)supportsANE;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __IOSurface *)executeSyncWithImage:(struct __CVBuffer *)arg1 smallImage:(struct __CVBuffer *)arg2;
- (void)dealloc;
- (int)heightBig;
- (int)heightSmall;
- (int)widthBig;
- (int)widthSmall;
- (int)load:(id)arg1 outputName:(id)arg2;
- (id)init;

@end
