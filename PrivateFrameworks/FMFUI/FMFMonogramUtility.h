//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FMFMonogramUtility : NSObject
{
}

+ (struct __CFString *)hexStringFromColor:(id)arg1;
+ (id)monogramImageOfDiameter:(double)arg1 forPerson:(id)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(char *)arg6;
+ (id)monogramImageOfDiameter:(double)arg1 forPerson:(id)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(char *)arg5;
+ (void)clearMonogramCache;
+ (id)contactStatusCache;
+ (id)contactImageCache;
+ (void)setAddressBook:(id)arg1;

@end

