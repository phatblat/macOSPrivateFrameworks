//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AceObject<SAAceCommand>;

@interface AFInterstitialCommandWrapper : NSObject
{
    CDUnknownBlockType _completion;
    AceObject<SAAceCommand> *_command;
    AceObject<SAAceCommand> *_defaultReply;
}

@property(readonly, nonatomic) AceObject<SAAceCommand> *defaultReply; // @synthesize defaultReply=_defaultReply;
@property(readonly, nonatomic) AceObject<SAAceCommand> *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2;
- (id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

