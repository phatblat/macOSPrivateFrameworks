//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IASAuthenticationAgentController : NSObject
{
}

+ (id)sharedController;
- (id)_getAgentConnectionForCurrentUser;
- (id)getSSOServiceTicketWithUI:(BOOL)arg1 serviceID:(id)arg2 outUsername:(id *)arg3 error:(id *)arg4;

@end

