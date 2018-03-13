//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding>
{
    BOOL _userInterventionRequired;
    int _type;
    NSData *_identifier;
    NSData *_token;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSData *token; // @synthesize token=_token;
@property int type; // @synthesize type=_type;
@property BOOL userInterventionRequired; // @synthesize userInterventionRequired=_userInterventionRequired;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;
- (id)description;
- (void)dealloc;

@end

