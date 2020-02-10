//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSExtensionRequestHandling.h"

@class NSDate, NSObject<OS_os_log>, NSObject<OS_os_transaction>, NSString, _DASActivity, _DASExtensionRemoteContext;

@interface _DASExtension : NSObject <NSExtensionRequestHandling>
{
    _DASExtensionRemoteContext *_context;
    id <_DASExtensionRunner> _runner;
    _DASActivity *_activity;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_log> *_log;
    NSDate *_startTime;
}

@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) _DASActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) id <_DASExtensionRunner> runner; // @synthesize runner=_runner;
@property(retain, nonatomic) _DASExtensionRemoteContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)suspend;
- (void)runner:(id)arg1 performActivity:(id)arg2;
- (void)_activityCompletedWithStatus:(unsigned char)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
