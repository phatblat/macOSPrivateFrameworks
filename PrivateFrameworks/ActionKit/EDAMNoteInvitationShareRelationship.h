//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteInvitationShareRelationship : FATObject
{
    NSString *_displayName;
    NSNumber *_recipientIdentityId;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSNumber *recipientIdentityId; // @synthesize recipientIdentityId=_recipientIdentityId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
