//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface ISAuthenticationResponse : NSObject <NSSecureCoding>
{
    NSString *_token;
    unsigned long long _urlBagType;
    NSString *_storeFront;
    BOOL _isManagedStudent;
    unsigned long long _URLBagType;
    NSString *_accountIdentifier;
    long long _accountKind;
    NSString *_creditString;
    NSNumber *_dsID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) BOOL isManagedStudent; // @synthesize isManagedStudent=_isManagedStudent;
@property(readonly) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly) NSString *token; // @synthesize token=_token;
@property(readonly) NSNumber *dsID; // @synthesize dsID=_dsID;
@property(readonly) NSString *creditString; // @synthesize creditString=_creditString;
@property(readonly) long long accountKind; // @synthesize accountKind=_accountKind;
@property(readonly) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property unsigned long long URLBagType; // @synthesize URLBagType=_URLBagType;
- (void).cxx_destruct;
- (BOOL)_loadFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

