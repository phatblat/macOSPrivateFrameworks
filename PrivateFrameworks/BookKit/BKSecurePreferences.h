//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BKSecurePreferences : NSObject
{
    id <BKSecurePreferencesDelegate> _delegate;
}

@property(nonatomic) __weak id <BKSecurePreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_parentalPreferenceIsForcedForKey:(id)arg1;
- (void)_systemProfilePreferencesDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL explicitContentRestricted;
@property(readonly, nonatomic) BOOL bookstoreDisabled;
- (void)dealloc;
- (id)init;

@end

