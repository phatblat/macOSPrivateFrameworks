//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAssistantMessageHandlerDataSource.h"

@class CNContactStore, NSCache, NSString;

@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource>
{
    BOOL _didRegisterForContactStoreChangeNotifications;
    CNContactStore *_contactStore;
}

@property(nonatomic) BOOL didRegisterForContactStoreChangeNotifications; // @synthesize didRegisterForContactStoreChangeNotifications=_didRegisterForContactStoreChangeNotifications;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1;
- (BOOL)screentimeAllowedToShowChat:(id)arg1;
@property(readonly, nonatomic) BOOL isInternationalSpamFilteringEnabled;
- (void)registerForContactStoreChangeNotificationsIfNecessary;
- (void)contactStoreDidChange:(id)arg1;
@property(readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property(readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property(readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property(readonly, nonatomic) id <IMLocationManager> locationManagerDataSource;
@property(readonly, nonatomic) id <IMAssistantAccountDataSource> accountDataSource;
@property(readonly, nonatomic) id <IMAssistantContactsDataSource> contactsDataSource;
@property(readonly, nonatomic) id <IMAssistantChatDataSource> chatDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

