//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSObject<OS_dispatch_queue>;

@interface OITSUXPCMainController : NSObject
{
    NSCountedSet *mConnectionHandlers;
    NSObject<OS_dispatch_queue> *mConnectionHandlersQueue;
    CDUnknownBlockType mConnectionHandlerBlock;
}

+ (id)sharedController;
- (void)p_removeConnectionHandler:(id)arg1;
- (void)p_addConnectionHandler:(id)arg1;
- (void)p_handleNewConnection:(id)arg1;
- (void)runWithConnectionHandlersReturnedByBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

