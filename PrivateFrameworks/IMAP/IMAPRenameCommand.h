//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPMailboxCommand.h>

@class NSString;

@interface IMAPRenameCommand : IMAPMailboxCommand
{
    NSString *_nameForNewMailbox;
    NSString *_nameForNewMailboxArgument;
}

@property(copy) NSString *nameForNewMailboxArgument; // @synthesize nameForNewMailboxArgument=_nameForNewMailboxArgument;
@property(copy) NSString *nameForNewMailbox; // @synthesize nameForNewMailbox=_nameForNewMailbox;
- (void).cxx_destruct;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)debugCommandStringWithAccount:(id)arg1;
- (id)detailsString;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMailboxName:(id)arg1 newMailboxName:(id)arg2;

@end

