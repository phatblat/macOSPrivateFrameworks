//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface VCCKNotificationCenter : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observerTable;
    APSConnection *_connection;
    NSString *_topic;
}

+ (void)notificationCenterForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
