//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FATObject : NSObject <NSCoding, NSCopying>
{
}

+ (id)structFields;
+ (id)structName;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
