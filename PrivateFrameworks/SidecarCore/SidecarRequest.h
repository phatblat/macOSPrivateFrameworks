//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"
#import "SidecarSessionDelegate.h"
#import "SidecarTransferDelegate.h"

@class NSArray, NSData, NSError, NSMutableArray, NSProgress, NSString, SidecarService, SidecarTransferReceiver;

@interface SidecarRequest : NSObject <SidecarSessionDelegate, SidecarTransferDelegate, NSProgressReporting>
{
    id <SidecarRequestDelegate> _delegate;
    NSArray *_devices;
    NSArray *_items;
    NSError *_error;
    NSProgress *_progress;
    SidecarService *_service;
    SidecarTransferReceiver *_transfer;
    NSMutableArray *_sessions;
    long long _requestID;
    unsigned int _cancelled:1;
    unsigned int _finished:1;
}

@property __weak id <SidecarRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sidecarSession:(id)arg1 invalidatedWithError:(id)arg2;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarTransfer:(id)arg1 didComplete:(id)arg2;
- (void)writeToPasteboard:(id)arg1;
- (void)readFromPasteboard:(id)arg1;
- (void)start;
- (void)cancel;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *localizedItemName;
- (void)setError:(id)arg1;
@property(readonly) NSError *error; // @dynamic error;
@property(readonly) NSString *uniformTypeIdentifier;
@property(readonly) NSData *data; // @dynamic data;
- (void)setItems:(id)arg1;
@property(readonly) NSArray *items; // @dynamic items;
- (void)setFinished:(_Bool)arg1;
@property(readonly, getter=isFinished) _Bool finished; // @dynamic finished;
@property(copy) NSArray *devices; // @dynamic devices;
- (void)setCancelled:(_Bool)arg1;
@property(readonly, getter=isCancelled) _Bool cancelled; // @dynamic cancelled;
@property(readonly) SidecarService *service;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithService:(id)arg1 devices:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

