//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ABACAccountType, NSArray, NSDictionary, NSNumber, NSString;

@interface ABACAccount : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_accountDescription;
    ABACAccountType *_accountType;
    ABACAccountType *_parentAccountType;
    NSDictionary *_accountProperties;
    NSNumber *_dsid;
    NSString *_altDSID;
    NSArray *_childAccounts;
}

+ (BOOL)supportsSecureCoding;
+ (void)_setIsEnabled:(BOOL)arg1 forDataclass:(id)arg2 forAccount:(id)arg3;
+ (BOOL)_dataclassIsEnabled:(id)arg1 forAccount:(id)arg2;
+ (void)setAccountPropertiesOnAccount:(id)arg1 toDictionary:(id)arg2;
+ (id)childAccountsFromACAccount:(id)arg1;
+ (id)altDSIDFromACAccount:(id)arg1;
+ (BOOL)isAccountEnabled:(id)arg1;
+ (id)accountPropertiesFromACAccount:(id)arg1;
@property(readonly, copy) NSArray *childAccounts; // @synthesize childAccounts=_childAccounts;
@property(readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy) NSDictionary *accountProperties; // @synthesize accountProperties=_accountProperties;
@property(readonly) ABACAccountType *parentAccountType; // @synthesize parentAccountType=_parentAccountType;
@property(readonly) ABACAccountType *accountType; // @synthesize accountType=_accountType;
@property(readonly) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
@property(readonly) BOOL requiresSeparateBirthdayCalendar;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 accountDescription:(id)arg2 accountType:(id)arg3 parentAccountType:(id)arg4 accountProperties:(id)arg5 dsid:(id)arg6 altDSID:(id)arg7 childAccounts:(id)arg8;
- (id)initWithACAccount:(id)arg1;

@end

