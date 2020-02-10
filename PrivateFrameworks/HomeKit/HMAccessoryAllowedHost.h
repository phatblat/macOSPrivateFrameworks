//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSSet, NSString;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    NSString *_name;
    unsigned long long _purpose;
    NSSet *_addresses;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *address;
- (id)initWithName:(id)arg1 purpose:(unsigned long long)arg2 addresses:(id)arg3;

@end
