//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ViewBridgeUtilities : NSObject
{
}

+ (void)removeResponder:(id)arg1 fromChainOf:(id)arg2;
+ (void)withAppearance:(id)arg1 perform:(CDUnknownBlockType)arg2;
+ (id)appearanceNamed:(id)arg1;
+ (void)whileHoldingLock:(struct os_unfair_lock_s *)arg1 perform:(CDUnknownBlockType)arg2;
+ (BOOL)maintainConstraintForView:(id)arg1 withIdentifier:(id)arg2 andConstant:(double)arg3 createdByMeansOf:(CDUnknownBlockType)arg4;
+ (void)flushCoreAnimationTransaction;
+ (id)informationStringForKey:(struct __CFString *)arg1 forProcess:(int)arg2;
+ (id)informationStringForKey:(struct __CFString *)arg1 forApplication:(struct __LSASN *)arg2;
+ (void)setCurrentApplicationValue:(void *)arg1 forKey:(struct __CFString *)arg2;
+ (void)setApplication:(struct __LSASN *)arg1 value:(void *)arg2 forKey:(struct __CFString *)arg3;
+ (BOOL)serviceWindowBackgroundColorIsSafe:(id)arg1;

@end

