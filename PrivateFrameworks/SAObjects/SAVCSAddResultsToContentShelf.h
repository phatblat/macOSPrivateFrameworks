//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUIAddContentToView.h>

@class NSArray, NSString;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView
{
}

+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addResultsToContentShelf;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *results;
@property(nonatomic) long long pageNumber;
@property(copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property(copy, nonatomic) NSString *contentShelfViewId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
