//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGSingleAssetSuggestion.h>

@class NSArray;

@interface PGPeopleCentricSuggestion : PGSingleAssetSuggestion
{
    NSArray *_suggestedPersonLocalIdentifiers;
}

- (id)suggestedPersonLocalIdentifiers;
- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifiers:(id)arg1 asset:(id)arg2;
- (id)initWithPersonLocalIdentifier:(id)arg1 asset:(id)arg2;

@end
