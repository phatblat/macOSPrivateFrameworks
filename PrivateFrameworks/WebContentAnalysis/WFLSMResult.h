//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WFLSMResult : NSObject
{
    NSMutableArray *categoryJudgements;
    float _threshold;
}

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(float)arg2;
+ (id)extractScoresFromLSMResults:(struct __LSMResult *)arg1;
- (BOOL)isRestricted;
- (id)debugDescription;
- (void)setScore:(float)arg1 forCategory:(long long)arg2;
- (float)scoreForCategory:(long long)arg1;
- (long long)bestMatchingCategory;
- (long long)numberOfCategories;
- (id)description;
- (void)dealloc;
- (id)initWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(float)arg2;

@end

