//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand
{
}

+ (id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)estimateTTSRequestDuration;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *texts;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *gender;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

