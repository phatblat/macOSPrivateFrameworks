//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

@class EMMailboxScope;

@interface EDThreadQueryHandler : EDMessageRepositoryQueryHandler
{
    EMMailboxScope *_mailboxScope;
}

@property(retain, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
- (void).cxx_destruct;
- (void)reloadSummaryForChanges:(id)arg1;
- (id)_messageObjectIDForCollectionItemID:(id)arg1;
- (id)threadForObjectID:(id)arg1 error:(id *)arg2;

@end

