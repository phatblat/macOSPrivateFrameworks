//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMChat.h"

@interface IMChat (SocialUIAdditions)
- (id)messageForPluginPayloadString:(id)arg1 pluginPayload:(id)arg2 flags:(unsigned long long)arg3;
- (id)messageForNonPluginPayloadString:(id)arg1 baseWritingDirection:(long long)arg2 flags:(unsigned long long)arg3;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2;
@end
