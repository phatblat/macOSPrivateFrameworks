//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSIdentityProvider;

@interface VSStoreAuthenticationNotificationOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;
    NSURL *_logoCacheURL;
}

@property(copy, nonatomic) NSURL *logoCacheURL; // @synthesize logoCacheURL=_logoCacheURL;
@property(readonly, copy, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

@end

