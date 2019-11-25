//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MiroVPMetadataRange : NSObject <NSCopying>
{
    unsigned long long _type;
    unsigned long long _flags;
    int _startTimeInFrames;
    int _durationInFrames;
    NSDictionary *_analysisDict;
    double _score;
}

+ (void)enumerateByAscendingTypes:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)rangeWithType:(unsigned long long)arg1 flags:(unsigned long long)arg2 startTimeInFrames:(int)arg3 durationInFrames:(int)arg4 analysisDict:(id)arg5;
+ (id)descriptionForFlags:(unsigned long long)arg1;
+ (id)descriptionForType:(unsigned long long)arg1;
+ (id)mergeRanges:(id)arg1 withRanges:(id)arg2;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSDictionary *analysisDict; // @synthesize analysisDict=_analysisDict;
@property(readonly, nonatomic) int durationInFrames; // @synthesize durationInFrames=_durationInFrames;
@property(readonly, nonatomic) int startTimeInFrames; // @synthesize startTimeInFrames=_startTimeInFrames;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_setScore:(double)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

