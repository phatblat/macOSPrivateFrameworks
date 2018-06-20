//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INDateComponentsRange, NSArray;

@protocol INSearchForMessagesIntentExport <NSObject, JSExport>
@property(copy) NSArray *conversationIdentifiers;
@property(copy) NSArray *speakableGroupNames;
@property(copy) NSArray *notificationIdentifiers;
@property(copy) NSArray *identifiers;
@property(copy) INDateComponentsRange *dateTimeRange;
@property unsigned long long attributes;
@property(copy) NSArray *searchTerms;
@property(copy) NSArray *senders;
@property(copy) NSArray *recipients;
- (id)init;
@end
