//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData, NSString;

@interface SISchemaActiveAudioDevice : PBCodable
{
    NSString *_vendorIdentifier;
    NSString *_productIdentifier;
}

@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

