//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSString;

@interface EDAMManageNoteSharesParameters : FATObject
{
    NSString *_noteGuid;
    NSArray *_membershipsToUpdate;
    NSArray *_invitationsToUpdate;
    NSArray *_membershipsToUnshare;
    NSArray *_invitationsToUnshare;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSArray *invitationsToUnshare; // @synthesize invitationsToUnshare=_invitationsToUnshare;
@property(retain, nonatomic) NSArray *membershipsToUnshare; // @synthesize membershipsToUnshare=_membershipsToUnshare;
@property(retain, nonatomic) NSArray *invitationsToUpdate; // @synthesize invitationsToUpdate=_invitationsToUpdate;
@property(retain, nonatomic) NSArray *membershipsToUpdate; // @synthesize membershipsToUpdate=_membershipsToUpdate;
@property(retain, nonatomic) NSString *noteGuid; // @synthesize noteGuid=_noteGuid;
- (void).cxx_destruct;

@end
