//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralManagerDelegate.h"
#import "CBScalablePipeManagerDelegate.h"

@class NSSet, NSString, WPDaemonServer;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>
{
    BOOL _restricted;
    BOOL _testMode;
    long long _state;
    WPDaemonServer *_server;
    NSString *_name;
    NSSet *_cbManagers;
}

+ (id)cbStateAsString:(long long)arg1;
+ (id)wpStateAsString:(long long)arg1;
@property(retain, nonatomic) NSSet *cbManagers; // @synthesize cbManagers=_cbManagers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property __weak WPDaemonServer *server; // @synthesize server=_server;
@property(nonatomic) BOOL testMode; // @synthesize testMode=_testMode;
@property(nonatomic) BOOL restricted; // @synthesize restricted=_restricted;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)update;
- (void)updateState:(long long)arg1 Restricted:(BOOL)arg2;
- (void)cbManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)generateStateDump;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)cleanup;
- (id)initWithServer:(id)arg1 Name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
