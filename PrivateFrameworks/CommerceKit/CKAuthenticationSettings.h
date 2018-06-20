//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface CKAuthenticationSettings : NSObject <NSCopying, NSSecureCoding>
{
    NSString *__password;
    NSString *__passwordEquivalentToken;
    BOOL _forceAccount;
    BOOL _createSession;
    BOOL _showHelp;
    NSString *_suggestedUsername;
    NSDictionary *_authenticateArguments;
    NSDictionary *_createAccountArguments;
}

+ (BOOL)supportsSecureCoding;
@property BOOL showHelp; // @synthesize showHelp=_showHelp;
@property BOOL createSession; // @synthesize createSession=_createSession;
@property BOOL forceAccount; // @synthesize forceAccount=_forceAccount;
@property(copy) NSDictionary *createAccountArguments; // @synthesize createAccountArguments=_createAccountArguments;
@property(copy) NSDictionary *authenticateArguments; // @synthesize authenticateArguments=_authenticateArguments;
@property(copy) NSString *suggestedUsername; // @synthesize suggestedUsername=_suggestedUsername;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(copy) NSString *_passwordEquivalentToken;
@property(copy) NSString *_password;

@end

