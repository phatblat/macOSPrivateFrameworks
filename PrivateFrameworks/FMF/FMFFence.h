//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, FMFPlacemark, NSArray, NSDate, NSString;

@interface FMFFence : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _active;
    BOOL _recurring;
    BOOL _fromMe;
    BOOL _pending;
    NSString *_identifier;
    NSString *_label;
    CLLocation *_location;
    FMFPlacemark *_placemark;
    NSArray *_recipients;
    NSString *_trigger;
    NSString *_type;
    unsigned long long _locationType;
    NSDate *_timestamp;
    NSArray *_followerIds;
    NSString *_friendIdentifier;
    NSString *_createdByIdentifier;
    NSString *_pendingIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSString *pendingIdentifier; // @synthesize pendingIdentifier=_pendingIdentifier;
@property(retain, nonatomic) NSString *createdByIdentifier; // @synthesize createdByIdentifier=_createdByIdentifier;
@property(retain, nonatomic) NSString *friendIdentifier; // @synthesize friendIdentifier=_friendIdentifier;
@property(retain, nonatomic) NSArray *followerIds; // @synthesize followerIds=_followerIds;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=isFromMe) BOOL fromMe; // @synthesize fromMe=_fromMe;
@property(nonatomic, getter=isRecurring) BOOL recurring; // @synthesize recurring=_recurring;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) FMFPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)handlesForArray:(id)arg1;
- (id)locationForDictionary:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateFenceLocation:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(unsigned long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(BOOL)arg8;

@end

