//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVXSession;

@interface SVXSessionIdleAssertion : NSObject
{
    unsigned long long _timestamp;
    SVXSession *_session;
}

@property(readonly, nonatomic) SVXSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 session:(id)arg2;

@end

