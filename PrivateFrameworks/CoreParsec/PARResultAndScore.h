//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFSearchResult;

__attribute__((visibility("hidden")))
@interface PARResultAndScore : NSObject
{
    SFSearchResult *_result;
    double _topicScore;
    double _mediatypeScore;
    double _tldScore;
    double _totalScore;
    double _serverScore;
    double _personalizationBorda;
    double _serverBorda;
    double _blendedBordaScore;
}

@property(nonatomic) double blendedBordaScore; // @synthesize blendedBordaScore=_blendedBordaScore;
@property(nonatomic) double serverBorda; // @synthesize serverBorda=_serverBorda;
@property(nonatomic) double personalizationBorda; // @synthesize personalizationBorda=_personalizationBorda;
@property(nonatomic) double serverScore; // @synthesize serverScore=_serverScore;
@property(nonatomic) double totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) double tldScore; // @synthesize tldScore=_tldScore;
@property(nonatomic) double mediatypeScore; // @synthesize mediatypeScore=_mediatypeScore;
@property(nonatomic) double topicScore; // @synthesize topicScore=_topicScore;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
