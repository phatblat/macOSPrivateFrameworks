//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SASmsDraftShow : SADomainCommand
{
}

+ (id)draftShowWithDictionary:(id)arg1 context:(id)arg2;
+ (id)draftShow;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *smsIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

