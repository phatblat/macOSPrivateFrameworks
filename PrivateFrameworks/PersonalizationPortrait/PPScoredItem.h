//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<NSCopying>;

@interface PPScoredItem : NSObject <NSCopying>
{
    NSObject<NSCopying> *_item;
    double _score;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSObject<NSCopying> *item; // @synthesize item=_item;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScoredItem:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2;
- (void)dealloc;

@end

