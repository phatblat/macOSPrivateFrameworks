//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface PIEFlags : NSObject
{
    NSMutableSet *_flagKeys;
    NSMutableSet *_flags;
}

- (BOOL)isFlagSet:(long long)arg1;
- (BOOL)unsetFlag:(long long)arg1;
- (void)setFlag:(long long)arg1;
- (id)init;
- (void)dealloc;

@end
