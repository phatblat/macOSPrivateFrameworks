//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICRandomNumberGenerator : NSObject
{
    unsigned int _randomSeed;
}

- (id)randomObject:(id)arg1;
- (unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (double)randomFloat;
- (id)initWithSeed:(unsigned int)arg1;

@end

