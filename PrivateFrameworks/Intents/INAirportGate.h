//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INJSONSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INAirport, NSString;

@interface INAirportGate : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INAirport *_airport;
    NSString *_terminal;
    NSString *_gate;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *gate; // @synthesize gate=_gate;
@property(readonly, copy) NSString *terminal; // @synthesize terminal=_terminal;
@property(readonly, copy) INAirport *airport; // @synthesize airport=_airport;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAirport:(id)arg1 terminal:(id)arg2 gate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
