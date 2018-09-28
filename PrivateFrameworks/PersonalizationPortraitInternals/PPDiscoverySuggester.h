//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPContactSuggester.h>

@class NSObject<OS_dispatch_queue>, _PASLock;

@interface PPDiscoverySuggester : PPContactSuggester
{
    NSObject<OS_dispatch_queue> *_queue;
    _PASLock *_data;
    BOOL _enabled;
}

- (void).cxx_destruct;
- (void)resumeDiscovering;
- (void)stopDiscovering;
- (void)waitForDiscoveriesToProcess;
- (void)_discoveredRecipient:(id)arg1;
- (void)discoveredRecipients:(id)arg1;
- (void)_discoveredEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;
- (void)discoverEvent:(id)arg1 store:(id)arg2;
- (void)_undiscoverEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;
- (void)undiscoverEvent:(id)arg1 store:(id)arg2;
- (void)_removeContacts:(id)arg1;
- (void)_addContacts:(id)arg1;
- (void)clearCaches;
- (id)init;

@end

