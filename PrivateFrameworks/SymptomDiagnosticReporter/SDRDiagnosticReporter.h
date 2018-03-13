//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface SDRDiagnosticReporter : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id <SDRDiagnosticReporterDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <SDRDiagnosticReporterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (BOOL)postAWDEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)triggerRemoteSessionForSignature:(id)arg1 caseGroupID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)cancelSession:(id)arg1;
- (BOOL)endSession:(id)arg1;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 originatingProcess:(id)arg4 triggerThreshold:(id)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subtypeContext:(id)arg4 detectedProcess:(id)arg5 triggerThresholdValues:(id)arg6;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5;
- (BOOL)isSignatureValid:(id)arg1;
- (void)setupXPCInterface;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

