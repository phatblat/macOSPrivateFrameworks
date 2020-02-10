//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSCache, NSObject<OS_dispatch_queue>;

@interface SearchUIContactStore : NSObject
{
    CNContactStore *_contactStore;
    NSCache *_contactCache;
    NSObject<OS_dispatch_queue> *_contactFetchingQueue;
}

+ (id)placeholderContact;
+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)viewControllerDescriptorKeys;
+ (id)sharedStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue; // @synthesize contactFetchingQueue=_contactFetchingQueue;
@property(retain, nonatomic) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2;
- (id)contactForIdentifier:(id)arg1;
- (void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchContactForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedContactsForIdentifiers:(id)arg1;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)init;

@end
