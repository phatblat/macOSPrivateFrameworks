//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (HPDAdditions)
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 userInfo:(id)arg5;
- (id)hpd_verboseLocalizedDescription;
@end

