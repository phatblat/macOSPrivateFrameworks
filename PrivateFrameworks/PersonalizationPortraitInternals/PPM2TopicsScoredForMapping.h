//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface PPM2TopicsScoredForMapping : PBCodable <NSCopying>
{
    NSString *_bundleId;
    NSString *_mappingId;
    unsigned int _resultSizeLog10;
    BOOL _error;
    BOOL _exclusionSpec;
    BOOL _timeLimited;
    struct {
        unsigned int resultSizeLog10:1;
        unsigned int error:1;
        unsigned int exclusionSpec:1;
        unsigned int timeLimited:1;
    } _has;
}

@property(nonatomic) BOOL error; // @synthesize error=_error;
@property(nonatomic) BOOL exclusionSpec; // @synthesize exclusionSpec=_exclusionSpec;
@property(nonatomic) BOOL timeLimited; // @synthesize timeLimited=_timeLimited;
@property(nonatomic) unsigned int resultSizeLog10; // @synthesize resultSizeLog10=_resultSizeLog10;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
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
@property(nonatomic) BOOL hasError;
@property(nonatomic) BOOL hasExclusionSpec;
@property(nonatomic) BOOL hasTimeLimited;
@property(nonatomic) BOOL hasResultSizeLog10;
@property(readonly, nonatomic) BOOL hasMappingId;
@property(readonly, nonatomic) BOOL hasBundleId;

@end

