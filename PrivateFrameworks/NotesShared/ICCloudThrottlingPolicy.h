//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCloudThrottlingLevel, NSArray, NSDate, NSTimer;

@interface ICCloudThrottlingPolicy : NSObject
{
    NSArray *_throttlingLevels;
    double _resetInterval;
    unsigned long long _currentBatchCount;
    unsigned long long _currentLevelIndex;
    NSDate *_policyStartDate;
    NSTimer *_policyResetTimer;
}

+ (void)resetSavedPolicyState;
@property(retain) NSTimer *policyResetTimer; // @synthesize policyResetTimer=_policyResetTimer;
@property(retain) NSDate *policyStartDate; // @synthesize policyStartDate=_policyStartDate;
@property(nonatomic) unsigned long long currentLevelIndex; // @synthesize currentLevelIndex=_currentLevelIndex;
@property(nonatomic) unsigned long long currentBatchCount; // @synthesize currentBatchCount=_currentBatchCount;
@property double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(retain, nonatomic) NSArray *throttlingLevels; // @synthesize throttlingLevels=_throttlingLevels;
- (void).cxx_destruct;
- (void)savePolicyState;
- (void)loadSavedPolicyState;
- (void)startPolicyResetTimer;
- (void)resetPolicy;
@property(readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property(readonly, nonatomic) double batchInterval;
- (void)changeLevelIfNecessary;
- (void)incrementBatchCount;
- (void)dealloc;
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;
- (id)init;

@end

