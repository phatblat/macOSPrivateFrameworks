//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXGMetalRenderTextureStore : NSObject
{
    CDStruct_dcc83465 *_textures;
    long long _count;
    long long _capacity;
    BOOL _sorted;
}

- (void)_sortIfNeeded;
- (void)removeAllTextures;
- (void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)addTexture:(CDStruct_dcc83465)arg1;
- (void)dealloc;
- (id)init;

@end
