//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AXMDiagnostics : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_diagnosticMetrics;
    BOOL _diagnosticsEnabled;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
- (void).cxx_destruct;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3 signpostStartBlock:(CDUnknownBlockType)arg4 signpostEndBlock:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSArray *metrics;
- (void)clearMetrics;
- (void)addMetric:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end

