//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_semaphore>, NSString;

@interface PLSemaphore : NSObject
{
    double _timeout;
    NSMutableSet *_interestedObjects;
    NSMutableSet *_pendingDoneObjects;
    NSString *_key;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedSemaphoreForKey:(id)arg1;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) NSString *key; // @synthesize key=_key;
@property(retain) NSMutableSet *pendingDoneObjects; // @synthesize pendingDoneObjects=_pendingDoneObjects;
@property(retain) NSMutableSet *interestedObjects; // @synthesize interestedObjects=_interestedObjects;
@property double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)waitWithBlockSync:(CDUnknownBlockType)arg1;
- (void)waitWithBlock:(CDUnknownBlockType)arg1;
- (void)signalStartListening;
- (void)signalDoneByObject:(id)arg1;
- (void)signalNonInterestByObject:(id)arg1;
- (void)signalInterestByObject:(id)arg1;
@property(readonly) BOOL isActive;
- (id)initWithKey:(id)arg1;

@end

