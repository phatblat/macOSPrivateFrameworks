//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXHearingSupport/AXHAXPCClient.h>

@interface AXHAFakeXPCClient : AXHAXPCClient
{
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
- (BOOL)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)registerMessageBlock:(CDUnknownBlockType)arg1;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1;

@end

