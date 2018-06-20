//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface AALoginContextTransientStorage : NSObject
{
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;
- (void).cxx_destruct;
- (void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2;
- (id)_keychainItemForUsername:(id)arg1 service:(id)arg2;
- (void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (id)_readNonsensitiveParameters;
- (void)_saveNonsensitiveParameters:(id)arg1;
- (void)clear;
- (id)storedContext;
- (void)save:(id)arg1;
- (id)init;

@end

