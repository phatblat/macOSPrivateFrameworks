//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AURATranslator, NSObject<OS_dispatch_queue>;

@interface MXSessionManager : NSObject
{
    AURATranslator *_auraTranslator;
    shared_ptr_075de5b0 _processManager;
    NSObject<OS_dispatch_queue> *_responseQueue;
    struct map<unsigned int, MXPlayerSession *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MXPlayerSession *>>> _sessionTokenMap;
}

+ (id)sharedInstance;
+ (id)getNotificationSenderQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)processStateChanged:(const CDStruct_b957a072 *)arg1 processState:(int)arg2;
- (int)getProcessState:(const CDStruct_b957a072 *)arg1;
- (struct __SecTask *)getSecurityTask:(const CDStruct_b957a072 *)arg1;
- (basic_string_23d93216)getClientProcessName:(const CDStruct_b957a072 *)arg1;
- (_Bool)hasSessionProxyingEntitlement:(const CDStruct_b957a072 *)arg1;
- (_Bool)hasAssertionsToStartPlayback:(const CDStruct_b957a072 *)arg1 mixablePlayback:(_Bool)arg2;
- (BOOL)isDoingSpokenAudio:(id)arg1;
- (BOOL)wantsToPauseSpokenAudio:(id)arg1;
- (BOOL)wantsToDuckOthers:(id)arg1;
- (BOOL)categoryIsManual:(id)arg1;
- (BOOL)categoryIsRecording:(id)arg1;
- (BOOL)categoryIsVoiceOver:(id)arg1;
- (BOOL)categoryIsAlarm:(id)arg1;
- (BOOL)categoryIsRingtone:(id)arg1;
- (BOOL)categoryIsProcessing:(id)arg1;
- (_Bool)anyOtherClientsActive:(unsigned int)arg1;
- (struct error_code)preflightBeginInterruption:(const CDStruct_b957a072 *)arg1;
- (BOOL)requiresInterruption:(const CDStruct_b957a072 *)arg1 victim:(const CDStruct_b957a072 *)arg2;
- (_Bool)sessionIsAllowedToStopOthers:(const struct DerivedBehaviors *)arg1 sessionState:(const CDStruct_b957a072 *)arg2;
- (struct error_code)registerIOProc:(unsigned int)arg1 iocType:(unsigned char)arg2 ioProc:(const struct function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> *)arg3;
- (vector_c6bb1d04)virtualPortsForSession:(unsigned int)arg1;
- (vector_85eef765)ioControllersForSession:(unsigned int)arg1;
- (expected_01e6cd2c)eligiblePorts:(const CDStruct_b957a072 *)arg1;
- (struct error_code)deactivate:(const CDStruct_b957a072 *)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (expected_73a2de47)simulate:(const CDStruct_b957a072 *)arg1;
- (struct error_code)activate:(const CDStruct_b957a072 *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct error_code)unregisterSession:(id)arg1;
- (struct error_code)registerSession:(id)arg1;
- (id)init;
- (void)updateRunningState:(const CDStruct_b957a072 *)arg1;
- (void)destroyClientProcess:(struct ProcessToken)arg1 sessionToken:(unsigned int)arg2;
- (shared_ptr_b08b739b)findOrCreateClientProcess:(struct ProcessToken)arg1 auditToken:(CDStruct_6ad76789)arg2 sessionToken:(unsigned int)arg3;
- (id)createPlayerSessionWithSessionToken:(unsigned int)arg1 withProcessToken:(struct ProcessToken)arg2 withAuditToken:(CDStruct_6ad76789)arg3 withInterruptionHandler:(CDUnknownBlockType)arg4;
- (void)setAURA:(id)arg1 processManager:(shared_ptr_075de5b0)arg2;
- (void)postNotificationToAffectedSessionsAfterRouteChange:(id)arg1;
- (id)getProcessStateString:(int)arg1;
- (void)updateRouteConfigurationForAllPlayerSessions:(const unsigned int *)arg1;

@end
