//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PRSRankingItemCollection : NSObject
{
    NSArray *_arrayOfRankingItems;
    unsigned long long _countOfVisibleResults;
    NSString *_bundleIdentifier;
}

@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property unsigned long long countOfVisibleResults; // @synthesize countOfVisibleResults=_countOfVisibleResults;
@property(retain) NSArray *arrayOfRankingItems; // @synthesize arrayOfRankingItems=_arrayOfRankingItems;
- (void).cxx_destruct;
- (id)description;

@end

