//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@interface EFResource : NSObject <NSLocking>
{
    struct os_unfair_lock_s _unfair_lock;
    // Error parsing type: Aq, name: _lockCount
}

- (BOOL)returnResource;
- (void)holdResource;
- (void)unlock;
- (void)lock;
- (id)init;

@end

