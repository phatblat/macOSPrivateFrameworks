//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXPSignpostTestUtility : NSObject
{
}

+ (void)_outputCSVForPerformanceTestResults:(id)arg1 includeCSVDelimiters:(BOOL)arg2 includeTestInfo:(BOOL)arg3 saveToFile:(id)arg4;
+ (void)outputCSVForPerformanceTestResults:(id)arg1;
+ (id)filePathForAppDirectory;
+ (id)_csvFromPerformanceTestResults:(id)arg1 includeCSVHeaders:(BOOL)arg2;
+ (id)csvFromPerformanceTestResults:(id)arg1;
+ (id)_machineModelForLogging;
+ (id)_timestampForLogging;
+ (id)_parseSignpostsWithConfiguration:(id)arg1;
+ (id)_parseSignpostsUsingToolWithConfiguration:(id)arg1 parseToolPath:(id)arg2;
+ (id)_argumentsForConfiguration:(id)arg1;
+ (id)_parseSignpostsWithConfiguration:(id)arg1 parseToolPath:(id)arg2;
+ (id)parseSignpostsWithConfiguration:(id)arg1 expectedEventCount:(unsigned long long)arg2 parseToolPath:(id)arg3;
+ (id)parseSignpostsWithConfiguration:(id)arg1 expectedEventCount:(unsigned long long)arg2 useParseTool:(BOOL)arg3;

@end

