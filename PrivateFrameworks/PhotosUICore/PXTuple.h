//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PXTuple : NSObject
{
    unsigned long long _hash;
    NSArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObjects:(id)arg1;
- (id)init;

@end

