//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject
{
    NSMutableArray *_pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostInterScaleNMSTextFeatures;
    NSMutableArray *_pyramidScaleSize;
}

@property(retain, nonatomic) NSMutableArray *pyramidScaleSize; // @synthesize pyramidScaleSize=_pyramidScaleSize;
@property(retain, nonatomic) NSMutableArray *pyramidPostInterScaleNMSTextFeatures; // @synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures;
@property(retain, nonatomic) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures; // @synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures;
@property(retain, nonatomic) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures; // @synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures;
- (void).cxx_destruct;
- (id)initWithNumberOfScales:(long long)arg1;

@end

