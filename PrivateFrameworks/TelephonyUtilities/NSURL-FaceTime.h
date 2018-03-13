//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (FaceTime)
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(BOOL)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(id)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(id)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(id)arg2 audioOnly:(BOOL)arg3;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(id)arg2 audioOnly:(BOOL)arg3;
- (BOOL)isShowInCallUIURL;
- (BOOL)isLaunchForIncomingCallURL;
- (BOOL)isDialCallURL;
- (id)addressBookUID;
- (BOOL)isTelephonyURL;
- (BOOL)hasNoPromptOption;
- (BOOL)isFaceTimeAudioPromptURL;
- (BOOL)isFaceTimeAudioURL;
- (BOOL)isFaceTimePromptURL;
- (BOOL)isFaceTimeURL;
- (BOOL)_isPhoneNumberID:(id)arg1;
- (id)faceTimeDestinationAccount;
@end

