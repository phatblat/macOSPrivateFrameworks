//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSandboxAccount;
    NSString *_aidaAlternateDSID;
    NSString *_aidaToken;
    NSString *_aaAlternateDSID;
    NSString *_appleID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_primaryEmailAddress;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *primaryEmailAddress; // @synthesize primaryEmailAddress=_primaryEmailAddress;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) BOOL isSandboxAccount; // @synthesize isSandboxAccount=_isSandboxAccount;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *aaAlternateDSID; // @synthesize aaAlternateDSID=_aaAlternateDSID;
@property(copy, nonatomic) NSString *aidaToken; // @synthesize aidaToken=_aidaToken;
@property(copy, nonatomic) NSString *aidaAlternateDSID; // @synthesize aidaAlternateDSID=_aidaAlternateDSID;
- (void).cxx_destruct;
- (BOOL)aidaAccountAvailable;
- (id)primaryAppleAccountHash;
- (id)authorizationHeader;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
