//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IFFileReader : NSObject
{
    int fileDescriptor;
    long long currentOffset;
    struct stat fileStat;
    NSString *filePath;
    BOOL bigEndian;
}

- (BOOL)extractInlineCPIOAtOffset:(long long)arg1 withLength:(unsigned long long)arg2 toPath:(id)arg3;
- (BOOL)mapDataFromOffset:(long long)arg1 withLength:(unsigned long long)arg2 intoData:(id *)arg3;
- (BOOL)extractDataWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 withCompressionType:(int)arg3 fromOffset:(long long)arg4 toFd:(int)arg5;
- (BOOL)readDataWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 withCompressionType:(int)arg3 fromOffset:(long long)arg4 intoBuffer:(char *)arg5;
- (BOOL)_readDataAndDeflateWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 intoBuffer:(char *)arg3;
- (id)readStringWithLength:(unsigned long long)arg1 AtOffset:(long long)arg2;
- (id)readStringWithLength:(unsigned long long)arg1;
- (unsigned long long)read64AtOffset:(long long)arg1;
- (unsigned long long)read64;
- (unsigned int)read32AtOffset:(long long)arg1;
- (unsigned int)read32;
- (unsigned short)read16AtOffset:(long long)arg1;
- (unsigned short)read16;
- (unsigned char)read8AtOffset:(long long)arg1;
- (unsigned char)read8;
- (long long)seek:(long long)arg1;
- (long long)seekTo:(long long)arg1;
- (long long)position;
- (unsigned long long)size;
- (int)fileDescriptor;
- (void)readDataAsNetworkByteOrder:(BOOL)arg1;
- (void)dealloc;
- (id)intWithFile:(id)arg1;

@end

