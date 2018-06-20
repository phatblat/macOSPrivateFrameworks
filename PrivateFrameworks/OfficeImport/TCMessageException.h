//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@class TCMessageEntry;

@interface TCMessageException : NSException
{
    TCMessageEntry *m_entry;
}

+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (void)raise:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (id)exceptionWithMessage:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (id)getEntry;
- (id)initWithUntaggedMessage:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

