//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDSoundUtilities : NSObject
{
}

+ (BOOL)_isPlaySoundEnabled;
+ (BOOL)_isAutoPlay:(id)arg1;
+ (BOOL)_isAcknowledgmentMessage:(id)arg1;
+ (BOOL)_isAssociatedMessage:(id)arg1;
+ (void)_stopSuppressingForGUID:(id)arg1;
+ (BOOL)_isSuppressedForGUID:(id)arg1;
+ (BOOL)_wasDowngraded:(id)arg1;
+ (BOOL)_isSMSMessage:(id)arg1;
+ (void)_playSMSSound;
+ (void)_playAcknowledgmentSentSound;
+ (unsigned int)_installSystemSound:(id)arg1;
+ (void)_playSoundType:(long long)arg1;
+ (long long)_smsSoundsToPlay;
+ (long long)_soundTypeForMessage:(id)arg1;
+ (void)playMessageSentSoundIfNeeded:(id)arg1;

@end
