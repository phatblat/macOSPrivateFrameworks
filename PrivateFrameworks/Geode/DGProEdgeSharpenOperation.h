//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGProEdgeSharpenOperation : DGOperation
{
    int _legacyVersion;
    NSNumber *_inputSharpness;
    NSNumber *_inputEdgeScale;
    NSNumber *_inputFalloff;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
+ (BOOL)_doNotScaleFalloff;
@property(copy, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff=_inputFalloff;
@property(copy, nonatomic) NSNumber *inputEdgeScale; // @synthesize inputEdgeScale=_inputEdgeScale;
@property(copy, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness=_inputSharpness;
@property int inputProEdgeSharpenLegacyVersion; // @synthesize inputProEdgeSharpenLegacyVersion=_legacyVersion;
- (void)setOperationDefaults;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)_filterWithScalingFactor:(double)arg1 pipelineVersion:(long long)arg2 legacyVersion:(int)arg3;
- (BOOL)isMigratable;

@end
