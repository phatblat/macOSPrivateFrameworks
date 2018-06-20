//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (XSMiscellaneousAdditions)
+ (id)dictionaryWithPropertyListDictionary:(id)arg1;
+ (id)dictionaryWithXMLDescription:(id)arg1;
+ (id)dictionaryWithXMLDescription:(id)arg1 error:(id *)arg2;
+ (id)responseDictionaryWithError:(id)arg1;
- (id)deepMutableCopyWithMutableLeaves:(BOOL)arg1;
- (id)deepMutableCopy;
- (BOOL)boolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (id)booleanForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)propertyListDictionary;
- (BOOL)isServiceAccessControlGroup;
- (BOOL)isSystemAccount;
- (id)dictionaryWithPasswordsRemoved;
- (id)xmlDescription;
@end

