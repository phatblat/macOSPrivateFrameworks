//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale;

__attribute__((visibility("hidden")))
@interface DMManagerPrivVars : NSObject
{
    struct __DASession *_clientDefaultDASession;
    id _clientDelegate;
    unsigned int _clientThread;
    unsigned int _bootstrap_MachPort;
    char _sessionUUID[40];
    unsigned int _f2t_MachPort;
    unsigned int _t2f_MachPort;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        int _field6;
    } *_msgReplyArea;
    struct __CFMachPort *_t2f_CFMachPort;
    struct AuthorizationOpaqueRef *_implicitAuthorization;
    struct AuthorizationOpaqueRef *_explicitAuthorization;
    NSLocale *_locale;
}

@end
