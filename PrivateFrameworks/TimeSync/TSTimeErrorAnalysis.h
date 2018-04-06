//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSTimeErrorAnalysis : NSObject
{
    BOOL _calculated;
    long long _numberOfErrors;
    double *_timestamps;
    double *_timeErrors;
    double _averagePeriod;
    long long _lowestWindowSize;
    long long _highestWindowSize;
    long long _calculatedStepSize;
}

+ (id)additionalScriptPlots:(id)arg1;
+ (id)additionalScriptRecords;
+ (id)additionalScriptInitialization;
+ (id)plotSize;
+ (id)plotYLimits:(id)arg1;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
+ (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(BOOL)arg5;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
@property(readonly, nonatomic) long long calculatedStepSize; // @synthesize calculatedStepSize=_calculatedStepSize;
@property(readonly, nonatomic) long long highestWindowSize; // @synthesize highestWindowSize=_highestWindowSize;
@property(readonly, nonatomic) long long lowestWindowSize; // @synthesize lowestWindowSize=_lowestWindowSize;
@property(readonly, nonatomic) BOOL calculated; // @synthesize calculated=_calculated;
@property(readonly, nonatomic) double averagePeriod; // @synthesize averagePeriod=_averagePeriod;
@property(readonly, nonatomic) double *timeErrors; // @synthesize timeErrors=_timeErrors;
@property(readonly, nonatomic) double *timestamps; // @synthesize timestamps=_timestamps;
@property(readonly, nonatomic) long long numberOfErrors; // @synthesize numberOfErrors=_numberOfErrors;
- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)arg1;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (BOOL)exportAnalysisToDirectoryURL:(id)arg1;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (void)performAnalysisWithThreadingOption:(long long)arg1;
- (void)performAnalysis;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
@property(readonly, nonatomic) long long threadingSegment; // @dynamic threadingSegment;
@property(readonly, nonatomic) long long threadingLimit; // @dynamic threadingLimit;
@property(readonly, nonatomic) long long analysisLimit; // @dynamic analysisLimit;
- (id)initWithTimeErrorValues:(id)arg1;

@end
