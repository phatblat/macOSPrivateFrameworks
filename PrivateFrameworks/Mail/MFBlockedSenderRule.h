//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageRule.h>

@class EMBlockedSenderManager, MFMailbox, NSColor, NSString;

@interface MFBlockedSenderRule : MFMessageRule
{
    BOOL _shouldTransferMessage;
    BOOL _shouldNotifyUser;
    BOOL _shouldSendNotification;
    BOOL _isDefaultRule;
    int _autoResponseType;
    NSString *_ruleName;
    long long _flagsToApply;
    NSString *_appleScriptPath;
    NSColor *_color;
    NSString *_playSound;
    MFMailbox *_destinationMailbox;
    EMBlockedSenderManager *_blockedSenderManager;
}

@property(retain, nonatomic) EMBlockedSenderManager *blockedSenderManager; // @synthesize blockedSenderManager=_blockedSenderManager;
- (void)setIsDefaultRule:(BOOL)arg1;
- (BOOL)isDefaultRule;
- (void)setDestinationMailbox:(id)arg1;
- (id)destinationMailbox;
- (void)setShouldSendNotification:(BOOL)arg1;
- (BOOL)shouldSendNotification;
- (void)setShouldNotifyUser:(BOOL)arg1;
- (BOOL)shouldNotifyUser;
- (void)setShouldTransferMessage:(BOOL)arg1;
- (BOOL)shouldTransferMessage;
- (void)setPlaySound:(id)arg1;
- (id)playSound;
- (void)setAutoResponseType:(int)arg1;
- (int)autoResponseType;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setAppleScriptPath:(id)arg1;
- (id)appleScriptPath;
- (void)setFlagsToApply:(long long)arg1;
- (long long)flagsToApply;
- (void)setRuleName:(id)arg1;
- (id)ruleName;
- (void).cxx_destruct;
- (id)description;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isActive;
- (BOOL)doesMessageSatisfyCriteria:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3 successfullyEvaluated:(char *)arg4;
- (id)initWithBlockedSenderManager:(id)arg1;

@end

