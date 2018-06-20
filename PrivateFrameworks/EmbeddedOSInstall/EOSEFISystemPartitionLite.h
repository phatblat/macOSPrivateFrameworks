//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface EOSEFISystemPartitionLite : NSObject
{
    BOOL _wasAlreadyMounted;
    NSString *_bsdName;
    NSURL *_mountPointURL;
    NSObject<OS_dispatch_queue> *_diskArbQueue;
    struct __DASession *_diskArbSession;
}

+ (id)internalEFISystemPartition;
@property struct __DASession *diskArbSession; // @synthesize diskArbSession=_diskArbSession;
@property(retain) NSObject<OS_dispatch_queue> *diskArbQueue; // @synthesize diskArbQueue=_diskArbQueue;
@property(retain) NSURL *mountPointURL; // @synthesize mountPointURL=_mountPointURL;
@property BOOL wasAlreadyMounted; // @synthesize wasAlreadyMounted=_wasAlreadyMounted;
@property(retain) NSString *bsdName; // @synthesize bsdName=_bsdName;
- (void).cxx_destruct;
- (void)_unregisterUnmountDissenter;
- (void)_registerUnmountDissenter;
- (id)fdrDataURL;
@property(readonly) NSString *mountPoint;
- (BOOL)unmountWithError:(id *)arg1;
- (BOOL)mountReadOnlyWithError:(id *)arg1;
@property(readonly) NSString *devNode;
- (void)dealloc;
- (id)init;

@end

