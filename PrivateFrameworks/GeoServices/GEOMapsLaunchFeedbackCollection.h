//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    struct {
        unsigned int sessionId:1;
    } _has;
}

@property(retain, nonatomic) NSString *uriScheme; // @synthesize uriScheme=_uriScheme;
@property(retain, nonatomic) NSString *sourceAppBundleId; // @synthesize sourceAppBundleId=_sourceAppBundleId;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
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
@property(readonly, nonatomic) BOOL hasUriScheme;
@property(readonly, nonatomic) BOOL hasSourceAppBundleId;
@property(nonatomic) BOOL hasSessionId;

@end

