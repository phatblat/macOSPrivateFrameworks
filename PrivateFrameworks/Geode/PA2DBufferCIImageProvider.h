//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PA2DBuffer;

__attribute__((visibility("hidden")))
@interface PA2DBufferCIImageProvider : NSObject
{
    PA2DBuffer *_buffer;
    BOOL _endAccessOnDealloc;
}

- (void).cxx_destruct;
- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)dealloc;
- (id)initWithBuffer:(id)arg1 endAccessOnDealloc:(BOOL)arg2;

@end
