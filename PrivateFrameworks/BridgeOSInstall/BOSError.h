//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BOSError : NSObject
{
}

+ (BOOL)errorIsNonRecoverable:(id)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)localizedDescriptionForErrorCode:(long long)arg1;

@end

