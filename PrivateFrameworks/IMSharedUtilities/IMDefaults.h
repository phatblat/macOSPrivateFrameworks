//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDefaults : NSObject
{
}

+ (id)sharedInstance;
- (void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3;
- (id)getValueFromDomain:(id)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forDomain:(id)arg2 forKey:(id)arg3;
- (BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3;
- (BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2;

@end

