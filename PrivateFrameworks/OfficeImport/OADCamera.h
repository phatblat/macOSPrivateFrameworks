//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADCamera : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setZoom:(float)arg1;
- (float)zoom;
- (void)setFieldOfView:(float)arg1;
- (float)fieldOfView;
- (void)setCameraType:(int)arg1;
- (int)cameraType;
- (void)setRotation:(id)arg1;
- (id)rotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

