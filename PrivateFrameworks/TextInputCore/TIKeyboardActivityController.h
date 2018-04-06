//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIKeyboardActivityControlling.h"
#import "TIKeyboardAssertionManagerDelegate.h"

@class NSHashTable, NSObject<OS_dispatch_source>, NSString, NSTimer;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling>
{
    BOOL _isDirty;
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    unsigned long long _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
    NSTimer *_inactivityTimer;
    NSHashTable *_observers;
}

+ (double)defaultKeyboardIdleTimeoutInterval;
+ (double)keyboardIdleTimeoutInterval;
+ (id)singletonInstance;
+ (id)sharedController;
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;
+ (void)setSharedController:(id)arg1;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *inactivityTimer; // @synthesize inactivityTimer=_inactivityTimer;
- (BOOL)shouldBecomeClean;
- (void)setKeyboardCleanIfNecessary;
- (BOOL)shouldBecomeDirty;
- (void)setKeyboardDirtyIfNecessary;
- (void)inactivityTimerFired:(id)arg1;
- (void)touchInactivityTimer;
- (void)backgroundActivityAssertionsDidChange;
- (void)keyboardAssertionsDidChange;
- (void)keyboardBackgroundActivityAssertionsDidChange:(id)arg1;
- (void)keyboardAssertionsDidChange:(id)arg1;
- (void)updateActivityState;
@property(readonly, nonatomic) unsigned long long activityState;
- (unsigned long long)getExcessMemoryInBytes;
- (void)handleMemoryStatusPressure:(unsigned long long)arg1;
- (id)createMemoryPressureSource;
- (void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)notifyTransitionWithContext:(id)arg1;
- (void)removeActivityObserver:(id)arg1;
- (void)addActivityObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
