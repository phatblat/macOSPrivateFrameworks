//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriCore/SiriCoreDataDecompressor.h>

@interface SiriCoreZlibDataDecompressor : SiriCoreDataDecompressor
{
    struct z_stream_s _inflateStream;
    unsigned char _inflateBuffer[8192];
}

- (id)decompressedDataForData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

