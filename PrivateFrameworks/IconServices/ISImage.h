//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ISImage : NSObject
{
    NSData *_data;
}

+ (struct CGImage *)newCGImageWithDataSource:(id)arg1;
+ (struct CGImage *)newCGImageWithCacheFileURL:(id)arg1;
+ (struct CGColorSpace *)defaultCGColorSpace;
+ (id)imageDestinationPropertiesForScale:(unsigned int)arg1;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 toURL:(id)arg2;
- (void).cxx_destruct;
- (struct CGImageBlockSet *)copyCGImageBlockSetWithProvider:(struct CGImageProvider *)arg1;
- (void)_getImageBuffer:(void **)arg1 size:(unsigned long long *)arg2;
- (CDStruct_9d4bab76 *)_header;
@property(readonly) BOOL hasData; // @dynamic hasData;
- (id)initWithData:(id)arg1;

@end

