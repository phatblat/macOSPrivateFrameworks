//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_token;
    int _level;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 level:(int)arg2;

@end
