//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject
{
    NSString *_exePath;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (id)bundleIdentifierOrProcessName:(char *)arg1;
- (void)_populateResultWithLockWitness:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

@end
