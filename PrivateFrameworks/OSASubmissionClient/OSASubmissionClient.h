//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSASubmissionServices.h"

@class NSString, NSXPCConnection;

@interface OSASubmissionClient : NSObject <OSASubmissionServices>
{
    NSXPCConnection *_connection;
    id <OSASubmissionServices> _synchRemoteObjectProxy;
}

- (void).cxx_destruct;
- (void)resetMessageTracer;
- (void)fetchMessageTracerWhitelistWithVersion:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)fetchMessageTracerWhitelistWithReply:(CDUnknownBlockType)arg1;
- (void)queryMessageTracer:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchTypeBlackListWithReply:(CDUnknownBlockType)arg1;
- (void)fetchMainConfigFileWithOverrrides:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(CDUnknownBlockType)arg1;
- (void)fetchDailyUserDynamicPrefLoggingListWithReply:(CDUnknownBlockType)arg1;
- (void)updateConfigFile;
- (void)canSubmitLogOfType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)cleanupWithHomeDirectoryLocation:(id)arg1;
- (void)submitWithOptions:(id)arg1 resultsCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
