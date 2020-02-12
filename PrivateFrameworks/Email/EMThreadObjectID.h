//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMObjectID.h>

#import "EFPubliclyDescribable.h"

@class EMThreadCollectionItemID, EMThreadScope, NSString;

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable>
{
    EMThreadCollectionItemID *_collectionItemID;
    EMThreadScope *_threadScope;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property(readonly, nonatomic) EMThreadCollectionItemID *collectionItemID; // @synthesize collectionItemID=_collectionItemID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long conversationID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationID:(long long)arg1 threadScope:(id)arg2;
- (id)initWithCollectionItemID:(id)arg1 threadScope:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
