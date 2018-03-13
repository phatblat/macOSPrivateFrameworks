//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying>
{
    unsigned int _formats;
    int _operation;
    unsigned int _preferredFormat;
    int _transport;
    struct {
        unsigned int preferredFormat:1;
    } _has;
}

@property(nonatomic) unsigned int preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(nonatomic) unsigned int formats; // @synthesize formats=_formats;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPreferredFormat;
- (int)StringAsOperation:(id)arg1;
- (id)operationAsString:(int)arg1;
- (int)StringAsTransport:(id)arg1;
- (id)transportAsString:(int)arg1;

@end

