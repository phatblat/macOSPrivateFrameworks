//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject
{
    NSArray *_workers;
    PHAWorker *_lastActiveWorker;
    PHAJobConstraints *_lastConstraints;
}

+ (unsigned long long)stateCode;
@property(retain, nonatomic) PHAJobConstraints *lastConstraints; // @synthesize lastConstraints=_lastConstraints;
@property(retain, nonatomic) PHAWorker *lastActiveWorker; // @synthesize lastActiveWorker=_lastActiveWorker;
@property(readonly, nonatomic) NSArray *workers; // @synthesize workers=_workers;
- (void).cxx_destruct;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)recordConstraintChange:(id)arg1;
- (id)initWithWorkers:(id)arg1;
- (id)statusAsDictionary;
- (void)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1;

@end
