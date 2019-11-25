//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWDServerConnection, NSObject<OS_dispatch_queue>, NSSet;

__attribute__((visibility("hidden")))
@interface AnalyticsAgent : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_symptomsAWDConnection;
    NSSet *_awdSymptomsConfiguredMetricIds;
}

+ (id)_awdSignificantOperationalEventMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5;
+ (void)updateAWDReport:(id)arg1 withEvents:(id)arg2;
+ (int)awdDampeningType:(short)arg1;
+ (int)awdHandledResult:(short)arg1;
+ (id)_awdSymptomsDiagnosticIncidentReportMetricForDiagnosticCase:(id)arg1;
+ (id)_awdSymptomsDiagnosticNotificationTokenMetricForTokenString:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds; // @synthesize awdSymptomsConfiguredMetricIds=_awdSymptomsConfiguredMetricIds;
@property(retain) AWDServerConnection *symptomsAWDConnection; // @synthesize symptomsAWDConnection=_symptomsAWDConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (void)postDiagnosticIncidentReportForCase:(id)arg1;
- (void)apnsPostTokenEmpty;
- (void)apnsPostTokenNotSet;
- (void)apnsPostAPNSNotEnabled;
- (void)apnsPostTokenConversionError;
- (void)apnsPostNotificationToken:(id)arg1;
- (void)_handleQuery:(unsigned int)arg1;
- (void)_postMetric:(id)arg1 metricIdentifier:(unsigned int)arg2;
- (void)postMetric:(id)arg1 metricIdentifier:(unsigned int)arg2;
- (void)_registerAWDQueriableMetric:(unsigned int)arg1;
- (id)initWithSymptomsAWDConnection:(id)arg1 queue:(id)arg2;

@end

