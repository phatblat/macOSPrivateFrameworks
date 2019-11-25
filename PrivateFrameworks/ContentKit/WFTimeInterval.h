//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "WFSerializableContent.h"

@class NSDateComponentsFormatter, NSString;

@interface WFTimeInterval : NSObject <NSCopying, WFSerializableContent, NSSecureCoding>
{
    NSDateComponentsFormatter *_timeIntervalFormatter;
    unsigned long long _hash;
    double _timeInterval;
    unsigned long long _allowedUnits;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
}

+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) unsigned long long zeroFormattingBehavior; // @synthesize zeroFormattingBehavior=_zeroFormattingBehavior;
@property(readonly, nonatomic) long long unitsStyle; // @synthesize unitsStyle=_unitsStyle;
@property(readonly, nonatomic) unsigned long long allowedUnits; // @synthesize allowedUnits=_allowedUnits;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wfName;
@property(readonly, nonatomic) NSString *absoluteTimeString;
@property(readonly, nonatomic) NSDateComponentsFormatter *timeIntervalFormatter; // @synthesize timeIntervalFormatter=_timeIntervalFormatter;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeInterval:(double)arg1 allowedUnits:(unsigned long long)arg2 unitsStyle:(long long)arg3 zeroFormattingBehavior:(unsigned long long)arg4;
- (id)initWithTimeInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

