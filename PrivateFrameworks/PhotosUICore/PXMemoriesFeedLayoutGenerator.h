//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator
{
    BOOL _includeDateHeader;
    BOOL _isFirstHeader;
}

@property(nonatomic) BOOL isFirstHeader; // @synthesize isFirstHeader=_isFirstHeader;
@property(nonatomic) BOOL includeDateHeader; // @synthesize includeDateHeader=_includeDateHeader;
- (id)initWithMetrics:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) PXMemoriesFeedLayoutMetrics *metrics; // @dynamic metrics;

@end
