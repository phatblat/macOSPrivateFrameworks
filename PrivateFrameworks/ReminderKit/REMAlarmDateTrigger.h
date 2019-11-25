//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>

#import "NSSecureCoding.h"

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>
{
    NSDateComponents *_dateComponents;
}

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporal;
- (id)_deepCopy;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;
- (id)initWithDateComponents:(id)arg1;

@end

