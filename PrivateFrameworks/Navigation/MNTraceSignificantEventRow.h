//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MNTraceSignificantEventRow : NSObject
{
    double _timestamp;
    NSDictionary *_data;
    long long _eventType;
}

@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)descriptionWithDataFilteredByFilter:(CDUnknownBlockType)arg1;
- (id)description;
- (id)_descriptionWithData:(id)arg1;

@end

