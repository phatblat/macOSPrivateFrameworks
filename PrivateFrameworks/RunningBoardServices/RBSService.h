//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RBSConnectionServiceDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, RBSConnection;

@interface RBSService : NSObject <RBSConnectionServiceDelegate>
{
    id <RBSServiceDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

- (void).cxx_destruct;
- (void)willTerminateProcessWithAcknowledgement:(CDUnknownBlockType)arg1;
- (void)didLoseInheritances:(id)arg1;
- (void)didReceiveInheritances:(id)arg1;
- (id)inheritances;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

