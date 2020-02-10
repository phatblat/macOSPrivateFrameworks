//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_handle;
    NSString *_handleType;
}

+ (BOOL)supportsSecureCoding;
+ (id)personWithIPPerson:(id)arg1;
@property(retain, nonatomic) NSString *handleType; // @synthesize handleType=_handleType;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPerson:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)toIPPerson;

@end
