//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SDRDiagnosticReporter;

@interface CSDiagnosticReporter : NSObject
{
    SDRDiagnosticReporter *_reporter;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SDRDiagnosticReporter *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withContext:(id)arg3;
- (id)init;

@end

