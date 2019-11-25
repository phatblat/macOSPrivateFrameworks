//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRWorkspaceInjector.h>

__attribute__((visibility("hidden")))
@interface SCRWorkspaceInjectorScreenReader : SCRWorkspaceInjector
{
}

+ (BOOL)shouldInitializeHotspots;
+ (BOOL)shouldUnmuteAudio;
+ (BOOL)shouldObserveFunctionRow;
+ (BOOL)shouldUpdateConsoleEnabled;
+ (BOOL)shouldRegisterForSleepWakeNotifications;
+ (BOOL)shouldRegisterForNotifications;
+ (BOOL)shouldRegisterForEventHandlerTargets;
+ (id)systemKeyManager;
+ (id)siriObserver;
+ (id)eventFactory;
+ (id)brailleFocusManager;
+ (id)applicationManager;
+ (id)observerManager;
+ (id)rotorManager;
+ (id)gestureManager;
+ (id)contextualHelpManager;
+ (id)visualManager;
+ (id)captionWindow;
+ (id)mouse;
+ (id)outputManager;
+ (id)userDefaults;

@end

