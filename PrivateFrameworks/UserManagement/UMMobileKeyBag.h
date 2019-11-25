//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMMobileKeyBag : NSObject
{
}

+ (BOOL)_start:(BOOL)arg1 syncBubbleForUser:(id)arg2 outError:(id *)arg3;
+ (int)_foregroundUID;
+ (BOOL)clearSyncBubblesWithOutError:(id *)arg1;
+ (BOOL)stopSyncBubbleForUser:(id)arg1 outError:(id *)arg2;
+ (BOOL)startSyncBubbleForUser:(id)arg1 outError:(id *)arg2;
+ (id)syncBubbleMachServiceNamesForUser:(id)arg1;
+ (id)allSyncBubbleUsers;
+ (id)queuedSyncBubbleUsers;
+ (id)currentSyncBubbleUser;
+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (id)personaSpecForUser:(id)arg1;
+ (BOOL)writeAttributesToDiskForUser:(id)arg1 outError:(id *)arg2;
+ (void)updateLoginSessionType;
+ (BOOL)isLoginSession;
+ (BOOL)fetchAttributesForUser:(id)arg1 outError:(id *)arg2;
+ (id)userFromAttributes:(id)arg1;
+ (id)deleteUser:(id)arg1;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)currentUserSwitchContext;
+ (BOOL)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id *)arg2;
+ (id)currentPersona;
+ (id)allUsers;
+ (id)lastLoggedInUser;
+ (id)loginUser;
+ (id)currentUser;
+ (unsigned int)lastLoggedInUID;
+ (unsigned long long)maxNumberOfUsers;
+ (unsigned long long)userType;
+ (BOOL)inSyncBubble;
+ (BOOL)isMultiUser;
+ (void)initialize;

@end

