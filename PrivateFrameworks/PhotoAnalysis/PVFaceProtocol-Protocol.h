//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol PVFaceProtocol <NSObject>
@property(nonatomic) long long qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@end

