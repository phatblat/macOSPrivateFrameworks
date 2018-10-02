//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKHistoricalMonitor.h"
#import "_DKInstantMonitor.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, _DKEvent;

@interface _DKMonitor : NSObject <_DKInstantMonitor, _DKHistoricalMonitor>
{
    NSDictionary *_state;
    NSString *_bootSessionUUID;
    CDUnknownBlockType instantHandler;
    CDUnknownBlockType historicalHandler;
    CDUnknownBlockType shutdownHandler;
    NSDate *lastUpdate;
    _DKEvent *_currentEvent;
    NSMutableDictionary *_instantState;
    NSMutableDictionary *_historicalState;
    CDUnknownBlockType _eventComparator;
    CDUnknownBlockType _filter;
    long long _references;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)eventStream;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long references; // @synthesize references=_references;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(copy, nonatomic) CDUnknownBlockType eventComparator; // @synthesize eventComparator=_eventComparator;
@property(readonly, nonatomic) NSMutableDictionary *historicalState; // @synthesize historicalState=_historicalState;
@property(readonly, nonatomic) NSMutableDictionary *instantState; // @synthesize instantState=_instantState;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate;
@property(copy, nonatomic) CDUnknownBlockType shutdownHandler; // @synthesize shutdownHandler;
@property(copy, nonatomic) CDUnknownBlockType historicalHandler; // @synthesize historicalHandler;
@property(copy, nonatomic) CDUnknownBlockType instantHandler; // @synthesize instantHandler;
- (void).cxx_destruct;
- (void)systemClockDidChange:(id)arg1;
- (void)update;
- (void)invalidateInstantState;
@property(retain, nonatomic) _DKEvent *currentEvent; // @synthesize currentEvent=_currentEvent;
- (void)setCurrentEvent:(id)arg1 inferHistoricalState:(BOOL)arg2;
- (BOOL)instantMonitorNeedsDeactivation;
- (BOOL)instantMonitorNeedsActivation;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (void)saveState;
- (id)loadState;
- (void)dealloc;
- (id)init;
@property(readonly, copy, nonatomic) NSSet *classesForSecureStateDecoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

