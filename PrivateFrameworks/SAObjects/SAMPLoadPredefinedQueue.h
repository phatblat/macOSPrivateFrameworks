//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand
{
}

+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)loadPredefinedQueue;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *startPlaying;
@property(nonatomic) BOOL shouldShuffle;
@property(nonatomic) int mediaItemType;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(nonatomic) BOOL dryRun;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

