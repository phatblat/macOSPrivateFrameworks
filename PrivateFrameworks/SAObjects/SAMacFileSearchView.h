//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView
{
}

+ (id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fileSearchView;
@property(copy, nonatomic) NSString *searchTitle;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) long long numResults;
@property(copy, nonatomic) NSArray *entities;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
