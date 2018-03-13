//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPRange.h"

@class NSData, NSString;

@interface _CPRange : PBCodable <_CPRange, NSSecureCoding>
{
    struct {
        unsigned int location:1;
        unsigned int length:1;
    } _has;
    unsigned long long _location;
    unsigned long long _length;
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasLength;
@property(readonly, nonatomic) BOOL hasLocation;
- (BOOL)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

