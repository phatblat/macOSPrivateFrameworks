//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ASStreamFormat, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ASCLIENTStreamPrefs : PBCodable <NSCopying>
{
    double _scalarVolume;
    unsigned int _dSPFlavor;
    int _muteState;
    ASStreamFormat *_streamFormat;
    unsigned int _streamToken;
    NSMutableArray *_virtualPortUIDs;
    struct {
        unsigned int scalarVolume:1;
        unsigned int dSPFlavor:1;
        unsigned int muteState:1;
    } _has;
}

+ (Class)virtualPortUIDsType;
@property(retain, nonatomic) NSMutableArray *virtualPortUIDs; // @synthesize virtualPortUIDs=_virtualPortUIDs;
@property(nonatomic) double scalarVolume; // @synthesize scalarVolume=_scalarVolume;
@property(retain, nonatomic) ASStreamFormat *streamFormat; // @synthesize streamFormat=_streamFormat;
@property(nonatomic) unsigned int dSPFlavor; // @synthesize dSPFlavor=_dSPFlavor;
@property(nonatomic) unsigned int streamToken; // @synthesize streamToken=_streamToken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)virtualPortUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)virtualPortUIDsCount;
- (void)addVirtualPortUIDs:(id)arg1;
- (void)clearVirtualPortUIDs;
- (int)StringAsMuteState:(id)arg1;
- (id)muteStateAsString:(int)arg1;
@property(nonatomic) BOOL hasMuteState;
@property(nonatomic) int muteState; // @synthesize muteState=_muteState;
@property(nonatomic) BOOL hasScalarVolume;
@property(readonly, nonatomic) BOOL hasStreamFormat;
@property(nonatomic) BOOL hasDSPFlavor;

@end
