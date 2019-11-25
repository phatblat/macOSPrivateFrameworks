//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSData *_storage;
}

+ (id)stringForActivityType:(long long)arg1;
+ (id)dataFromUserActivity:(id)arg1;
+ (id)userActivityWithDictionaryData:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)userActivityWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSData *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescriptionDetails;
- (id)debugDescription;
- (id)siriIntent;
- (id)userActivityData;
- (id)userActivity;
- (id)universalLink;
- (id)archivedDictionaryData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSiriIntent:(id)arg1;
- (id)initWithUserActivityData:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUniversalLink:(id)arg1;
- (id)initWithType:(long long)arg1 storage:(id)arg2;

@end

