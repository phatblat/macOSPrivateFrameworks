//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileHandle.h"

@class NSString;

@interface ASBAtomicFileHandle : NSFileHandle
{
    NSFileHandle *_backingHandle;
    NSString *_tempFilePath;
    NSString *_destFilePath;
}

+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForWritingAtPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (void)writeData:(id)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)availableData;
- (void)synchronizeFile;
- (void)closeFile;
- (BOOL)commitChangesAndReturnError:(id *)arg1;

@end

