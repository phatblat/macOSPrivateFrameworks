//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface OADPoint3D : NSObject <NSCopying>
{
    float mX;
    float mY;
    float mZ;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)z;
- (float)y;
- (float)x;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end

