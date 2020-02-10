//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAccessResource.h"

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource
{
    id _observer;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (id)settingsUIDefinition;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(CDUnknownBlockType)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)protectedResourceDescription;
@property(readonly, copy, nonatomic) NSArray *accounts;
@property(readonly, nonatomic) Class accountClass;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end
