//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying>
{
    NSString *_host;
    unsigned int _port;
    BOOL _useTls;
    struct {
        unsigned int port:1;
        unsigned int useTls:1;
    } _has;
}

@property(nonatomic) BOOL useTls; // @synthesize useTls=_useTls;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
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
@property(nonatomic) BOOL hasUseTls;
@property(nonatomic) BOOL hasPort;
@property(readonly, nonatomic) BOOL hasHost;

@end

