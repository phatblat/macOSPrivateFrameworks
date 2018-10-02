//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTask.h"

@interface NSTask (WiFiVelocity)
+ (void)mobilewifitoolWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)securityWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)pmsetEverythingWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)applebtDumpPacketLogWithFileName:(id)arg1 timeout:(double)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)bluetoothReporterWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)wlCurpowerWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)nvramBootArgsWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)syslogWithTimeout:(double)arg1 outputURL:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)tcpdumpWithInterfaceName:(id)arg1 outputPath:(id)arg2 timeout:(double)arg3 queue:(id)arg4 startBlock:(CDUnknownBlockType)arg5 endBlock:(CDUnknownBlockType)arg6;
+ (void)monitorModeWithInterfaceName:(id)arg1 outputPath:(id)arg2 timeout:(double)arg3 queue:(id)arg4 startBlock:(CDUnknownBlockType)arg5 endBlock:(CDUnknownBlockType)arg6;
+ (void)cctoolWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)killallWithProcessName:(id)arg1 timeout:(double)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)darwinupListWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)sysdiagnoseWithTimeout:(double)arg1 outputPath:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)ioregWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 updateBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)topWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)scutilWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)ipconfigWithInterfaceName:(id)arg1 timeout:(double)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)ifconfigWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)kextstatWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)arpWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)ndpWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)netstatWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)sysctlHWModelWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)swversWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)tracerouteWithAddress:(id)arg1 maxTTL:(long long)arg2 waittime:(long long)arg3 queries:(long long)arg4 interfaceName:(id)arg5 timeout:(double)arg6 queue:(id)arg7 errorBlock:(CDUnknownBlockType)arg8 completeBlock:(CDUnknownBlockType)arg9;
+ (void)curlWithAddress:(id)arg1 interfaceName:(id)arg2 timeout:(double)arg3 queue:(id)arg4 errorBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)pingWithAddress:(id)arg1 count:(long long)arg2 trafficClass:(id)arg3 dataLength:(unsigned long long)arg4 interfaceName:(id)arg5 timeout:(double)arg6 wait:(double)arg7 interval:(double)arg8 queue:(id)arg9 errorBlock:(CDUnknownBlockType)arg10 completeBlock:(CDUnknownBlockType)arg11;
+ (void)pingWithTimeout:(double)arg1 arguments:(id)arg2 queue:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;
+ (void)miniSystemProfilerWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)fullSystemProfilerWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)spindumpWithTimeout:(double)arg1 queue:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)untarWithSource:(id)arg1 destination:(id)arg2 timeout:(double)arg3 queue:(id)arg4 errorBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)tarWithSource:(id)arg1 destination:(id)arg2 timeout:(double)arg3 queue:(id)arg4 errorBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)dittoWithSource:(id)arg1 destination:(id)arg2 timeout:(double)arg3 queue:(id)arg4 errorBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 queue:(id)arg4 startBlock:(CDUnknownBlockType)arg5 updateBlock:(CDUnknownBlockType)arg6 endBlock:(CDUnknownBlockType)arg7;
+ (BOOL)__checkLaunchPath:(id)arg1;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 queue:(id)arg4 errorBlock:(CDUnknownBlockType)arg5 updateBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
@end

