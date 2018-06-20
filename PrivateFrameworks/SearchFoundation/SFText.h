//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFText.h"

@class NSData, NSDictionary, NSString;

@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int maxLines:1;
    } _has;
    NSString *_text;
    unsigned long long _maxLines;
}

+ (BOOL)supportsSecureCoding;
+ (id)textWithString:(id)arg1;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(copy) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasMaxLines;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

