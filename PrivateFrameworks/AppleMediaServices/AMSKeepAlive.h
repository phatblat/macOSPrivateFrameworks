//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_transaction>, NSString;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    NSString *_name;
    long long _style;
}

+ (void)_handleAssertionExpiration;
+ (void)_accessAssertionCache:(CDUnknownBlockType)arg1;
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithFormat:(id)arg1;
@property(readonly) long long style; // @synthesize style=_style;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_takeProcessAssertion;
- (void)_takeOSTransaction;
- (void)_startLogTimer;
- (void)_removeProcessAssertion;
- (void)_removeOSTransaction;
- (id)_cacheKey;
- (id)_assertionName;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)arg1 style:(long long)arg2;
- (id)initWithName:(id)arg1;

@end

