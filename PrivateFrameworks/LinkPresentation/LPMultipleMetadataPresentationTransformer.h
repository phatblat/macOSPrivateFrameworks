//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject
{
    NSArray *_metadata;
    NSDictionary *_summaryCounts;
    BOOL _hasOnlyFiles;
}

- (void).cxx_destruct;
- (id)summaryMetadata;
- (id)_summarySubtitle;
- (id)summaryImages;
- (id)summary;
- (id)_summaryCounts;
- (id)initWithMetadata:(id)arg1;

@end
