//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUILParseableExpression : SADomainObject
{
}

+ (id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parseableExpression;
@property(copy, nonatomic) NSString *expressionString;
@property(retain, nonatomic) SADomainObject *context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

