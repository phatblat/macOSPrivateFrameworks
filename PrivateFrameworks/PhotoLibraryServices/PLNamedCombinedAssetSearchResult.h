//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCombinedAssetSearchResult.h>

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult
{
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)hasSpecialName;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)contentStrings;
- (id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(BOOL)arg3;

@end

