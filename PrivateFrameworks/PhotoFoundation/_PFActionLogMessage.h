//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/_PFActionLogEvent.h>

@class NSString;

@interface _PFActionLogMessage : _PFActionLogEvent
{
    NSString *_message;
}

@property(readonly) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventLog:(id)arg1 message:(id)arg2;
- (id)initWithAction:(id)arg1 message:(id)arg2;

@end

