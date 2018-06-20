//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSNumber;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding>
{
    NSNumber *_state;
    NSDate *_timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSNumber *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 timestamp:(id)arg2;

@end

