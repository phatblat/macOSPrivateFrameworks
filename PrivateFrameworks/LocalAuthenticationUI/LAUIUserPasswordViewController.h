//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "LAUIUserPasswordFieldRemoteProtocol.h"
#import "LAUIUserPasswordFieldServiceProtocol.h"

@class NSString;

@interface LAUIUserPasswordViewController : NSRemoteViewController <LAUIUserPasswordFieldRemoteProtocol, LAUIUserPasswordFieldServiceProtocol>
{
    id <LAUIUserPasswordFieldRemoteProtocol> _delegate;
}

+ (void)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property __weak id <LAUIUserPasswordFieldRemoteProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSubmitUnverifiedData:(unsigned int)arg1;
- (void)requestCancelAuthentication;
- (void)passwordFieldDidResignFirstResponder;
- (void)didSubmitWrongPassword:(BOOL)arg1;
- (void)didVerifyPassword;
- (void)externalizedContextInReply:(CDUnknownBlockType)arg1;
- (void)setSkipPasswordVerification:(BOOL)arg1;
- (void)setPINAuthentication:(BOOL)arg1;
- (void)setCanAuthenticateAsAnyAdmin:(BOOL)arg1;
- (void)setExtractablePassword:(BOOL)arg1;
- (void)clearPasswordField;
- (void)setUsername:(id)arg1;
- (void)focusPasswordField;
- (void)submitPassword;
- (void)loadView;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (id)serviceBundleIdentifier;
- (id)serviceViewControllerClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
