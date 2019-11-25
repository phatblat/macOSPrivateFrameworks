//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AMSXDDevice, NSDate, NSDictionary, NSString;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isReply;
    NSString *_objectClassName;
    NSString *_messageID;
    NSDate *_receiptDate;
    AMSXDDevice *_destination;
    double _expirationInterval;
    NSString *_identifier;
    NSString *_logKey;
    id <NSObject><NSSecureCoding> _object;
    AMSXDDevice *_origin;
    long long _purpose;
}

+ (BOOL)supportsSecureCoding;
+ (id)messageFromProtoMessage:(id)arg1;
@property long long purpose; // @synthesize purpose=_purpose;
@property(retain) AMSXDDevice *origin; // @synthesize origin=_origin;
@property(retain) id <NSObject><NSSecureCoding> object; // @synthesize object=_object;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
@property(retain) AMSXDDevice *destination; // @synthesize destination=_destination;
@property(retain) NSDate *receiptDate; // @synthesize receiptDate=_receiptDate;
@property(retain) NSString *messageID; // @synthesize messageID=_messageID;
@property BOOL isReply; // @synthesize isReply=_isReply;
@property(retain) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, getter=isExpired) BOOL expired;
- (id)description;
- (id)createProtoMessage;
@property(readonly) NSDictionary *JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4;

@end

