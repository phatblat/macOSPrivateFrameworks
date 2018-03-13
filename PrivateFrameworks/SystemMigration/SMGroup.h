//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SMGroup : NSObject
{
    unsigned int _gid;
    NSString *_name;
    NSNumber *_groupID;
    NSString *_generatedUID;
    NSArray *_users;
    NSArray *_groupMembers;
    NSArray *_groupMembership;
    NSArray *_nestedGroups;
}

@property(retain) NSArray *nestedGroups; // @synthesize nestedGroups=_nestedGroups;
@property(retain) NSArray *groupMembership; // @synthesize groupMembership=_groupMembership;
@property(retain) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain) NSArray *users; // @synthesize users=_users;
@property(retain) NSString *generatedUID; // @synthesize generatedUID=_generatedUID;
@property(retain) NSNumber *groupID; // @synthesize groupID=_groupID;
@property unsigned int gid; // @synthesize gid=_gid;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

