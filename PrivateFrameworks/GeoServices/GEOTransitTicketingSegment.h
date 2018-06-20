//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying>
{
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
}

+ (Class)pathType;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(retain, nonatomic) NSString *ticketingUrl; // @synthesize ticketingUrl=_ticketingUrl;
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
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)addPath:(id)arg1;
- (void)clearPaths;
@property(readonly, nonatomic) BOOL hasSegmentName;
@property(readonly, nonatomic) BOOL hasTicketingUrl;

@end

