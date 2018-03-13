//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface PXPeopleProgressManager : NSObject
{
    BOOL _monitoringProgress;
    BOOL _processingComplete;
    id <PXPeopleProgressDataSource> _dataSource;
    double _updateInterval;
    double _progress;
    unsigned long long _processingStatus;
    NSTimer *_statusTimer;
}

@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(nonatomic) unsigned long long processingStatus; // @synthesize processingStatus=_processingStatus;
@property(readonly) BOOL processingComplete; // @synthesize processingComplete=_processingComplete;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic, getter=isMonitoringProgress) BOOL monitoringProgress; // @synthesize monitoringProgress=_monitoringProgress;
@property(retain, nonatomic) id <PXPeopleProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)_progressComplete:(double)arg1;
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;
- (void)_scheduleNextUpdate;
- (void)updateProgressWithForce:(BOOL)arg1;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
@property(readonly) BOOL hasFaceProcessingTodo;
- (BOOL)hasSubstantialProcessingUsingMinAssetCount:(BOOL)arg1;
@property(readonly) BOOL shouldUseProgressFooter;
@property(readonly) BOOL shouldUseInterstitial;
@property(readonly) BOOL featureUnlocked;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

