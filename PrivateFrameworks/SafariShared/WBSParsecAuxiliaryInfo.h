//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel
{
    NSString *_topText;
    NSString *_middleText;
    NSString *_bottomText;
    NSString *_bottomTextColor;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSString *bottomTextColor; // @synthesize bottomTextColor=_bottomTextColor;
@property(readonly, copy, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(readonly, copy, nonatomic) NSString *middleText; // @synthesize middleText=_middleText;
@property(readonly, copy, nonatomic) NSString *topText; // @synthesize topText=_topText;
- (void).cxx_destruct;
- (id)initWithSFSearchResult:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

