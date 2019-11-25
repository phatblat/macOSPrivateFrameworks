//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNFoundationUserDefaults.h"

@class CNUserDefaults, NSDictionary, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>
{
    CNUserDefaults *_userDefaults;
}

+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1;
+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
@property(retain) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
@property(nonatomic) NSDictionary *filteredAccountsAndContainers;
@property(nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property unsigned long long shortNameFormat;
@property BOOL preferNickname;
@property unsigned long long nameOrder;
- (id)countryCode;
- (unsigned long long)sortOrder;
- (unsigned long long)newContactNameOrder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

