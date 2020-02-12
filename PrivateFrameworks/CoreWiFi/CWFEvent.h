//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CWFEventID, NSDate, NSDictionary, NSUUID;

@interface CWFEvent : NSObject <NSCopying>
{
    NSUUID *_UUID;
    CWFEventID *_eventID;
    NSDate *_timestamp;
    NSDictionary *_info;
    unsigned long long _acknowledgementTimeout;
    CDUnknownBlockType _acknowledge;
}

@property(copy, nonatomic) CDUnknownBlockType acknowledge; // @synthesize acknowledge=_acknowledge;
@property(nonatomic) unsigned long long acknowledgementTimeout; // @synthesize acknowledgementTimeout=_acknowledgementTimeout;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) CWFEventID *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (id)description;
- (id)init;

@end

