//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionItem.h>

@class NSUserActivity;

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem
{
    NSUserActivity *_userActivity;
}

@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (id)_personFromIntent:(id)arg1;
- (unsigned long long)_hashForIntent:(id)arg1;
- (BOOL)_isIntent:(id)arg1 equalToOther:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end

