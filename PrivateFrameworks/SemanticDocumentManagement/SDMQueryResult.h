//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HelpSDMModel, NSArray, NSString;

@interface SDMQueryResult : NSObject
{
    HelpSDMModel *_sdmModel;
    unsigned int _docID;
    float _score;
    float _topScore;
    unsigned int _tokenMultiplier;
    NSString *_path;
    NSString *_book;
    NSString *_title;
    NSArray *_keywords;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned int docID; // @synthesize docID=_docID;
@property(nonatomic) unsigned int tokenMultiplier; // @synthesize tokenMultiplier=_tokenMultiplier;
@property(nonatomic) float topScore; // @synthesize topScore=_topScore;
@property(nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) HelpSDMModel *sdmModel; // @synthesize sdmModel=_sdmModel;
- (id)description;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) NSString *book;
@property(readonly, nonatomic) NSString *path;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 score:(float)arg2;
- (id)initWithSDMModel:(id)arg1 docID:(unsigned int)arg2 score:(float)arg3;

@end

