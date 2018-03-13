//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <NSSecureCoding>
{
    unsigned long long _technology;
    long long _terminalType;
    long long _valueAddedServiceMode;
    NSArray *_merchantIdentifiers;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, nonatomic) long long valueAddedServiceMode; // @synthesize valueAddedServiceMode=_valueAddedServiceMode;
@property(readonly, nonatomic) long long terminalType; // @synthesize terminalType=_terminalType;
@property(readonly, nonatomic) unsigned long long technology; // @synthesize technology=_technology;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;

@end

