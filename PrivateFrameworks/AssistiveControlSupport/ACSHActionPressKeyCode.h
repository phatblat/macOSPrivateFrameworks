//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionPressKeyCode : ACSHAction
{
    BOOL _usesMacKeyCode;
    BOOL _shouldExecuteSystemFunction;
    BOOL _shouldNotLockModifierKey;
    unsigned long long _macKeyCode;
    unsigned long long _usbKeyCode;
    long long _keyboardHWType;
    unsigned long long _modifiers;
}

+ (id)actionWithUSBKeyCode:(unsigned long long)arg1 keyboardHWType:(long long)arg2 modifiers:(unsigned long long)arg3;
+ (id)actionWithMacKeyCode:(unsigned long long)arg1 keyboardHWType:(long long)arg2 modifiers:(unsigned long long)arg3;
@property(nonatomic) BOOL shouldNotLockModifierKey; // @synthesize shouldNotLockModifierKey=_shouldNotLockModifierKey;
@property(nonatomic) BOOL shouldExecuteSystemFunction; // @synthesize shouldExecuteSystemFunction=_shouldExecuteSystemFunction;
@property(nonatomic) unsigned long long modifiers; // @synthesize modifiers=_modifiers;
@property(nonatomic) long long keyboardHWType; // @synthesize keyboardHWType=_keyboardHWType;
@property(nonatomic) BOOL usesMacKeyCode; // @synthesize usesMacKeyCode=_usesMacKeyCode;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)repeatEndedWithEventSourceData:(id)arg1;
- (void)performDeactivateWithEventSourceData:(id)arg1;
- (void)performWithEventSourceData:(id)arg1;
- (void)performDoubleActionWithEventSourceData:(id)arg1;
- (BOOL)shouldPerformDoubleActionIfPossible;
- (void)_performDoubleAction:(BOOL)arg1 eventSourceData:(id)arg2 keyDown:(BOOL)arg3;
@property(nonatomic) unsigned long long macKeyCode; // @synthesize macKeyCode=_macKeyCode;
@property(nonatomic) unsigned long long usbKeyCode; // @synthesize usbKeyCode=_usbKeyCode;
- (id)displayString;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)init;

@end

