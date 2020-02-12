//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_tokenRows;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *tokenRows; // @synthesize tokenRows=_tokenRows;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTokenizedTextResultColumn:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *strokeIndexes;
- (long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(struct _NSRange)arg2;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenRows:(id)arg1;
- (id)init;

@end
