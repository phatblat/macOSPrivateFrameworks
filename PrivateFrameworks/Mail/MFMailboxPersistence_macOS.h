//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EDMailboxPersistence.h"

@class EDPersistenceDatabase;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence
{
    EDPersistenceDatabase *_database;
}

@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2;

@end

