//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface INArchivedObject : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_typeName;
    NSData *_messageData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSData *messageData; // @synthesize messageData=_messageData;
@property(readonly, copy) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;

@end

