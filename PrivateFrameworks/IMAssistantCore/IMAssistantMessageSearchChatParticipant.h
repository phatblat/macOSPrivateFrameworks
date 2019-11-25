//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject
{
    BOOL _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

@property(readonly, nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (BOOL)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(BOOL)arg3;

@end

