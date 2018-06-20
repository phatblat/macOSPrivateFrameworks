//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABAbstractAccountConfiguration.h>

@class ABAccount;

@interface ABPointOfInterestAccountConfiguration : ABAbstractAccountConfiguration
{
    ABAccount *_account;
}

- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
@property(nonatomic, getter=isSearchable) BOOL searchable;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 persistence:(id)arg2;

@end

