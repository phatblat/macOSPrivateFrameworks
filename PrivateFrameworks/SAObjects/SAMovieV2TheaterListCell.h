//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SADistance, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject
{
}

+ (id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)theaterListCell;
@property(retain, nonatomic) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;
@property(copy, nonatomic) NSString *theaterName;
@property(copy, nonatomic) NSString *theaterAddress;
@property(retain, nonatomic) SADistance *relativeDistance;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

