//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADMRemoteAEConfig : NSObject
{
}

+ (id)sharedRemoteAEConfig;
- (BOOL)hasCompatibleUserPassword;
- (BOOL)isCompatibleUserEnabled;
- (BOOL)isRemoteAppleEventsEnabled;
- (void)setRemoteAppleEventsEnabled:(BOOL)arg1;
- (id)passwordDataForString:(id)arg1;
- (BOOL)boolFromCFValueForKey:(struct __CFString *)arg1;

@end

