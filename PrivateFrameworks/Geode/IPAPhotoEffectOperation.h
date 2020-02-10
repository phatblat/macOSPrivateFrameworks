//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/IPAOperation.h>

@interface IPAPhotoEffectOperation : IPAOperation
{
    long long _effectNumber;
    long long _effectVersion;
}

+ (long long)currentEffectVersion;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (void)initialize;
@property(nonatomic) long long effectVersion; // @synthesize effectVersion=_effectVersion;
@property(nonatomic) long long effectNumber; // @synthesize effectNumber=_effectNumber;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (void)setNilValueForKey:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end
