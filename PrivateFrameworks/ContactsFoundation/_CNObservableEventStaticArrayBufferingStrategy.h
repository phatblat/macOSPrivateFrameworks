//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy
{
    NSArray *_events;
}

@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (id)allEvents;
- (void)addEvent:(id)arg1;
- (id)initWithEvents:(id)arg1;

@end

