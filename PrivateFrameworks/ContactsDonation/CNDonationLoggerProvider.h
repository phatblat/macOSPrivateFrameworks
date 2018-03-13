//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDonationLoggerProvider.h"

@class NSString;

@interface CNDonationLoggerProvider : NSObject <CNDonationLoggerProvider>
{
    id <CNDonationAgentLogger> _agentLoggerImpl;
    id <CNDonationExtensionLogger> _extensionLoggerImpl;
    id <CNDonationToolLogger> _toolLoggerImpl;
    id <CNDonationAccountLogger> _accountLoggerImpl;
    id <CNDonationPreferencesLogger> _preferencesLoggerImpl;
    id <CNDonationAnalyticsLogger> _analyticsLoggerImpl;
}

+ (id)defaultProvider;
@property(readonly, nonatomic) id <CNDonationAnalyticsLogger> analyticsLoggerImpl; // @synthesize analyticsLoggerImpl=_analyticsLoggerImpl;
@property(readonly, nonatomic) id <CNDonationPreferencesLogger> preferencesLoggerImpl; // @synthesize preferencesLoggerImpl=_preferencesLoggerImpl;
@property(readonly, nonatomic) id <CNDonationAccountLogger> accountLoggerImpl; // @synthesize accountLoggerImpl=_accountLoggerImpl;
@property(readonly, nonatomic) id <CNDonationToolLogger> toolLoggerImpl; // @synthesize toolLoggerImpl=_toolLoggerImpl;
@property(readonly, nonatomic) id <CNDonationExtensionLogger> extensionLoggerImpl; // @synthesize extensionLoggerImpl=_extensionLoggerImpl;
@property(readonly, nonatomic) id <CNDonationAgentLogger> agentLoggerImpl; // @synthesize agentLoggerImpl=_agentLoggerImpl;
- (void).cxx_destruct;
@property(readonly) id <CNDonationAnalyticsLogger> analyticsLogger;
@property(readonly) id <CNDonationPreferencesLogger> preferencesLogger;
@property(readonly) id <CNDonationAccountLogger> accountLogger;
@property(readonly) id <CNDonationToolLogger> toolLogger;
@property(readonly) id <CNDonationExtensionLogger> extensionLogger;
@property(readonly) id <CNDonationAgentLogger> agentLogger;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

