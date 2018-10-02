//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSURLProtocolDialogHandling.h"

@class ACAccount, NSArray, NSDictionary, NSImage, NSString;

@interface AMSURLProtocolDialog : NSObject <AMSURLProtocolDialogHandling>
{
    BOOL _serverRequestedSilentAuthentication;
    NSDictionary *_dialogDictionary;
    ACAccount *_account;
    id <AMSURLBagContract> _bagContract;
    long long _dialogOptions;
    NSImage *_icon;
    NSString *_logKey;
    NSString *_proxyBundleId;
}

@property(readonly) BOOL serverRequestedSilentAuthentication; // @synthesize serverRequestedSilentAuthentication=_serverRequestedSilentAuthentication;
@property(retain) NSString *proxyBundleId; // @synthesize proxyBundleId=_proxyBundleId;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(readonly) long long dialogOptions; // @synthesize dialogOptions=_dialogOptions;
@property(readonly) id <AMSURLBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property(readonly) ACAccount *account; // @synthesize account=_account;
@property(readonly) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
- (void).cxx_destruct;
@property(readonly) NSString *message;
@property(readonly) NSArray *buttons;
@property(readonly) NSString *title;
- (id)runDialog;
- (id)initWithDialogDictionary:(id)arg1 dialogOptions:(long long)arg2 account:(id)arg3 bagContract:(id)arg4;
- (id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

