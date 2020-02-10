//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface PKPhysicalCardOrderActivityEvent : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _activity;
    NSDate *_date;
    NSString *_localizedReason;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *localizedReason; // @synthesize localizedReason=_localizedReason;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
