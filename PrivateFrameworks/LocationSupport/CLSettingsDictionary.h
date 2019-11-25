//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CLSettingsDictionary : NSObject
{
    id _internal;
}

+ (id)settingsWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_internal;
- (BOOL)isEqual:(id)arg1;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (long long)longForKey:(id)arg1 defaultValue:(long long)arg2;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (short)shortForKey:(id)arg1 defaultValue:(short)arg2;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)hasValueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

