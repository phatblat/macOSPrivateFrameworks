//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessage.h>

@class CSPerson, NSArray, NSString;

@interface SGTextMessage : SGMessage
{
    BOOL _senderIsAccountOwner;
    BOOL _senderIsBusinessChat;
    CSPerson *_sender;
    NSArray *_recipients;
    NSString *_conversationIdentifier;
    NSString *_nickname;
    NSString *_photoPath;
    NSString *_attachmentFilename;
}

+ (BOOL)isSent:(id)arg1;
+ (id)_nicknameCustomKey;
+ (id)_photoPathCustomKey;
@property(readonly) NSString *attachmentFilename; // @synthesize attachmentFilename=_attachmentFilename;
@property(readonly) BOOL senderIsBusinessChat; // @synthesize senderIsBusinessChat=_senderIsBusinessChat;
@property(retain) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(retain) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly) BOOL senderIsAccountOwner; // @synthesize senderIsAccountOwner=_senderIsAccountOwner;
@property(retain) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) CSPerson *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)spotlightDomainIdentifier;
- (id)spotlightBundleIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;

@end

