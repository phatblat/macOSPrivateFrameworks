//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@protocol INSearchForNotebookItemsIntentExport <NSObject, JSExport>
@property(copy) NSString *notebookItemIdentifier;
@property long long dateSearchType;
@property(copy) INDateComponentsRange *dateTime;
@property long long locationSearchType;
@property(copy) CLPlacemark *location;
@property long long status;
@property long long itemType;
@property(copy) NSString *content;
@property(copy) INSpeakableString *title;
- (id)init;
@end

