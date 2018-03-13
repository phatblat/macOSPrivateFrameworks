//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSString;

@interface IMAPListResponse : IMAPResponse
{
    unsigned long long _mailboxAttributes;
    NSString *_separator;
    NSString *_mailboxName;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(nonatomic) unsigned long long mailboxAttributes; // @synthesize mailboxAttributes=_mailboxAttributes;
- (void).cxx_destruct;
- (unsigned long long)mailboxAttributesFromSet:(id)arg1;
- (id)_newStringForMailboxAttributes;
- (id)description;
- (const char *)_responseName;

@end

