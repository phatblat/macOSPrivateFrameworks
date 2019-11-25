//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSInvestigationPhotoKitFeeder, NSArray, NSSet, NSString, PGGraphHighlightNode;

@interface PGHighlightTailorContext : NSObject
{
    BOOL _babyIsPresent;
    BOOL _petIsPresent;
    id <PGHighlightModel> _highlight;
    PGGraphHighlightNode *_highlightNode;
    NSSet *_meaningLabels;
    NSSet *_momentNodes;
    CLSInvestigationPhotoKitFeeder *_feeder;
    NSString *_keyAssetUUID;
    double _promotionScore;
    unsigned long long numberOfExtendedAssets;
    NSArray *_childHighlights;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property(retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers; // @synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers;
@property(retain, nonatomic) NSArray *childHighlights; // @synthesize childHighlights=_childHighlights;
@property(nonatomic) unsigned long long numberOfExtendedAssets; // @synthesize numberOfExtendedAssets;
@property(nonatomic) double promotionScore; // @synthesize promotionScore=_promotionScore;
@property(copy, nonatomic) NSString *keyAssetUUID; // @synthesize keyAssetUUID=_keyAssetUUID;
@property(readonly, nonatomic) CLSInvestigationPhotoKitFeeder *feeder; // @synthesize feeder=_feeder;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) BOOL petIsPresent; // @synthesize petIsPresent=_petIsPresent;
@property(readonly, nonatomic) BOOL babyIsPresent; // @synthesize babyIsPresent=_babyIsPresent;
@property(retain, nonatomic) NSSet *meaningLabels; // @synthesize meaningLabels=_meaningLabels;
@property(readonly, nonatomic) PGGraphHighlightNode *highlightNode; // @synthesize highlightNode=_highlightNode;
@property(readonly, nonatomic) id <PGHighlightModel> highlight; // @synthesize highlight=_highlight;
- (void).cxx_destruct;
- (id)initForTestingWithHighlight:(id)arg1;
- (id)initWithHighlight:(id)arg1 forManager:(id)arg2;

@end

