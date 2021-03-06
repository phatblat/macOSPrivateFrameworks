//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PRSModelFeedbackContext : NSObject
{
    float *_scores;
    NSString *_l2Version;
    NSString *_l2ShadowVersion;
}

@property(retain, nonatomic) NSString *l2ShadowVersion; // @synthesize l2ShadowVersion=_l2ShadowVersion;
@property(retain, nonatomic) NSString *l2Version; // @synthesize l2Version=_l2Version;
@property(nonatomic) float *scores; // @synthesize scores=_scores;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScores:(float *)arg1 models:(id)arg2 shadowModels:(id)arg3;

@end

