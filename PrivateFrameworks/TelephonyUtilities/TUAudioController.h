//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface TUAudioController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock; // @synthesize modifyingStateLock=_modifyingStateLock;
- (void).cxx_destruct;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id *)arg2 isRequestingPointer:(char *)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long *)arg5 notificationString:(id)arg6 queue:(id)arg7;
- (void)_releaseLock;
- (void)_acquireLock;

@end

