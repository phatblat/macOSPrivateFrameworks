//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PubSub/PSInternal.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface PSClientInternal : PSInternal
{
    id delegate;
    NSDate *dateLastUpdated;
    struct ReceiverOf *tableObserver;
    struct ReceiverOf *feedObserver;
    BOOL tracksEntryChanges;
}

@end

