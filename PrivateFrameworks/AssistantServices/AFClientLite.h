//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClientLiteClientCommandHandling.h"

@class NSObject<OS_dispatch_queue>;

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _commandHandler;
}

- (void).cxx_destruct;
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 commandHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end

