//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding>
{
    PPLocation *_location;
    double _score;
    double _sentimentScore;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double sentimentScore; // @synthesize sentimentScore=_sentimentScore;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PPLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScoredLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3;

@end

