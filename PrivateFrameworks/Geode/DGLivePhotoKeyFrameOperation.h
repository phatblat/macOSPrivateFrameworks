//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@interface DGLivePhotoKeyFrameOperation : DGOperation
{
    CDStruct_1b6d18a9 _time;
}

+ (id)attributes;
+ (id)outputKeys;
+ (id)inputKeys;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (BOOL)isGeometricallyHashEquivalent:(id)arg1;
- (unsigned long long)geometryHash;
- (BOOL)changesGeometry;
- (id)settingsDictionary;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end
