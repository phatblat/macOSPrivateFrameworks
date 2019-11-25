//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>
{
    RTStoredLocationEnumerationOptions *_options;
    unsigned long long _offset;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithEnumerationOptions:(id)arg1;
- (id)init;

@end

