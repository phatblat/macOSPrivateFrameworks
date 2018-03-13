//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject
{
    BOOL _registered;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
@property(readonly, nonatomic) BOOL disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

