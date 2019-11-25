//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFSearchableIndexQueryFactory_macOS : NSObject
{
    BOOL _searchableIndexEnabled;
    NSString *_emailContentType;
    NSString *_attachmentFormatString;
}

+ (id)lowestPriorityMessageExpression;
+ (id)highestPriorityMessageExpression;
+ (id)expressionForMessagePriority:(long long)arg1;
+ (id)mailboxScopedExpressionWithExpression:(id)arg1 mailboxURLStrings:(id)arg2;
+ (id)accountScopedExpressionWithExpression:(id)arg1 accountIdentifiers:(id)arg2;
+ (id)_scopedExpressionWithExpression:(id)arg1 identifiers:(id)arg2 attribute:(id)arg3;
+ (id)defaultFactory;
@property(readonly, nonatomic, getter=isSearchableIndexEnabled) BOOL searchableIndexEnabled; // @synthesize searchableIndexEnabled=_searchableIndexEnabled;
@property(readonly, nonatomic) NSString *attachmentFormatString; // @synthesize attachmentFormatString=_attachmentFormatString;
@property(readonly, nonatomic) NSString *emailContentType; // @synthesize emailContentType=_emailContentType;
- (void).cxx_destruct;
- (id)expressionForQueryString:(id)arg1 includeAttachmentCriterion:(BOOL)arg2;
- (id)queryStringForAllMailboxesWithQueryString:(id)arg1 excludedMailboxesQueryString:(id)arg2 forUnreadCount:(BOOL)arg3 includeAttachmentCriterion:(BOOL)arg4;
- (id)expressionForAllMailboxesWithExpression:(id)arg1 excludedMailboxesExpression:(id)arg2 forUnreadCount:(BOOL)arg3 includeAttachmentCriterion:(BOOL)arg4;
- (id)initWithSearchableIndexEnabled:(BOOL)arg1;

@end

