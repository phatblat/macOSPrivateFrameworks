//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUOutputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUFileOutputStream : NSObject <SFUOutputStream>
{
    struct __sFILE *mFile;
    NSString *mPath;
}

- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (long long)offset;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

