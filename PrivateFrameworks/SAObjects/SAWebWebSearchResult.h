//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>
{
}

+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webSearchResult;
@property(copy, nonatomic) NSArray *webResults;
@property(copy, nonatomic) NSArray *videoResults;
@property(copy, nonatomic) NSNumber *totalWebResults;
@property(copy, nonatomic) NSNumber *totalVideoResults;
@property(copy, nonatomic) NSNumber *totalNewsResults;
@property(copy, nonatomic) NSNumber *totalImageResults;
@property(copy, nonatomic) NSArray *relatedSearchResults;
@property(copy, nonatomic) NSArray *newsResults;
@property(copy, nonatomic) NSArray *imageResults;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

