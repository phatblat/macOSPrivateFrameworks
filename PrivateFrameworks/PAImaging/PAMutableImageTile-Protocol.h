//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAImageTile.h"

@class IPARegion, PAOpenGLContext;

@protocol PAMutableImageTile <PAImageTile>
- (BOOL)writeBufferRegion:(IPARegion *)arg1 withBlock:(void (^)(PAMutableBuffer *))arg2;
- (BOOL)writeTextureRegion:(IPARegion *)arg1 withContext:(PAOpenGLContext *)arg2 block:(void (^)(PAGLTextureRect *))arg3;
@end
