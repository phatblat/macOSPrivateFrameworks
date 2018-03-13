//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LUIAuthenticationServiceProvider;

@interface LUIAuthenticationManager : NSObject
{
    LUIAuthenticationServiceProvider *_localAuth_ServiceProvider;
    LUIAuthenticationServiceProvider *_continuity_ServiceProvider;
    LUIAuthenticationServiceProvider *_smartcard_ServiceProvider;
}

+ (BOOL)isHardwareAvailableForLAServiceProvider;
+ (id)sharedManager;
@property(retain) LUIAuthenticationServiceProvider *smartcard_ServiceProvider; // @synthesize smartcard_ServiceProvider=_smartcard_ServiceProvider;
@property(retain) LUIAuthenticationServiceProvider *continuity_ServiceProvider; // @synthesize continuity_ServiceProvider=_continuity_ServiceProvider;
@property(retain) LUIAuthenticationServiceProvider *localAuth_ServiceProvider; // @synthesize localAuth_ServiceProvider=_localAuth_ServiceProvider;
- (id)providerForService:(id)arg1;
- (void)deActivateService:(id)arg1 withContext:(id)arg2;
- (void)deActivateService:(id)arg1;
- (void)activateService:(id)arg1 withUserName:(id)arg2 shouldReset:(BOOL)arg3;
- (void)activateService:(id)arg1 withUserName:(id)arg2;
- (void)activateServiceForUnlockedSession:(id)arg1;
- (void)activateService:(id)arg1 withUserName:(id)arg2 sessionUnlocked:(BOOL)arg3 shouldReset:(BOOL)arg4;
- (void)setServiceDelegate:(id)arg1;
- (id)init;

@end

