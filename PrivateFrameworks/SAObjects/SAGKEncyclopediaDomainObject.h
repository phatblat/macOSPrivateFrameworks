//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject
{
}

+ (id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)encyclopediaDomainObject;
@property(copy, nonatomic) NSArray *structuredAnswers;
@property(copy, nonatomic) NSString *nameAnnotation;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSArray *linkedAnswerGroups;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
