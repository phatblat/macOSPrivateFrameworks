//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying>
{
    NSUUID *_replica;
    long long _integer;
}

+ (id)elementWithInteger:(long long)arg1 replica:(id)arg2;
@property(nonatomic) long long integer; // @synthesize integer=_integer;
@property(retain, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hashValue;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithInteger:(long long)arg1 replica:(id)arg2;

@end

