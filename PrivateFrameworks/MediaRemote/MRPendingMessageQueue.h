//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRPendingMessageQueue : NSObject
{
    NSMutableArray *_messages;
    NSMutableArray *_delayableMessages;
    unsigned long long _lowPriorityMessagesCount;
    unsigned long long _maxLowPriorityMessagesAllowed;
}

- (void).cxx_destruct;
- (void)_purge;
- (id)peek;
- (void)pop;
- (void)push:(id)arg1;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;

@end

