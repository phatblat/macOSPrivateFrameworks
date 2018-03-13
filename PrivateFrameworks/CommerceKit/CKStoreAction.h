//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface CKStoreAction : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _action;
    NSDictionary *_actionParameters;
}

+ (BOOL)supportsSecureCoding;
+ (id)_actionFromResponseDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, nonatomic) unsigned char action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(unsigned char)arg1 parameters:(id)arg2;

@end

