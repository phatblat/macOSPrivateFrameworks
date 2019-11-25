//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _platformType;
    struct {
        unsigned int has_platformType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_applicationIds:1;
        unsigned int read_debugLayoutId:1;
        unsigned int read_modules:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_applicationIds:1;
        unsigned int wrote_debugLayoutId:1;
        unsigned int wrote_modules:1;
        unsigned int wrote_platformType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)modulesType;
+ (Class)applicationIdType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (void)_addNoFlagsModules:(id)arg1;
- (void)addModules:(id)arg1;
- (void)clearModules;
@property(retain, nonatomic) NSMutableArray *modules;
- (void)_readModules;
- (int)StringAsPlatformType:(id)arg1;
- (id)platformTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlatformType;
@property(nonatomic) int platformType;
@property(retain, nonatomic) NSString *debugLayoutId;
@property(readonly, nonatomic) BOOL hasDebugLayoutId;
- (void)_readDebugLayoutId;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationIdsCount;
- (void)_addNoFlagsApplicationId:(id)arg1;
- (void)addApplicationId:(id)arg1;
- (void)clearApplicationIds;
@property(retain, nonatomic) NSMutableArray *applicationIds;
- (void)_readApplicationIds;
- (id)initWithData:(id)arg1;
- (id)init;

@end

