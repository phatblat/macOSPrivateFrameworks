//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNotebookRestrictions : FATObject
{
    NSNumber *_noReadNotes;
    NSNumber *_noCreateNotes;
    NSNumber *_noUpdateNotes;
    NSNumber *_noExpungeNotes;
    NSNumber *_noShareNotes;
    NSNumber *_noEmailNotes;
    NSNumber *_noSendMessageToRecipients;
    NSNumber *_noUpdateNotebook;
    NSNumber *_noExpungeNotebook;
    NSNumber *_noSetDefaultNotebook;
    NSNumber *_noSetNotebookStack;
    NSNumber *_noPublishToPublic;
    NSNumber *_noPublishToBusinessLibrary;
    NSNumber *_noCreateTags;
    NSNumber *_noUpdateTags;
    NSNumber *_noExpungeTags;
    NSNumber *_noSetParentTag;
    NSNumber *_noCreateSharedNotebooks;
    NSNumber *_updateWhichSharedNotebookRestrictions;
    NSNumber *_expungeWhichSharedNotebookRestrictions;
    NSNumber *_noShareNotesWithBusiness;
    NSNumber *_noRenameNotebook;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *noRenameNotebook; // @synthesize noRenameNotebook=_noRenameNotebook;
@property(retain, nonatomic) NSNumber *noShareNotesWithBusiness; // @synthesize noShareNotesWithBusiness=_noShareNotesWithBusiness;
@property(retain, nonatomic) NSNumber *expungeWhichSharedNotebookRestrictions; // @synthesize expungeWhichSharedNotebookRestrictions=_expungeWhichSharedNotebookRestrictions;
@property(retain, nonatomic) NSNumber *updateWhichSharedNotebookRestrictions; // @synthesize updateWhichSharedNotebookRestrictions=_updateWhichSharedNotebookRestrictions;
@property(retain, nonatomic) NSNumber *noCreateSharedNotebooks; // @synthesize noCreateSharedNotebooks=_noCreateSharedNotebooks;
@property(retain, nonatomic) NSNumber *noSetParentTag; // @synthesize noSetParentTag=_noSetParentTag;
@property(retain, nonatomic) NSNumber *noExpungeTags; // @synthesize noExpungeTags=_noExpungeTags;
@property(retain, nonatomic) NSNumber *noUpdateTags; // @synthesize noUpdateTags=_noUpdateTags;
@property(retain, nonatomic) NSNumber *noCreateTags; // @synthesize noCreateTags=_noCreateTags;
@property(retain, nonatomic) NSNumber *noPublishToBusinessLibrary; // @synthesize noPublishToBusinessLibrary=_noPublishToBusinessLibrary;
@property(retain, nonatomic) NSNumber *noPublishToPublic; // @synthesize noPublishToPublic=_noPublishToPublic;
@property(retain, nonatomic) NSNumber *noSetNotebookStack; // @synthesize noSetNotebookStack=_noSetNotebookStack;
@property(retain, nonatomic) NSNumber *noSetDefaultNotebook; // @synthesize noSetDefaultNotebook=_noSetDefaultNotebook;
@property(retain, nonatomic) NSNumber *noExpungeNotebook; // @synthesize noExpungeNotebook=_noExpungeNotebook;
@property(retain, nonatomic) NSNumber *noUpdateNotebook; // @synthesize noUpdateNotebook=_noUpdateNotebook;
@property(retain, nonatomic) NSNumber *noSendMessageToRecipients; // @synthesize noSendMessageToRecipients=_noSendMessageToRecipients;
@property(retain, nonatomic) NSNumber *noEmailNotes; // @synthesize noEmailNotes=_noEmailNotes;
@property(retain, nonatomic) NSNumber *noShareNotes; // @synthesize noShareNotes=_noShareNotes;
@property(retain, nonatomic) NSNumber *noExpungeNotes; // @synthesize noExpungeNotes=_noExpungeNotes;
@property(retain, nonatomic) NSNumber *noUpdateNotes; // @synthesize noUpdateNotes=_noUpdateNotes;
@property(retain, nonatomic) NSNumber *noCreateNotes; // @synthesize noCreateNotes=_noCreateNotes;
@property(retain, nonatomic) NSNumber *noReadNotes; // @synthesize noReadNotes=_noReadNotes;
- (void).cxx_destruct;

@end
