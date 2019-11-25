//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMe;
    BOOL _ignoreTimeoutTemporarily;
    NSString *_contactPath;
    NSString *_text;
    NSDate *_lastChangeDate;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)contactPathIsMe:(id)arg1;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2;
@property(retain, nonatomic) NSDate *lastChangeDate; // @synthesize lastChangeDate=_lastChangeDate;
@property(nonatomic) BOOL ignoreTimeoutTemporarily; // @synthesize ignoreTimeoutTemporarily=_ignoreTimeoutTemporarily;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *contactPath; // @synthesize contactPath=_contactPath;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isComplete;
- (void)resetTimeout;
- (BOOL)hasTimedOut;
- (void)updateText:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

