//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject
{
    unsigned char _identifier;
    long long _type;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned char identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;
- (id)description;
- (id)buttonName;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)init;

@end

