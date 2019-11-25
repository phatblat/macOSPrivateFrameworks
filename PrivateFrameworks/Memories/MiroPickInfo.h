//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface MiroPickInfo : NSObject <NSCopying>
{
    float _score;
    float _distance;
    float _splitDistance;
    float _imageDistance;
    unsigned long long _pickOrder;
    unsigned long long _adjustedPickOrder;
    unsigned long long _sourceOrder;
    unsigned long long _splitOrder;
    id <MiroMediaItem> _item;
    unsigned long long _clipCompareResultFlags;
}

+ (id)pickInfoWithItem:(id)arg1 score:(float)arg2 distance:(float)arg3 splitDistance:(float)arg4 pickOrder:(unsigned long long)arg5 adjustedPickOrder:(unsigned long long)arg6 sourceOrder:(unsigned long long)arg7 splitOrder:(unsigned long long)arg8 imageDistance:(float)arg9 clipCompareResultFlags:(unsigned long long)arg10;
@property(readonly, nonatomic) unsigned long long clipCompareResultFlags; // @synthesize clipCompareResultFlags=_clipCompareResultFlags;
@property(readonly, nonatomic) float imageDistance; // @synthesize imageDistance=_imageDistance;
@property(readonly, nonatomic) id <MiroMediaItem> item; // @synthesize item=_item;
@property(nonatomic) unsigned long long splitOrder; // @synthesize splitOrder=_splitOrder;
@property(nonatomic) unsigned long long sourceOrder; // @synthesize sourceOrder=_sourceOrder;
@property(nonatomic) unsigned long long adjustedPickOrder; // @synthesize adjustedPickOrder=_adjustedPickOrder;
@property(nonatomic) unsigned long long pickOrder; // @synthesize pickOrder=_pickOrder;
@property(nonatomic) float splitDistance; // @synthesize splitDistance=_splitDistance;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) float score; // @synthesize score=_score;
- (void).cxx_destruct;
- (double)_idealDurationForBlueprint:(id)arg1 biased:(BOOL)arg2 max:(BOOL)arg3;
- (double)voiceRangeDuration;
- (double)trimmedDuration;
- (double)idealDurationForBlueprint:(id)arg1 biased:(BOOL)arg2 maxPleasant:(BOOL)arg3 respectTrim:(BOOL)arg4;
- (double)idealDurationForBlueprint:(id)arg1 respectTrim:(BOOL)arg2;
@property(readonly, nonatomic) double maxPleasantDuration;
@property(readonly, nonatomic) double biasedDuration;
@property(readonly, nonatomic) double idealDurationWithTrim;
@property(readonly, nonatomic) double idealDuration;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

