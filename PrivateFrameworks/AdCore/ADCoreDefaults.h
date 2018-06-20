//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject
{
    NSMutableDictionary *_factoryDefaults;
    struct __CFString *_defaultsBundleID;
}

+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (id)arrayForKey:(id)arg1;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (double)doubleForKey:(id)arg1;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (long long)integerForKey:(id)arg1;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (BOOL)boolForKey:(id)arg1;
+ (BOOL)defaultIsSetForKey:(id)arg1;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (id)factoryDefaults;
+ (void)addFactoryDefaults:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) struct __CFString *defaultsBundleID; // @synthesize defaultsBundleID=_defaultsBundleID;
@property(retain, nonatomic) NSMutableDictionary *factoryDefaults; // @synthesize factoryDefaults=_factoryDefaults;
- (void).cxx_destruct;
- (id)init;

@end

