//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMSAuthenticateTask.h"

@class NSViewController;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask
{
    id <AMSBagProtocol> _bag;
    NSViewController *_presentingViewController;
}

@property(readonly) NSViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)_handleDialogForFailedAuthenticationWithError:(id)arg1;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id *)arg2;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1 presentingViewController:(struct NSViewController *)arg2;
- (id)initWithAccount:(id)arg1 presentingViewController:(struct NSViewController *)arg2 options:(id)arg3;

@end

