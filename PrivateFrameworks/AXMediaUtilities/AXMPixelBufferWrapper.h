//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXMPixelBufferWrapper : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    unsigned int _orientation;
}

+ (id)new;
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;
@property(readonly, nonatomic) struct CGSize orientedSize;
@property(readonly, nonatomic) struct CGSize unorientedSize;
@property(readonly, nonatomic) unsigned int orientation;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (void)dealloc;
- (id)_initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;
- (id)init;

@end

