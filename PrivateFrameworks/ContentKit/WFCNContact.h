//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContact.h>

@class CNContact, NSString, WFFileRepresentation;

@interface WFCNContact : WFContact
{
    BOOL _fromVCard;
    int _propertyID;
    long long _multivalueIndex;
    WFFileRepresentation *_vCardRepresentation;
    CNContact *_contact;
}

+ (void)removeContactsChangeObserver:(id)arg1;
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;
+ (void)contactStoreDidChange:(id)arg1;
+ (void)updateContactStoreObservation;
+ (id)changeObservers;
+ (id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactWithCNContact:(id)arg1;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactsWithVCardData:(id)arg1;
+ (id)contactsWithName:(id)arg1 keysToFetch:(id)arg2;
+ (id)contactsWithName:(id)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)requiredKeysToFetch;
@property(readonly, nonatomic) BOOL fromVCard; // @synthesize fromVCard=_fromVCard;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (long long)multivalueIndex;
- (int)propertyID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)instantMessageAddresses;
- (id)socialProfiles;
- (id)URLs;
- (id)streetAddresses;
- (id)emailAddresses;
- (id)phoneNumbers;
- (id)dates;
- (id)birthday;
- (id)thumbnailImageData;
- (id)imageData;
- (BOOL)hasImageData;
- (BOOL)hasValueForPropertyID:(int)arg1;
- (BOOL)isPropertyIDRepresented:(int)arg1;
- (id)organization;
- (id)nickname;
- (id)nameSuffix;
- (id)lastName;
- (id)middleName;
- (id)firstName;
- (id)namePrefix;
- (id)formattedName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier;
- (id)vCardRepresentation;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;
- (id)valueForPropertyID:(int)arg1;
- (void)refetchContact;
- (id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4;

@end
