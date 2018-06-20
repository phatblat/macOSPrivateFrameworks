//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ABACAccountType, NSDictionary, NSString;

@interface ABACAccount : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_accountDescription;
    ABACAccountType *_accountType;
    ABACAccountType *_parentAccountType;
    NSDictionary *_accountProperties;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *accountProperties; // @synthesize accountProperties=_accountProperties;
@property(readonly) ABACAccountType *parentAccountType; // @synthesize parentAccountType=_parentAccountType;
@property(readonly) ABACAccountType *accountType; // @synthesize accountType=_accountType;
@property(readonly) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) BOOL requiresSeparateBirthdayCalendar;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)description;
- (id)initWithIdentifier:(id)arg1 accountDescription:(id)arg2 accountType:(id)arg3 parentAccountType:(id)arg4 accountProperties:(id)arg5;

@end
