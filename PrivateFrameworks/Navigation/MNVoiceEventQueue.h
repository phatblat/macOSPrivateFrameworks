//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNVoiceEventQueue : NSObject
{
    NSMutableArray *_queue;
    id <MNVoiceEventQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <MNVoiceEventQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2;
- (void)removeAllEvents;
- (id)dequeueNextEvent;
- (BOOL)hasAnotherEvent;
- (void)addEvent:(id)arg1;
- (id)init;

@end

