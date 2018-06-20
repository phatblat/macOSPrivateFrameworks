//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

#import "NSCopying.h"

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying>
{
    BOOL _enabled;
    long long _daysOfWeek;
    long long _hourOfDay;
    long long _minuteOfHour;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long minuteOfHour; // @synthesize minuteOfHour=_minuteOfHour;
@property(nonatomic) long long hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(nonatomic) long long daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

