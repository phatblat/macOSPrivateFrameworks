//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersonNameComponents, NSRegularExpression, NSString;

@interface ABDelegateAccountPersistentValueUpdater : NSObject
{
    NSString *_dsid;
    NSPersonNameComponents *_nameComponents;
    NSRegularExpression *_regex;
    NSString *_fullName;
}

@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSRegularExpression *regex; // @synthesize regex=_regex;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (void)updateServerRootPathInDictionary:(id)arg1;
- (void)updateDictionary:(id)arg1 byReplacingDSIDInValueForKey:(id)arg2;
- (void)updateAccountURLInDictionary:(id)arg1;
- (id)childDictionaryByUpdatingPersistentValuesInParentDictionary:(id)arg1;
- (void)prepareFullName;
- (void)prepareRegex;
- (id)stringByReplacingDSIDInString:(id)arg1;
- (id)initWithDSID:(id)arg1 nameComponents:(id)arg2;
- (id)init;

@end

