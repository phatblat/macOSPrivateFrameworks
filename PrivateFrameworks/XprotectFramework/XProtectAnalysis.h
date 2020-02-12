//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XprotectClientProtocol.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSURL, NSXPCConnection;

@interface XProtectAnalysis : NSObject <XprotectClientProtocol>
{
    NSURL *_fileURL;
    NSDictionary *_lsProperties;
    BOOL _malwareScanOnly;
    CDUnknownBlockType _feedback;
    CDUnknownBlockType _results;
    NSXPCConnection *_xpc;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
}

@property BOOL malwareScanOnly; // @synthesize malwareScanOnly=_malwareScanOnly;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)description;
- (void)didReceiveFeedbackOfType:(id)arg1 withInformation:(id)arg2;
- (BOOL)beginAnalysisWithHandler:(CDUnknownBlockType)arg1 contextInfo:(void *)arg2 feedback:(CDUnknownBlockType)arg3;
- (BOOL)beginAnalysisWithHandler:(CDUnknownBlockType)arg1 contextInfo:(void *)arg2;
- (BOOL)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void *)arg3 feedback:(CDUnknownBlockType)arg4;
- (BOOL)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)initWithURL:(id)arg1;

@end

