//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSFileCompression : NSObject
{
}

+ (id)_compressionLock;
+ (struct CompressionQueueContext_s *)_compressionQueueContext;
+ (BOOL)_compressFile:(const char *)arg1 error:(id *)arg2;
+ (BOOL)compressDirectory:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2 error:(id *)arg3;
+ (BOOL)compressFile:(id)arg1 error:(id *)arg2;
+ (id)log;

@end

