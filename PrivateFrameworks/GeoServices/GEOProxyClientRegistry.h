//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOProxyClient, NSLock, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject
{
    NSLock *_lock;
    GEOProxyClient *_currentComposite;
    NSMutableSet *_currentSet;
}

+ (id)sharedRegistry;
- (void).cxx_destruct;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_updateComposite;
- (void)enableRegistry;

@end

