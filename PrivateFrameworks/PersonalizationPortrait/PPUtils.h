//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPUtils : NSObject
{
}

+ (BOOL)localizedTimeStructForDate:(id)arg1 tm:(struct tm *)arg2;
+ (BOOL)isFirstPartyApp:(id)arg1;
+ (id)sqliteGlobEscape:(id)arg1;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (id)currentLocaleLanguageCode;
+ (BOOL)yesWithProbability:(double)arg1;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)hexUUID;
+ (id)hexOfBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (BOOL)isInternalDevice;
+ (BOOL)isConstrainedDevice;
+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

