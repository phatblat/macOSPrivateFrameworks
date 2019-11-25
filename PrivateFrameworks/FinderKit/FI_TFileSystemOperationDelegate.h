//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFileSystemOperationDelegateProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TFileSystemOperationDelegate : NSObject <TFileSystemOperationDelegateProtocol>
{
    _Bool tornDown;
    FI_TFileSystemOperationDelegate *_selfReference;
}

+ (id)makeDelegate;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
@property(retain, nonatomic) FI_TFileSystemOperationDelegate *selfReference; // @synthesize selfReference=_selfReference;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (int)asyncNodeOperation:(id)arg1 completedNotification:(const struct TOperationMonitor *)arg2;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct TOperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (id)initPriv;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

