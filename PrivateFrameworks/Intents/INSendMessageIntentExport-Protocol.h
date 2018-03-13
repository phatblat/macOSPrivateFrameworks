//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(copy) INPerson *sender;
@property(copy) NSString *serviceName;
@property(copy) NSString *conversationIdentifier;
@property(copy) INSpeakableString *speakableGroupName;
@property(copy) NSString *content;
@property(copy) NSArray *recipients;
- (id)init;
@end

