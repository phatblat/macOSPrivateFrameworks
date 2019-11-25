//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaultsController.h"

@class NSDate, NSDictionary, NSString;

@interface SRFUserDefaultsController : NSUserDefaultsController
{
    BOOL _preferBluetoothMicrophones;
}

+ (id)sharedUserDefaultsController;
+ (BOOL)_canAccessUserDefaults;
@property BOOL preferBluetoothMicrophones; // @synthesize preferBluetoothMicrophones=_preferBluetoothMicrophones;
- (BOOL)forceVoiceTriggerDeviceTypeDistribution:(long long *)arg1;
- (BOOL)forceSATEnrolled;
- (BOOL)forceVoiceTriggerAvailable;
@property(retain) NSDate *dyingWishForInvocationDate;
@property(getter=isGrammarCheckingEnabled) BOOL grammarCheckingEnabled;
@property(nonatomic, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;
- (BOOL)autoDismissHidesCloseButton;
@property(readonly, nonatomic) double autoDismissTextToSpeechTimeout;
@property(nonatomic) double autoDismissDelay;
@property(nonatomic, getter=isVoiceTriggerUserEnabled) BOOL voiceTriggerUserEnabled;
@property(nonatomic, getter=isLockscreenEnabled) BOOL lockscreenEnabled;
@property(nonatomic, getter=isTypeToSiriEnabled) BOOL typeToSiriEnabled;
@property NSDictionary *mostRecentCustomizedKeyboardShorcutDictionary; // @dynamic mostRecentCustomizedKeyboardShorcutDictionary;
@property NSDictionary *keyboardShortcutDictionary; // @dynamic keyboardShortcutDictionary;
- (void)notifyVoiceTriggerSuppressionNoLongerHonored;
- (void)notifyUserDidSwitchOnVoiceTrigger;
@property(readonly) NSString *preferredBluetoothMicrophoneIdentifier;
@property(readonly) BOOL isEffectiveMicrophoneInternal;
@property(readonly) NSString *effectiveMicrophoneIdentifier;
@property(getter=isStatusMenuVisible) BOOL statusMenuVisible;
- (void)_notifyStatusMenuVisibleDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)awakeAfterUsingCoder:(id)arg1;

@end

