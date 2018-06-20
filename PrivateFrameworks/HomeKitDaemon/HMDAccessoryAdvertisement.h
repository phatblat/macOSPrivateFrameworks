//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessoryCategory, NSString;

@interface HMDAccessoryAdvertisement : NSObject
{
    NSString *_identifier;
    NSString *_name;
    HMAccessoryCategory *_category;
}

@property(readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) long long associationOptions;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;

@end

