//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKSharee.h"

@interface EKSharee (CalClassAdditions)
+ (id)calUI_shareeWithAddress:(id)arg1 name:(id)arg2;
+ (id)shareeForString:(id)arg1 inAddressBook:(id)arg2;
+ (id)personForString:(id)arg1 inAddressBook:(id)arg2;
+ (id)shareeFromDictionary:(id)arg1;
+ (id)shareeFromPerson:(id)arg1 distributionIdentifier:(id)arg2;
+ (id)shareeFromPerson:(id)arg1;
- (id)newPersonWithAddressBook:(id)arg1;
- (id)dictionaryRepresentation;
- (id)displayString;
@end
