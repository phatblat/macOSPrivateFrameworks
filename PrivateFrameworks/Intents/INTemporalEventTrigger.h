//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INDateComponentsRange;

@interface INTemporalEventTrigger : NSObject <NSCopying, NSSecureCoding>
{
    INDateComponentsRange *_dateComponentsRange;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) INDateComponentsRange *dateComponentsRange; // @synthesize dateComponentsRange=_dateComponentsRange;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDateComponentsRange:(id)arg1;

@end

