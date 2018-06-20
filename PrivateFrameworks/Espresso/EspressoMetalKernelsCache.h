//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface EspressoMetalKernelsCache : NSObject
{
    id <MTLLibrary> m_ShaderLibrary;
    id <MTLLibrary> m_DefaultLibrary;
    id <MTLDevice> _device;
    BOOL isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSMutableDictionary *m_kernelCache_rw;
    NSString *_kernelPrefix;
    NSDictionary *_m_kernelCache;
}

@property(retain) NSDictionary *m_kernelCache; // @synthesize m_kernelCache=_m_kernelCache;
@property(retain, nonatomic) NSString *kernelPrefix; // @synthesize kernelPrefix=_kernelPrefix;
- (void).cxx_destruct;
- (BOOL)shouldUseTexArray;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (id)kernelForFunction:(const char *)arg1;
- (void)addLibraryAtPath:(id)arg1;
- (void)loadLibraryNamed:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
