//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableDictionary, NSString;

@interface RPPerson : NSObject <NSSecureCoding>
{
    unsigned int _flags;
    int _proximity;
    NSArray *_devices;
    NSString *_identifier;
    NSString *_name;
    struct NSMutableDictionary *_deviceDict;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *deviceDict; // @synthesize deviceDict=_deviceDict;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (unsigned int)_updateDeviceDerivedInfo;
- (unsigned int)updateWithRPDevice:(id)arg1;
- (unsigned int)removeRPDevice:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

