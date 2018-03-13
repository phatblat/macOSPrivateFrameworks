//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PLOperator;

@interface PLCFNotificationOperatorComposition : NSObject
{
    BOOL _listeningForNotifications;
    BOOL _isStateRequired;
    int _stateToken;
    NSString *_notificationName;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property int stateToken; // @synthesize stateToken=_stateToken;
@property BOOL isStateRequired; // @synthesize isStateRequired=_isStateRequired;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
@property BOOL listeningForNotifications; // @synthesize listeningForNotifications=_listeningForNotifications;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
@property(retain) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listenForNotifications:(BOOL)arg1;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;

@end

