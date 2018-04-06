//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKPlatform : NSObject
{
    unsigned long long _memSize;
    int _numCPUs;
    BOOL _isMac;
    BOOL _proceduralRoadAlpha;
    BOOL _useCheapTrafficShader;
    BOOL _supportsBuildingStrokes;
    BOOL _supports3DBuildingStrokes;
    BOOL _lowPerformanceDevice;
    BOOL _supportsCoastlineGlows;
    BOOL _supportsPerFragmentLighting;
    BOOL _supportsARMode;
}

+ (id)sharedPlatform;
@property(readonly, nonatomic) BOOL supportsARMode; // @synthesize supportsARMode=_supportsARMode;
@property(readonly, nonatomic) BOOL supportsPerFragmentLighting; // @synthesize supportsPerFragmentLighting=_supportsPerFragmentLighting;
@property(readonly, nonatomic) BOOL supportsCoastlineGlows; // @synthesize supportsCoastlineGlows=_supportsCoastlineGlows;
@property(readonly, nonatomic) BOOL supports3DBuildingStrokes; // @synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes;
@property(readonly, nonatomic) BOOL supportsBuildingStrokes; // @synthesize supportsBuildingStrokes=_supportsBuildingStrokes;
@property(readonly, nonatomic) BOOL useCheapTrafficShader; // @synthesize useCheapTrafficShader=_useCheapTrafficShader;
@property(readonly, nonatomic) BOOL proceduralRoadAlpha; // @synthesize proceduralRoadAlpha=_proceduralRoadAlpha;
@property(readonly, nonatomic) unsigned long long memorySize; // @synthesize memorySize=_memSize;
@property(readonly, nonatomic) double routeLineSimplificationEpsilon;
@property(readonly, nonatomic) BOOL lowPerformanceDevice;
@property(readonly, nonatomic) BOOL supports3DBuildings;
@property(readonly, nonatomic) BOOL supportsBuildingShadows;
@property(readonly, nonatomic) unsigned char processingQueueWidth;
@property(readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property(readonly, nonatomic) BOOL shouldPregenerateLabelGlyphs;
@property(readonly, nonatomic) BOOL shouldLayoutLabelsInParallel;
@property(readonly, nonatomic) BOOL shouldStyleLabelsInParallel;
@property(readonly, nonatomic) BOOL supportsHiResBuildings;
@property(readonly, nonatomic) BOOL shouldDrawWhenReady;
@property(readonly, nonatomic) BOOL isPad;
@property(readonly, nonatomic) BOOL canMakeSharingThumbnails;
@property(readonly, nonatomic) BOOL supportsHiResRTT;
@property(readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
- (unsigned long long)tileMaximumLimit:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
- (void)_determineHardware;
- (unsigned long long)_calculateMemSize;
- (void)dealloc;
- (id)init;

@end
