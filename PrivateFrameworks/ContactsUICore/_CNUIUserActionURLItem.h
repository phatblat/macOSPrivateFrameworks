//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem
{
    BOOL _isSensitive;
    CNFuture *_url;
}

@property(readonly, nonatomic) BOOL isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) CNFuture *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(BOOL)arg2;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end

