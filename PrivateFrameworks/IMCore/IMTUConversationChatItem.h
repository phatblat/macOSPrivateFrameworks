//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSUUID, TUConversation;

@interface IMTUConversationChatItem : IMTranscriptChatItem
{
    IMHandle *_conversationInitiator;
}

@property(readonly, nonatomic) IMHandle *conversationInitiator; // @synthesize conversationInitiator=_conversationInitiator;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) __weak TUConversation *tuConversation;
@property(readonly, nonatomic) NSUUID *tuConversationUUID;
- (id)activeCall;
- (id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

