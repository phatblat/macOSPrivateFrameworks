//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1 key:(id)arg2;
- (id)initWithNumber:(id)arg1 key:(id)arg2;

@end

