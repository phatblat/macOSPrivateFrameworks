//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHDBLockedArray;

@interface KHDBTagList : NSObject
{
    KHDBLockedArray *_tags;
}

- (id)description;
- (void)addTag:(long long)arg1 withType:(int)arg2;
- (void)addTag:(id)arg1;
- (void)dealloc;
- (id)init;

@end

