//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface EFPair : NSObject <NSCopying>
{
    id <NSObject> _first;
    id <NSObject> _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) id <NSObject> second; // @synthesize second=_second;
@property(readonly, nonatomic) id <NSObject> first; // @synthesize first=_first;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToPair:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
