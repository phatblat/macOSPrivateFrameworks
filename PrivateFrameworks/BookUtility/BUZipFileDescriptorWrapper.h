//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@interface BUZipFileDescriptorWrapper : NSObject
{
    int _fileDescriptor;
    id <BUReadChannel> _readChannel;
    NSObject<OS_dispatch_group> *_accessGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) id <BUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void).cxx_destruct;
- (void)waitForAccessToEnd;
- (void)endAccess;
- (void)beginAccess;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)init;

@end

