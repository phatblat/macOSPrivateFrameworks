//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLPlacemark, PPLocationRecord;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _category;
    CLPlacemark *_placemark;
    PPLocationRecord *_mostRelevantRecord;
}

+ (id)describeCategory:(unsigned short)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PPLocationRecord *mostRelevantRecord; // @synthesize mostRelevantRecord=_mostRelevantRecord;
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)customizedDescription;
- (BOOL)isEqualToLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;
- (id)init;

@end

