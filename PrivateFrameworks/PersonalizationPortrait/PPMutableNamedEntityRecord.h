//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class NSString, PPNamedEntity, PPSource;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord
{
}

@property(nonatomic) unsigned char changeType; // @dynamic changeType;
@property(nonatomic) unsigned long long extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) unsigned long long algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPNamedEntity *entity; // @dynamic entity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
