//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, NSData;

__attribute__((visibility("hidden")))
@interface AuthorizationRequest : NSObject
{
    LAContext *_localAuthenticationContext;
    long long _localAuthenticationContextCreationTime;
    int _authorizationRight;
}

+ (id)localizedDFRTitleForRight:(int)arg1;
+ (id)localizedTitleForRight:(int)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *currentExternalizedContext;
- (void)authorizeWithSheetInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)authorize;
- (id)initWithAuthorizationRight:(int)arg1;
- (BOOL)_requestLocalAuthentication;
- (id)_localAuthenticationContextRespectingReusePolicy;

@end

