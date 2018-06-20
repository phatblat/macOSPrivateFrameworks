//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktraceFrame : NSObject
{
    unsigned char _uuid[16];
    NSUUID *_imageUUID;
    unsigned long long _imageOffset;
}

@property(readonly, nonatomic) unsigned long long imageOffset; // @synthesize imageOffset=_imageOffset;
- (void)dealloc;
@property(readonly, nonatomic) const char *imageUUIDBytes;
@property(readonly, nonatomic) NSUUID *imageUUID;
- (id)initWithUUIDBytes:(const char *)arg1 andOffset:(unsigned long long)arg2;

@end
