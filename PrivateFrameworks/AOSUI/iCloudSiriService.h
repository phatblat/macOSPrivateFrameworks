//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import "MMServicePreflightProtocol.h"

@class NSString;

@interface iCloudSiriService : MMService <MMServicePreflightProtocol>
{
}

- (BOOL)hasPreflightAction;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (id)icon;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
