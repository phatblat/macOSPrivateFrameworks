//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NPDiagnosticReport : NSObject
{
}

+ (void)logInternalError:(id)arg1 context:(id)arg2;
+ (void)logFetchError:(id)arg1 requestType:(int)arg2;
+ (void)logLatencyMapTimeout:(long long)arg1;
+ (void)logConnectionFailed:(long long)arg1 error:(int)arg2 onRamp:(id)arg3;
+ (void)logTTFBDelayed:(unsigned long long)arg1 rtt:(unsigned long long)arg2 isFirstTunnel:(BOOL)arg3 interfaceType:(long long)arg4 onRamp:(id)arg5;
+ (BOOL)logNSPDiagnosticReport:(id)arg1 event:(id)arg2 context:(id)arg3;

@end

