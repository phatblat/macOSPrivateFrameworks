//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSNumber, NSString;

@interface WFRowTemplateValue : NSObject <NSSecureCoding>
{
    BOOL _removable;
    Class _contentItemClass;
    NSString *_contentPropertyName;
    long long _comparisonOperator;
    id <NSCopying><NSCoding> _enumeration;
    NSString *_string;
    NSNumber *_boolean;
    NSNumber *_number;
    NSString *_phone;
    NSString *_email;
    NSNumber *_calendarUnit;
    NSNumber *_byteCountUnit;
    NSDate *_date;
    NSDate *_anotherDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *anotherDate; // @synthesize anotherDate=_anotherDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *byteCountUnit; // @synthesize byteCountUnit=_byteCountUnit;
@property(retain, nonatomic) NSNumber *calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSNumber *number; // @synthesize number=_number;
@property(retain, nonatomic) NSNumber *boolean; // @synthesize boolean=_boolean;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) id <NSCopying><NSCoding> enumeration; // @synthesize enumeration=_enumeration;
@property(readonly, nonatomic) BOOL removable; // @synthesize removable=_removable;
@property(readonly, nonatomic) long long comparisonOperator; // @synthesize comparisonOperator=_comparisonOperator;
@property(readonly, nonatomic) NSString *contentPropertyName; // @synthesize contentPropertyName=_contentPropertyName;
@property(readonly, nonatomic) Class contentItemClass; // @synthesize contentItemClass=_contentItemClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItemClass:(Class)arg1 contentPropertyName:(id)arg2 comparisonOperator:(long long)arg3 removable:(BOOL)arg4;

@end

