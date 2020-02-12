//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (id)MSMMCSRetryAfterDate;
- (BOOL)MSIsRegistrationError;
- (BOOL)MSIsQuotaError;
- (BOOL)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (BOOL)MSIsBadTokenError;
- (BOOL)MSIsAuthError;
- (BOOL)MSIsFatal;
- (BOOL)MSIsCounted;
- (BOOL)MSNeedsBackoff;
- (BOOL)MSCanBeIgnored;
- (BOOL)MSASStateMachineIsCanceledError;
- (BOOL)MSIsTemporaryNetworkError;
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;
- (id)MSFindPrimaryError;
- (id)MSMakePrimaryError;
- (id)MSVerboseDescription;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;
- (id)MMCSRetryAfterDate;
- (BOOL)MMCSIsFatalError;
- (BOOL)MMCSIsAuthorizationError;
- (BOOL)MMCSIsNetworkConditionsError;
- (BOOL)MMCSIsCancelError;
- (void)_MMCSApplyBlock:(CDUnknownBlockType)arg1;
- (int)MMCSErrorType;
@end

