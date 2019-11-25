//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SVXActivationContext, SVXDeactivationContext, SVXSessionManager;

@protocol SVXSessionActivityListening <NSObject>

@optional
- (void)sessionManager:(SVXSessionManager *)arg1 audioSessionDidBecomeActive:(BOOL)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)sessionManager:(SVXSessionManager *)arg1 audioSessionWillBecomeActive:(BOOL)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)sessionManager:(SVXSessionManager *)arg1 didResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionManager:(SVXSessionManager *)arg1 didBecomeActiveWithActivationContext:(SVXActivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willBecomeActiveWithActivationContext:(SVXActivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 didStopSoundWithID:(long long)arg2 error:(NSError *)arg3;
- (void)sessionManager:(SVXSessionManager *)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willStartSoundWithID:(long long)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willPresentFeedbackWithDialogIdentifier:(NSString *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)sessionManager:(SVXSessionManager *)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
@end

