//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, PGGraphMomentNode, PHAsset;

@interface PGSharingRecord : NSObject <NSSecureCoding>
{
    unsigned long long _type;
    NSDate *_date;
    NSArray *_persons;
    PGGraphMomentNode *_momentNode;
    NSString *_momentLocalIdentifier;
    PHAsset *_asset;
    NSString *_assetLocalIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSString *momentLocalIdentifier; // @synthesize momentLocalIdentifier=_momentLocalIdentifier;
@property(retain, nonatomic) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(readonly, nonatomic) NSArray *persons; // @synthesize persons=_persons;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForPersistence;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentNode:(id)arg4 asset:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 assetLocalIdentifier:(id)arg5;

@end

