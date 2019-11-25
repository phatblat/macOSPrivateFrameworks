//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_primaryAccountNumber;
    NSString *_cardSecurityCode;
    long long _cardType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property(copy, nonatomic) NSString *primaryAccountNumber; // @synthesize primaryAccountNumber=_primaryAccountNumber;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;

@end

