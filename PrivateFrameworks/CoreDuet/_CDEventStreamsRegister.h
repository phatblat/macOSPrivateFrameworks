//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface _CDEventStreamsRegister : NSObject
{
    NSArray *_eventStreams;
}

@property(readonly, copy, nonatomic) NSArray *eventStreams; // @synthesize eventStreams=_eventStreams;
- (void).cxx_destruct;
- (id)getEventHandlerDictForStreams;
- (id)getEventHandler:(id)arg1;
- (id)initWithEventStreams:(id)arg1;

@end
