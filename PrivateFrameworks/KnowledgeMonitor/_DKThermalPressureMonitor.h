//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKThermalPressureMonitor : _DKMonitor
{
    BOOL _initialized;
    int _thermalPressureToken;
    int _lastThermalPressureLevel;
}

+ (id)entitlements;
+ (id)eventStream;
@property(nonatomic) int lastThermalPressureLevel; // @synthesize lastThermalPressureLevel=_lastThermalPressureLevel;
@property(nonatomic) int thermalPressureToken; // @synthesize thermalPressureToken=_thermalPressureToken;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
- (void)synchronouslyReflectCurrentValue;
- (void)getThermalPressureLevelWithToken:(int)arg1;
- (void)stop;
- (void)start;
- (void)setCurrentThermalLevel:(int)arg1;
- (id)loadState;
- (void)saveState;

@end

