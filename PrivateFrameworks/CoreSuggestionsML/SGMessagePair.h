//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SGMessagePair : NSObject
{
    NSString *_reply;
    NSString *_prompt;
    NSString *_handle;
    NSDate *_sentAt;
}

@property(retain, nonatomic) NSDate *sentAt; // @synthesize sentAt=_sentAt;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4;

@end
