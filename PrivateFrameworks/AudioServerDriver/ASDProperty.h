//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying>
{
    ASDPropertyAddress *_address;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) ASDPropertyAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAddress:(id)arg1 value:(id)arg2;

@end

