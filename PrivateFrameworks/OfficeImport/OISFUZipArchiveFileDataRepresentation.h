//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

#import "SFUZipArchiveDataRepresentation.h"

@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

