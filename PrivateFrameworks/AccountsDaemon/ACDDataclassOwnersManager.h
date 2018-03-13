//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

- (void).cxx_destruct;
- (id)_dataclassOwnersManagerConnection;
- (BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id *)arg4;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)init;

@end

