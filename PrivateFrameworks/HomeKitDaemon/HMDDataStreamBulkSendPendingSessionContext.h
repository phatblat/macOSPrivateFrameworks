//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject
{
    CDUnknownBlockType _sessionStartCallback;
    HMFTimer *_handleOpenRequestResponseTimer;
    HMFTimer *_sendCloseEventTimer;
}

@property(retain) HMFTimer *sendCloseEventTimer; // @synthesize sendCloseEventTimer=_sendCloseEventTimer;
@property(retain) HMFTimer *handleOpenRequestResponseTimer; // @synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer;
@property(readonly) CDUnknownBlockType sessionStartCallback; // @synthesize sessionStartCallback=_sessionStartCallback;
- (void).cxx_destruct;
@property(readonly) BOOL shouldCloseSessionWithTimeoutReason;
- (id)initWithSessionStartCallback:(CDUnknownBlockType)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;

@end
