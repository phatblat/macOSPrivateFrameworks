//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDGmailLabelPersistence, EDPersistenceDatabase;

@interface EDServerMessagePersistenceFactory : NSObject
{
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
}

@property(readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // @synthesize gmailLabelPersistence=_gmailLabelPersistence;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)serverMessagePersistenceForMailboxURL:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;

@end
