//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSSession, NSArray, NSData, NSError, NSString;

@protocol IDSSessionDelegate <NSObject>

@optional
- (void)session:(IDSSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(NSString *)arg1 didReceiveData:(NSData *)arg2;
- (void)sessionEnded:(IDSSession *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionEnded:(IDSSession *)arg1;
- (void)sessionStarted:(IDSSession *)arg1;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2;
@end

