//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAnalyticsEvent.h"

@class NSDictionary, NSNumber, NSString;

@interface TBCacheAnalyticsEvent : NSObject <TBAnalyticsEvent>
{
    unsigned long long _status;
    NSNumber *_staleness;
    NSNumber *_tileKey;
    NSNumber *_type;
    NSNumber *_errorCode;
    NSString *_eventName;
    NSDictionary *_eventDictionary;
}

+ (id)cacheEventWithTotalCount:(unsigned long long)arg1 last24HoursCount:(unsigned long long)arg2;
+ (id)cacheAnalyticsEventWithStatus:(unsigned long long)arg1 staleness:(unsigned long long)arg2 tileKey:(unsigned long long)arg3 type:(unsigned long long)arg4 error:(id)arg5;
@property(retain, nonatomic) NSDictionary *eventDictionary; // @synthesize eventDictionary=_eventDictionary;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) NSNumber *type; // @synthesize type=_type;
@property(nonatomic) NSNumber *tileKey; // @synthesize tileKey=_tileKey;
@property(nonatomic) NSNumber *staleness; // @synthesize staleness=_staleness;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
